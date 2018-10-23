//
// Created by Allen Spain 7/7/2017.
//(811-565-587)
//

#ifndef PROJECT1_MATRIX_H
#define PROJECT1_MATRIX_H

#include <iostream>
#include <initializer_list>
#include <cstdlib>
#include <iterator>
#include <math.h>


using std::ostream;
using std::initializer_list;


typedef unsigned int uint;
typedef initializer_list<initializer_list<double>> i_list;


class Matrix {

private:

    double **matrix = nullptr; // initialize a pointer to null
    uint rows, cols;


public:


/*!
 * constructor (all elements initialized to 0)
 * @param rows uint represents rows in matrix
 * @param cols uint represents cols in matrix
 */
Matrix(uint rows, uint cols);

/*!
* Constructor (using initializer list)
* @param list represents a list of list of type double
*/
Matrix(const i_list &list);


/*!
*Copy constructor, initialized matrix, by copying calling objects
* elements.
* @param m represents Matrix reference
*/
Matrix(const Matrix &m);

/*!
* Destructor, deletes memory allocations once out of scope
*/
~Matrix();

/*!
* Adds a scalar to each element in the matrix
* @param s represents scalar
* @return new scaled matrix
*/
Matrix add(double s) const;

/*!
* Adds a matrix to another matrix
* @param m represents a reference to a matrix
* @return Matrix representing the yield of matrix addition
*/
Matrix add(const Matrix &m) const;

/*!
* Subtracts each element in the matrix by a scalar
* @param s represents scalar
* @return Matrix representing the outcome of substraction by scalar.
*/
Matrix subtract(double s) const;

/*!
* Substracts this matrix from another matrix
* @param m represent a matrix
* @return Matrix that will represent the outcome of matrix subtraction.
*/
Matrix subtract(const Matrix &m) const;

/*!
* Multiplies a matrix by a scalar
* @param s represents a scalar
* @return Matrix which represnt the outcome of scalar multiplication
*/
Matrix multiply(double s) const;

/*!
* Multiplies this matrix, by another matrix.
* @param m represents reference of another matrix.
* @return Matrix which represents the product of matrix multiplication.
*/
Matrix multiply(const Matrix &m) const;

/*!
* Divide this matrix by a scalar.
* @param s represents the scalar.
* @return Matrix which represents the outcome of scalar division.
*/
Matrix divide(double s) const;


/*!
* Transpose of this matrix.
* @return Matrix post transpose.
*/
Matrix t() const;
/*!
* Transposes the matrix.
* @return Matrix post transpose.
*/
/*!
* Get number of rows.
* @return uint number of rows.
*/
const uint numRows() const;

/*!
*Get the number of Columns.
* @return uint number of columns.
*/
const uint numCols() const;

/*!
* Get/set elemtent at row,col.
* @param row represents number of rows.
* @param col represents number of columns.
* @return pointer to type double.
*/
double &at(uint row, uint col);

/*!
* Get the element at row,col when using constant object.
* @param row uint, represents number of rows.
* @param col uint, represents number of cols.
* @return double value at row and column.
*/
const double &at(uint row, uint col) const;

/*!
* overload assignment operator, allows
* one matrix object to be assigned to another.
* @param m represents another matrix.
* @return Matrix & representing reference to matrix.
*/
Matrix &operator=(const Matrix &m);

/*!
*Overload () operator allows, elements to be gotten
* similar to the at() method.
* @param row represents rows.
* @param col represents columns.
* @return pointer to a double value.
*/
double &( operator()(uint row, uint col));

/*!
* Overload unary operator.
* @return matrix that has been inverted.
*/
Matrix operator-() const;

/*!
* Overload assignment operator with initializer list.
* @param list represents a list of lists.
* @return Matrix & which represents a pointer to a matrix object.
*/
Matrix &operator=(const i_list &list);

/*!
* Overload + scalar
* @param s represents scalar
* @return Matrix object.
*/
Matrix operator+(const double s) const;

/*!
* overload + matrix
* @param m represents another matrix.
* @return Matrix object.
*/
Matrix operator+(const Matrix &m) const;

/*!
* Overload - scalar
* @param s represents scalar
* @return Matrix object.
*/
Matrix operator-(const double s) const;

/*!
* Overload - matrix
* @param m represents another matrix.
* @return Matrix object.
*/
Matrix operator-(const Matrix &m) const;

/*!
* Overload - Matrix
* @param s
* @return
*/
Matrix operator*(const double s) const;

/*!
 *
 * @param m
 * @return
 */
    Matrix operator*(const Matrix &m) const;

/*!
 *
 * @param s
 * @return
 */
Matrix operator/(const double s) const;

/*!
 *
 * @param m
 * @return
 */
Matrix reciprocate(const Matrix &m) const;


};// Class matrix

ostream &operator<<(ostream &os, const Matrix &matrix);

Matrix operator+(double s, const Matrix &m);

Matrix operator-(double s, const Matrix &m);

Matrix operator*(double s, const Matrix &m);

Matrix operator/(double s, const Matrix &m);


#endif //PROJECT1_MATRIX_H



