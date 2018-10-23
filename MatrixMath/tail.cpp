
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cerrno>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
//#include <ctype.h>


using std::cout;
using std::endl;
using std::string;
using std::cerr;

using namespace std;

/* Set buffer size to 4096 bytes */
const int BUFF_SIZE = 8192;


/*function prototypes*/
/*!
 * Writes tail end of a file, specified by the offset from end.
 * @param fd integer represents file descriptor.
 * @param line_offset integer that represents number of lines from the end of the file to write.
 */
void writeLines(int fd, int line_offset);

/*!
 * Write some number of bytes in a file starting from the end.
 * @param fd int represents a file descriptor.
 * @param byte_offset int that represents offset in bytes from end.
 */
void writeBytes(int fd, int byte_offset);

/*!
 *Prints error message.
 * @param err int mapped to an error message.
 */
void errorMess(int err);

/*!
 * Standard input, output.
 * @param fd int represents file descriptor.
 */
void stdInOut(int fd);


int main(const int argc, char *argv[]) {

    struct stat buf;
    char *filename;
    bool useLines = 0;
    string arg = "";
    int fd;
    int offset = 0;// number bytes or lines specified
    bool option = false;

    if (argc == 1)
    {
        writeLines (STDIN_FILENO,10);
//        stdInOut (STDIN_FILENO);
    }
    if (argc >= 2)
    {

        if (strcmp (argv[1], "-n") == 0)/* number of lines option*/
        {
            arg = argv[2];
            for (char &c: arg) {
                if (isdigit (c) == 0)
                    errorMess (1);
            }
            offset = stoi (argv[2]);
            useLines = true;
            option = true;

        } else if (strcmp (argv[1], "-c") == 0)/* number of bytes option*/
        {
            arg = argv[2];
            for (char &c: arg) {
                if (isdigit (c) == 0)
                    errorMess (1);
            }
            offset = stoi (argv[2]);
            useLines = false;
            option = true;
        }
        /* loop for multiple file inputs */
        for (int i =1 ,j =i; i < argc; i++)
        {

            /* option not provided*/
            if (option == false)
            {
                if (stat (argv[i], &buf) == -1)
                {
                    errorMess (errno);
                }
                if (S_ISDIR (buf.st_mode) == 1) /*dir, do not do anything*/
                    return 0;

                else if (S_ISREG(buf.st_mode) == 0) /*not regular file*/
                    errorMess (errno);

                filename = argv[i];/*assign filename*/
                fd = open (filename, O_RDONLY);/* open file to read its content*/
                if (fd == -1) errorMess (errno);


                if(argv[j++] != nullptr||argv[j--] != nullptr)
                    cout << "==>" << filename << "<==" << endl;

                writeLines (fd, 10);/* default is 10 lines*/
                continue;
            }
            /* option provided*/
            if(option == true && i == 1)
            i =3;

            if (stat (argv[i], &buf) == -1)
                errorMess (errno);

            /*check to ensure valid type*/
            if (S_ISDIR (buf.st_mode) == 1) /*dir, do not do anything*/
                return 0;

            else if (S_ISREG(buf.st_mode) == 0) /*not regular file*/
                errorMess (errno);

            filename = argv[i];/*argv[4] is a valid filename*/

            fd = open (filename, O_RDONLY);/* open file to read its content*/
            if (fd == -1) errorMess (errno);

            if(option == true && argc > 4) // tail -n 10
                cout << "==>" << filename << "<==" << endl;

            if (useLines) {
                writeLines (fd, offset);
            } else if (!useLines) {
                writeBytes (fd, offset);
            }
        }// multiple file loop

    }


    if (close (fd) == -1)
        errorMess (errno);


    return EXIT_SUCCESS;
} // main

void writeBytes(int fd, int byte_offset) {
    // size of data buffer
    char buffer[BUFF_SIZE];    // data buffer
    int n = 0;                  // number of bytes read

    off_t len = lseek (fd, 0, SEEK_END);
    if (len == -1) perror ("lseek");


    if (byte_offset > len)
        byte_offset = len;



    off_t last_bytes = lseek (fd, -byte_offset, SEEK_END);
    if (last_bytes == -1) errorMess (errno);


    while ((n = read (fd, buffer, byte_offset)) > 0) { // read the entire buffer
        if (write (STDOUT_FILENO, buffer, n) == -1)
            errorMess (errno);
    } //while

}

void errorMess(int err) {


    cerr << "ERROR: " << strerror (errno) << endl;
    exit (EXIT_FAILURE); // exit program
}


void writeLines(int fd, int line_offset)
{
    int lineCount = 0;
//    string s[BUFF_SIZE];
    string content;
    // size of data buffer
    char buffer[BUFF_SIZE];    // data buffer

    int n = 0;
    int i = 0;// number of bytes read


    while ((n = read (fd, buffer, BUFF_SIZE)) > 0) {
        buffer[n] = '\0';
        content += buffer;

    }
    for (i = content.size () - 1; i >= 0; --i) {
        char letter = content[i];

        if (letter == '\n')
        {
            lineCount++;
        }
        if (line_offset < lineCount)
            break;
    }
    /* i points to 'n' character and we want everything after that.*/
    content = content.substr (i + 1, content.size ());
//    string fn = filename;
    char storage[BUFF_SIZE];
    int z = 0;
    for (char &s: content) {
        storage[z] = s;
        z++;
    }

    /* Only way to match shell was to used unbuffered i/o */
    if (write (STDOUT_FILENO, storage, content.size ()) == -1)
        errorMess (errno);

}

//
void stdInOut(int fd) {
    int n;
    char buffer[BUFF_SIZE];
    string content;


    /* strings are '\0' terminating*/
    while ((n = read (fd, buffer, BUFF_SIZE)) > 0)
    { // read the entire buffer
        buffer[n] = '\0';
        content += buffer;
    }

    char storage[BUFF_SIZE];
    int z = 0;
    for (char &s: content) {

        storage[z] = s;
        z++;
    }
    storage[z] = '\0';

    /* Only way to match shell was to used unbuffered i/o */
    if (write (STDOUT_FILENO, storage, content.size ()) == -1)
        errorMess (errno);
}
