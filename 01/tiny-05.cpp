#include "tiny-05.hpp"
#include <iostream>

namespace pjc {

complex::complex(double real, double imaginary) :
    m_real(real),
    m_imag(imaginary) {}

double complex::real() const {
    return m_real;
}

void complex::real(double d) {
    m_real = d;
}

double complex::imag() const {
    return m_imag;
}

void complex::imag(double d) {
    m_imag = d;
}

complex complex::operator+(complex const& rhs)
{
    return complex(real() + rhs.real(), imag() + rhs.imag());
}

complex complex::operator-(complex const& rhs)
{
    return complex(real() - rhs.real(), imag() - rhs.imag());
}

complex complex::operator*(complex const& rhs)
{
    return complex(real() * rhs.real() - imag() * rhs.imag(), real() * rhs.imag() + imag() * rhs.real());
}

complex complex::operator+(double const& rhs)
{
    return complex(real() + rhs, imag());
}

complex complex::operator-(double const& rhs)
{
    return complex(real() - rhs, imag());
}

complex complex::operator*(double const& rhs)
{
    return complex(real() * rhs, imag() * rhs);
}



complex operator+(double const& lhs, complex const& rhs)
{
    return complex(lhs + rhs.real(), rhs.imag());
}

complex operator-(double const& lhs, complex const& rhs)
{
    return complex(lhs - rhs.real(), -rhs.imag());
}

complex operator*(double const& lhs, complex const& rhs)
{
    return complex(lhs * rhs.real(), lhs * rhs.imag());
}

}
