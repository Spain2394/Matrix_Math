//
// Created by Allen Spain 7/7/2017.
//(811-565-587)
//

#include "Matrix.h"

using namespace std;


/*!
 * Simple program to test Matrix class functions
 * @return  int 0 when program runs without issues
 */
int main() {



//    Matrix a(2,3);
//    cout << a <<endl;
//     a = a +1;
//    a = -a;
//    cout <<"matrix a: " << a << endl;
//
//    Matrix b = a+1;
//    cout << "b before: \n"<<b<<endl;
//    b = {{1,2,3},
//         {4,5,6}
//    };
//    cout << "b after: \n" <<b<< endl;
//
//    cout << "index: (0,0) "<<b.at (0,0) << endl;
//    cout << "index: (0,0) "<<b(0,0) << endl;
//
//    cout <<"matrix a: \n" << a << endl;
//
//    cout <<"matrix a + b: \n" << b + a << endl;
//    cout <<"matrix a + b: \n" << b + a << endl;
//    b = b + a;
//    cout << "b:\n"<<b<< endl;
//    cout << "b transpose:\n" <<b.t ()<< endl;


    Matrix A = {
            {56, 0, 4.4, 68},
            {1.2,104,52,8},
            {1.8,55,99,0.9}

    };

    Matrix cal = {
            {59, 239, 155.4, 76.9},
    };

    Matrix percentage = A/10;
    cout<< "Percentages\n"<< percentage <<endl;


//    cout << "Matrix" << endl;
//
//    Matrix a (1, 3);
//    Matrix b (1, 3);
//
//    a = {{1, 2, 3}};
//
//    b = {{2, 2, 2}};
//
//    Matrix x{
//            {4, 5},
//            {6, 7},
//            {8, 9}
//    };
//
//    // all member arithmetic overloads.
//    Matrix c0 = a + 5.2;
//    cout << "c0 \n" << c0 << endl;
//    Matrix c1 = a + a;
//    cout << "c1 \n" << c1 << endl;
//    Matrix c2 = a - 3.5;
//    cout << "c2 \n" << c2 << endl;
//    Matrix c3 = b - b;
//    cout << "c3 \n" << c3 << endl;
//    Matrix c4 = a * 2.1;
//    cout << "c4 \n" << c4 << endl;
//    Matrix c5 = a * b;
//    cout << "c5 \n" << c5 << endl;
//    Matrix c6 = a / 2.0;
//    cout << "c6 \n" << c6 << endl;
//    Matrix c7 = a * x;
//    cout << "c7 \n" << c7 << endl; //[40, 46]
//
//
//    //All non-member arithmetic overloads
//    Matrix r = {{1, 2},
//                {3, 4}};
//
//    Matrix h = 4.0 + r; // [ 5, 6 ]
//    // [ 7, 8 ]
//    cout << "h\n" << h << endl;
//
//    Matrix c = 4.0 - r; // [ 3, 2 ]
//    // [ 1, 0 ]
//    cout << "c\n" << c << endl;
//
//    Matrix d = 2.0 * r; // [ 2, 4 ]
//    // [ 6, 8 ]
//    cout << "d\n" << d << endl;
//
//    Matrix e = 12 / r; // [ 12, 6 ]
//    //[  4, 3 ]
//    cout << "e\n" << e << endl;
//
//    //Test i list and unary operator
//    //    [2 x 3][3 x 2] = 2 x 2
//    Matrix v = {
//            {1, 0, 3},
//            {0, 1, 4}
//    };
//    cout << "Negate v\n" << -v << endl;
//    // transpose
//    cout << "Transpose v\n" << -v.t () << endl;



    return EXIT_SUCCESS;
}