#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>
#include <fstream>
#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/sendfile.h>
#include <dirent.h>
#include <vector>
#include <algorithm>
#include <cerrno>

using namespace std;

struct stat statbuff;
struct dirent *dname;
DIR *dir;

/**
 * [main creates directories]
 * @param  argc [number of arguments]
 * @param  argv [arrray of arguments]
 * @return      [returns EXIT_SUCCESS if the program runs successfully and EXIT_FAILURE and prints error message if not]
 */

int main(int argc, char * argv []){//this my main

     //looks for an -m flag
     if (strcmp(argv[1],"-m")==0){//there's an m
          //cout<<"in the if"<<endl;
          for(int i=3;i<argc;i++){
               //cout<<"looking through the args"<<endl;
               //sets user defined mode
               long mode=strtol(argv[2],0,8);
               if (mode<0||mode>0777){
                    cout<<"mkdir: invalid mode '"<<argv[2]<<"'"<<endl;
                    return EXIT_FAILURE;
               }
               else{
                    //creates directories with remaining arguments
                    if(mkdir(argv[i],mode)==-1){
                         cout<<"mkdir: cannot create directory '"<<argv[i]<<"': "<<strerror(errno)<<endl;
                    }
                    //cout<<"I got to here"<<endl;
               }
          }
     }
     else{//there's not an m
          //cout<<"I got here"<<endl;
          for(int i=1;i<argc;i++){
               long mode=0755;
               //creates directories with the predefined mode 0755
               if(mkdir(argv[i],mode)==-1){
                    cout<<"mkdir: cannot create directory '"<<argv[i]<<"': "<<strerror(errno)<<endl;
                    return EXIT_FAILURE;
               }//failure?
               //cout<<"There should be a directory now"<<endl;
          }//moving through the args
     }//no m
     return EXIT_SUCCESS;
}//this my main
