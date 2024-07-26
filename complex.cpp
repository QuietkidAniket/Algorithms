#include <iostream>

class complex
{
public:
    float re;
    float im;
    complex(const complex &obj)
    {
        re = obj.re;
        im = obj.im;
    }
    complex(const float re, const float im)
    {
        this->re = re;
        this->im = im;
    }
    complex() : re{0}, im{0} {}

    friend complex &conj(const complex &obj);

    friend complex &operator+(const complex &a, const complex &b);
    friend complex &operator-(const complex &a, const complex &b);

    friend complex &operator+(const float a, const complex &b);
    friend complex &operator-(const float a, const complex &b);

    friend complex &operator+(const complex &a, const float b);
    friend complex &operator-(const complex &a, const float b);

    friend complex &operator*(const complex &a, const complex& b);
    friend complex &operator/(const complex &a, const complex& b);

    friend std::ostream &operator<<(std::ostream &out, const complex &obj);
    friend std::istream &operator>>(std::istream &in, const complex &obj);


}; // end of complex class


complex &conj(const complex &obj){
    complex new_obj(obj.re, -obj.im);
    return new_obj;
}

complex &operator-(const complex &a, const complex &b)
{
    complex new_obj(a.re - b.re, a.im - b.im);
    return new_obj;
}
complex &operator+(const complex &a, const complex &b)
{
    complex new_obj(a.re + b.re, a.im + b.im);
    return new_obj;
}
complex &operator+(const float a, const complex &b)
{
    complex new_obj(a + b.re, b.im);
    return new_obj;
}
complex &operator-(const float a, const complex &b)
{
    complex new_obj(a - b.re, -b.im);
    return new_obj;
}
complex &operator+(const complex &a, const float b)
{
    complex new_obj(a.re + b, a.im);
    return new_obj;
}
complex &operator-(const complex &a, const float b)
{
    complex new_obj(a.re - b, a.im);
    return new_obj;
}
complex &operator*(const complex &a, const complex &b)
{
    complex new_obj(a.re * b.re - a.im * b.im, a.im * b.re + a.re * b.im);
    return new_obj;
}
complex &operator/(const complex &a, const complex &b){
    complex new_obj = a* conj(b);
    float denominator = b.re*b.re + b.im*b.im;
    new_obj.re /= denominator; new_obj.im /= denominator;
}
std::ostream &operator<<(std::ostream &out, const complex &obj)
{
    out << obj.re << ' + i' << obj.im;
    return out;
}
std::istream &operator>>(std::istream &in, complex &obj)
{
    float re{};
    float im{};
    in >> re >> im;
    if (in)
    {
        obj = complex(re, im);
    }
    return in;
}
