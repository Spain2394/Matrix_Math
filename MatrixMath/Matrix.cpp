//
// Created by Allen Spain 7/7/2017.
//(811-565-587)
//
#include "Matrix.h"


// constructor (all elements initialized to 0)
Matrix::Matrix(uint rows, uint cols) {

    this->rows = rows;
    this->cols = cols;


    matrix = new double *[rows];

    for (unsigned int r = 0; r < rows; ++r) {
        *(matrix + r) = new double[cols];
    }

    for (unsigned int r = 0; r < this->rows; ++r) {
        for (unsigned int c = 0; c < cols; ++c) {
            matrix[r][c] = 0;
        }
    }

}

Matrix::Matrix(const i_list &list) {
    uint c = 0;
    this->rows = list.size ();
    this->cols = (*list.begin ()).size ();

    // allocate memory for the new object
    matrix = new double *[rows];

    for (unsigned int r = 0; r < rows; ++r) {
        *(matrix + r) = new double[cols];
    }

    //   initialize matrix with appropriate dimensions.

    auto l = list.begin ();
    for (uint r = 0; r < rows; r++, l++) {
        c = 0;
        for (double a: *l) {
            matrix[r][c] = a;
            c++;
        }
    }

}


Matrix::Matrix(const Matrix &m) {

    this->rows = m.numRows ();
    this->cols = m.numCols ();

    this->matrix = new double *[rows]; // allocate memory for rows

    for (unsigned int r = 0; r < rows; ++r) {
        this->matrix[r] = new double[cols];

        for (unsigned int c = 0; c < cols; ++c) {
            this->matrix[r][c] = (m.matrix)[r][c];
        }
    }

}

Matrix::~Matrix() {
    for (uint i = 0; i < this->rows; ++i) {
        delete[] matrix[i];
    }
    delete[] matrix;
}

Matrix Matrix::add(double s) const {

    uint R = this->numRows ();
    uint C = this->numCols ();

    Matrix copy (*this);

    for (uint r = 0; r < R; ++r) {
        for (uint c = 0; c < C; ++c) {
            copy.matrix[r][c] += s;

        }
    }
    return copy;

}

Matrix Matrix::add(const Matrix &m) const {

    bool pass;
    pass = (this->rows == m.rows) && (this->cols == m.cols);
    Matrix temp (rows, cols);
    double sum = 0;

    if (pass) {
        for (uint r = 0; r < this->rows; ++r) {
            for (uint c = 0; c < this->cols; ++c) {
                sum = (this->matrix[r][c] + m.matrix[r][c]);
                temp.matrix[r][c] = sum;
            }
        }
        return temp;

    }
    return Matrix (0, 0);
}

Matrix Matrix::subtract(double s) const {

    uint R = this->numRows ();
    uint C = this->numCols ();

    Matrix copy (*this);

    for (uint r = 0; r < R; ++r) {
        for (uint c = 0; c < C; ++c) {
            copy.matrix[r][c] -= s;

        }
    }
    return copy;

}

Matrix Matrix::subtract(const Matrix &m) const {

    bool pass;
    pass = (this->rows == m.rows) && (this->cols == m.cols);
    Matrix temp (rows, cols);
    double diff = 0;

    if (pass) {
        for (uint r = 0; r < this->rows; ++r) {
            for (uint c = 0; c < this->cols; ++c) {
                diff = (this->matrix[r][c] - m.matrix[r][c]);
                temp.matrix[r][c] = diff;
            }
        }
        return temp;

    }
    return Matrix (0, 0);
}

Matrix Matrix::multiply(double s) const {

    uint R = this->numRows ();
    uint C = this->numCols ();

    Matrix copy (*this);

    for (uint r = 0; r < R; ++r) {
        for (uint c = 0; c < C; ++c) {
            if (copy.matrix[r][c] == 0)
                copy.matrix[r][c] *= s * s;
            else
                copy.matrix[r][c] *= s;


        }
    }
    return copy;

}

Matrix Matrix::multiply(const Matrix &m) const {

    bool pass;
    pass = (this->cols == m.rows);

    Matrix temp (this->rows, m.cols);

    if (pass) {
        for (uint r = 0; r < this->rows; ++r)
            for (uint cb = 0; cb < m.cols; ++cb)
                for (uint ca = 0; ca < this->cols; ++ca) {
                    temp.matrix[r][cb] += this->matrix[r][ca] * m.matrix[ca][cb];

                }
        return temp;

    }

    return Matrix (0, 0);
}

Matrix Matrix::divide(double s) const {

    uint R = this->numRows ();
    uint C = this->numCols ();

    Matrix copy (*this);

    for (uint r = 0; r < R; ++r) {
        for (uint c = 0; c < C; ++c) {
            copy.matrix[r][c] /= s;

        }
    }
    return copy;

}

