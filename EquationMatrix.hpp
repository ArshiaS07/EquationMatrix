#ifndef EQUATIONMATRIX_HPP_
#define EQUATIONMATRIX_HPP_

#include <utility>
#include <vector>
#include "../Matrix/Matrix.hpp"

namespace ArshiaMath {

    class EquationMatrix {
    public:
        EquationMatrix(size_t dim);

        //
        EquationMatrix(const Matrix& A,const std::vector<double>& b);

        // Copy constructor
        EquationMatrix(const EquationMatrix& other);

        // Move constructor
        EquationMatrix(EquationMatrix&& other) noexcept;

        // Copy assignment operator
        EquationMatrix& operator=(const EquationMatrix& other);

        // Move assignment operator
        EquationMatrix& operator=(EquationMatrix&& other) noexcept;

        // Destructor
        ~EquationMatrix();

        // Method to set the matrix A
        void setMatrix(const ArshiaMath::Matrix& matrix);

        // Method to set the vector b
        void setVector(const std::vector<double>& vector);

        // Method to get the matrix A
        ArshiaMath::Matrix getMatrix() const;

        // Method to get the vector b
        std::vector<double> getVector() const;

        // Method to get the dimension
        size_t getDimension() const;

    private:
        ArshiaMath::Matrix A;
        std::vector<double> b;
        size_t dim;
    };

} /* namespace ArshiaMath */

#endif /* EQUATIONMATRIX_HPP_ */