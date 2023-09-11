#include "EquationMatrix.hpp"

namespace ArshiaMath {

    // Constructor
    EquationMatrix::EquationMatrix(size_t dim)
        : A(dim, dim), b(std::vector<double>(dim, 0)), dim(dim) {}
    
    //
    EquationMatrix::EquationMatrix(const Matrix& A,const std::vector<double>& b) {
        this->setMatrix(A);
        this->setVector(b);
    }

    // Copy constructor
    EquationMatrix::EquationMatrix(const EquationMatrix& other)
        : A(other.A), b(other.b), dim(other.dim) {}

    // Move constructor
    EquationMatrix::EquationMatrix(EquationMatrix&& other) noexcept
        : A(std::move(other.A)), b(std::move(other.b)), dim(other.dim) {}

    // Copy assignment operator
    EquationMatrix& EquationMatrix::operator=(const EquationMatrix& other) {
        if (this != &other) {
            A = other.A;
            b = other.b;
            dim = other.dim;
        }
        return *this;
    }

    // Move assignment operator
    EquationMatrix& EquationMatrix::operator=(EquationMatrix&& other) noexcept {
        if (this != &other) {
            A = std::move(other.A);
            b = std::move(other.b);
            dim = other.dim;
        }
        return *this;
    }

    // Destructor
    EquationMatrix::~EquationMatrix() {}

    // Method to set the matrix A
    void EquationMatrix::setMatrix(const ArshiaMath::Matrix& matrix) {
        A = matrix;
    }

    // Method to set the vector b
    void EquationMatrix::setVector(const std::vector<double>& vector) {
        b = vector;
    }

    // Method to get the matrix A
    ArshiaMath::Matrix EquationMatrix::getMatrix() const {
        return A;
    }

    // Method to get the vector b
    std::vector<double> EquationMatrix::getVector() const {
        return b;
    }

    // Method to get the dimension
    size_t EquationMatrix::getDimension() const {
        return dim;
    }

} /* namespace ArshiaMath */