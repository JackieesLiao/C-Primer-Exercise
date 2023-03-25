#ifndef _COMPLEX_ 
#define _COMPLEX_ 
class complex
{
public:
    complex(double r = 0, double i = 0) :re(r), im(i) {}
    complex& operator+=(const complex&);
    complex& operator-=(const complex&);
    complex& operator*=(const complex&);
    complex& operator/=(const complex&);
    double real() const { return re; }
    double img() const { return im; }

private:
    double re, im;//real ,img
    friend complex& _doapl(complex*, const complex&);//friend function/plus
    friend complex& _doami(complex*, const complex&);//minus
    friend complex& _doaml(complex*, const complex&);//multiply
};
//------------------plus---------------------------
inline complex& _doapl(complex* ths, const complex& r)
{
    ths->re += r.re;
    ths->im += r.im;
    return *ths;
}
//The operator+= function is defined as a member function of the complex class,
//which means it has access to the private members of the class 
//and modifies the left-hand operand (this).
//ex: complex c1;complex c2; c1+c2;
//c1 is need to be modified,which means it is "this";
inline complex& complex::operator +=(const complex& r)
{
    return _doapl(this, r);
}
//-----------------minus---------------------------
inline complex& _doami(complex* ths, const complex& r)
{
    ths->re -= r.im;
    ths->im -= r.im;
    return *ths;
}
inline complex& complex::operator -=(const complex& r)
{
    return _doami(this, r);
}
//----------------multiply--------------------------
inline complex& _doaml(complex* ths, const complex& r)
{
    //复数相乘：(a+bi)(c+di)=(ac-bd)+(bc+ad)i。
    double temp = ths->re * r.re - ths->im * r.im;
    ths->im = ths->im * r.re + ths->re * r.im;
    ths->re = temp;
    return *ths;
}
inline complex& complex:: operator *=(const complex& r)
{
    return _doaml(this, r);
}
inline double real(const complex& x)//non menber functionm,return data real
{
    return x.real();
}
inline double img(const complex& x)
{
    return x.img();
}
inline complex operator+ (const complex& x, const complex& y) //non menber function ,return a new complex object
{
    return complex(real(x) + real(y),
        img(x) + img(y));
}
inline complex operator+(const complex& x, double y)
{
    return complex(real(x) + y, img(x));
}
inline complex operator+(double x, const complex& y)
{
    return complex(x + real(y), img(y));
}
inline complex operator +(const complex& x)
{
    return x;
}
inline complex operator -(const complex& x, const complex& y)
{
    return complex(real(x) - real(y),
        img(x) - img(y));
}
inline complex operator -(const complex& x, double y)
{
    return complex(real(x) - y, img(x));
}
inline complex operator -(double x, const complex& y)
{
    return complex(x - real(y), -img(y));
}
inline complex operator -(const complex& y)
{
    return complex(-real(y), -img(y));
}
inline complex operator *(const complex& x, const complex& y)
{
    return complex(real(x) * real(y) - img(x) * img(y),
        img(x) * real(y) + real(x) * img(y));
}
inline complex operator *(const complex& x, double y)
{
    return complex(real(x) * y, img(x) * y);
}
inline complex operator *(double x, const complex& y)
{
    return complex(x * real(y), x * img(y));
}
inline complex operator /(const complex& x, double y)
{
    return complex(real(x) / y, img(x) / y);
}
inline bool operator ==(const complex& x, const complex& y)
{
    return (real(x) == real(y) && img(x) == img(y));
}
inline bool operator ==(const complex& x, double y)
{
    return (real(x) == y && img(x) == 0);
}
inline bool operator ==(double x, const complex& y)
{
    return (real(y) == x && img(y) == 0);
}
inline bool operator !=(const complex& x, const complex& y)
{
    return  (real(x) != real(y) || img(x) != img(y));
}
inline bool operator !=(const complex& x, double y)
{
    return (real(x) != y || img(x) != 0);
}
inline bool operator !=(double x, const complex& y)
{
    return (real(y) != x || img(y) != 0);
}
#include<cmath>
inline complex polar(double r, double t)
{
    return complex(r * cos(t), t * sin(r));
}
inline complex conj(const complex& x)
{
    return complex(real(x), -img(x));
}
inline double norm(const complex& x)
{
    return  (real(x) * real(x) + img(x) * img(x));
}

#endif //_COMPLEX
