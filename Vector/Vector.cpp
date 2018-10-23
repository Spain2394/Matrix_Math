
#include "Vector.h"

using cs1730::Vector;

Vector::Vector(size_t dim) {
  // (*this).dim = dim;
  this->dim = dim;
  this->x   = new double [dim];
  for (size_t i = 0; i < dim; ++i) x[i] = 0;
} // Vector

Vector::Vector(const initializer_list<double> & l) {
  this->dim = l.size();
  this->x   = new double [dim];
  auto list = l.begin();
  for (size_t i = 0; i < dim; ++i) x[i] = list[i]; // *(list + i)
} // Vector

Vector::~Vector() {
  delete [] x;
} // ~Vector

ostream & operator<<(ostream & os, const Vector & v) {
  os << "Vector(";
  // TODO IMPLEMENT
  os << ")";
  return os;
} // operator<<