Matrix Matrix::t() const {

    uint newCol = this->rows;
    uint newRow = this->cols;

    Matrix t (newRow, newCol);

    for (uint r = 0; r < this->rows; r++)
        for (uint c = 0; c < this->cols; ++c) {
            t.matrix[c][r] = this->matrix[r][c];
        }
    return t;
}

const uint Matrix::numRows() const {

    return this->rows;
}

const uint Matrix::numCols() const {

    return this->cols;
}

double &Matrix::at(uint row, uint col) {
    return matrix[row][col];
}


const double &Matrix::at(uint row, uint col) const {

    return matrix[row][col];
}


ostream &operator<<(ostream &os, const Matrix &matrix) {


    for (uint r = 0; r < matrix.numRows (); ++r) {
        for (uint c = 0; c < matrix.numCols (); ++c) {
            os << " " << matrix.at (r, c) << " ";

        }
        os << "\n";
    }

    return os;
}

double &Matrix::operator()(uint row, uint col) {
    Matrix m(0,0);
    bool pass;
    pass = (row >= 0 && row < this->rows
            && col >= 0 && col < this->cols);
    if (pass) {
        return this->at (row, col);
    }
    else
        return m.at (0,0);// should return error

}

Matrix &Matrix::operator=(const Matrix &m) {

    if (this != &m) {
        for (uint i = 0; i < this->rows; ++i) {
            delete[] matrix[i];
        }
        delete [] matrix;

        this->rows = m.rows;
        this->cols = m.cols;

        matrix = new double *[rows];

        for (unsigned int r = 0; r < rows; ++r) {
            *(matrix + r) = new double[cols];
        }

        for (unsigned int r = 0; r < this->rows; ++r) {
            for (unsigned int c = 0; c < cols; ++c) {
                this->matrix[r][c] = m.matrix[r][c];
            }
        }

    }
    return *this;

}

Matrix Matrix::operator-() const {

    Matrix copy (this->multiply (-1));
    return copy;


}

Matrix &Matrix::operator=(const i_list &list) {

    Matrix nothing(0,0);
    bool pass = (list.size () == this->rows && (*list.begin ()).size () == this->cols);

    if (pass) {
        this->rows = list.size ();
        this->cols = (*list.begin ()).size ();

        Matrix m (list);// this matrix now contains initializer list.
        if (this != &m) {
            for (uint i = 0; i < this->rows; ++i) {
                delete[] matrix[i];
            }
            delete [] matrix;

            this->rows = m.rows;
            this->cols = m.cols;

            matrix = new double *[rows];

            for (unsigned int r = 0; r < rows; ++r) {
                *(matrix + r) = new double[cols];
            }

            for (unsigned int r = 0; r < this->rows; ++r) {
                for (unsigned int c = 0; c < cols; ++c) {
                    this->matrix[r][c] = m.matrix[r][c];
                }
            }

        }

        return *this;


    }
    // this would return error if proj. assumptions were not made
    return *this;
}


Matrix Matrix::operator+(const double s) const {

    Matrix copy (this->add (s));
    return copy;

}

Matrix Matrix::operator+(const Matrix &m) const {
    Matrix copy (this->add (m));
    return copy;

}

Matrix Matrix::operator-(const double s) const {
    Matrix copy (this->subtract (s));
    return copy;
}

Matrix Matrix::operator-(const Matrix &m) const {
    Matrix copy (this->subtract (m));
    return copy;
}

Matrix Matrix::operator*(const double s) const {
    Matrix copy (this->multiply (s));
    return copy;
}

Matrix Matrix::operator*(const Matrix &m) const {
    Matrix copy (this->multiply (m));
    return copy;
}

Matrix Matrix::operator/(const double s) const {
    Matrix copy (this->divide (s));
    return copy;
}

//NON-MEMBER ARITHMETIC
Matrix operator+(double s, const Matrix &m) {
    Matrix copy (m + s);
    return copy;

}

Matrix operator-(double s, const Matrix &m) {

    Matrix copy ((-m) + s);
    return copy;

}

Matrix operator*(double s, const Matrix &m) {
    Matrix copy (m * s);
    return copy;

}

Matrix operator/(double s, const Matrix &m) {

    Matrix copy (m.reciprocate (m).multiply (s));
    return copy;

}

Matrix Matrix::reciprocate(const Matrix &m) const {

    uint R = m.numRows ();
    uint C = m.numCols ();

    Matrix temp (R, C); // create zeroed out array
    for (uint r = 0; r < R; ++r)
        for (uint c = 0; c < C; ++c) {
            // reciprocate each element.
            temp.matrix[r][c] = 1 / (m.matrix[r][c]);

        }

    return temp;

}


