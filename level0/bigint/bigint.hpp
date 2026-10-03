#ifndef BIGINT_HPP
#define BIGINT_HPP

#include <sstream>
#include <string>
#include <iostream>

class bigint
{
    private:
        std::string _value;
    public:
        bigint();
        bigint(unsigned int num);
        bigint(const bigint &other);
        bigint &operator=(const bigint &other);
        ~bigint();

        const std::string &get_value() const;

        bigint operator+(const bigint &other) const;
        bigint &operator+=(const bigint &other);

        bigint &operator++();   //++a
        bigint operator++(int); //a++

        bigint operator<<(unsigned int n) const;
        bigint &operator<<=(unsigned int n);
        bigint operator>>(unsigned int n) const;
        bigint &operator>>=(unsigned int n);

        bigint operator<<(const bigint &other) const;
        bigint &operator<<=(const bigint &other);
        bigint operator>>(const bigint &other) const;
        bigint &operator>>=(const bigint &other);

        bool operator==(const bigint &other) const;
        bool operator!=(const bigint &other) const;
        bool operator>(const bigint &other) const;
        bool operator>=(const bigint &other) const;
        bool operator<(const bigint &other) const;
        bool operator<=(const bigint &other) const;
          
};

std::ostream &operator<<(std::ostream &os, const bigint &num);

#endif


// int main()
// {
//     const bigint a(42);
//     bigint b(21), c, d(1337), e(d);

//     std::cout << "a = " << a << std::endl;
//     std::cout << "b = " << b << std::endl;
//     std::cout << "c = " << c << std::endl;
//     std::cout << "d = " << d << std::endl;
//     std::cout << "e = " << e << std::endl;

//     std::cout << "a + b = " << a + b << std::endl;
//     std::cout << "(c += a) = " << (c += a) << std::endl;

//     std::cout << "b = " << b << std::endl;
//     std::cout << "++b = " << ++b << std::endl;
//     std::cout << "b++ = " << b++ << std::endl;

//     std::cout << "(b << 10) + 42 = " << ((b << 10) + 42) << std::endl;
//     std::cout << "(d <<= 4) = " << (d <<= 4) << std::endl;
//     std::cout << "(d >>= 2) = " << (d >>= (const bigint)2) << std::endl;

//     std::cout << "a =" << a << std::endl;
//     std::cout << "d =" << d << std::endl;

//     std::cout << "(d < a) = " << (d < a) << std::endl;
//     std::cout << "(d <= a) = " << (d <= a) << std::endl;
//     std::cout << "(d > a) = " << (d > a) << std::endl;
//     std::cout << "(d >= a) = " << (d >= a) << std::endl;
//     std::cout << "(d == a) = " << (d == a) << std::endl;
//     std::cout << "(d != a) = " << (d != a) << std::endl;
// }
