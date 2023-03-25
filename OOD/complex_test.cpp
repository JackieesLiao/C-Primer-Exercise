#include<iostream>
#include "complex.h"
using std::cout;
using std::endl;
std::ostream& operator <<(std::ostream& os, const complex& x)
{
    os << '(' << real(x) << ',' << img(x) << ')';
    return os;
}
int main()
{
    complex c1(6, 5);
    complex c2(3, 4);
    cout << c1 << endl;
    cout << c2 << endl;

    cout << c1 + c2 << endl;
    cout << c1 + 8 << endl;
    cout << 7 + c2 << endl;
    cout << +c1 << endl;

    cout << c1 - c2 << endl;
    cout << c2 - 3 << endl;
    cout << 11 - c2 << endl;
    cout << -c1 << endl;

    cout << c1 * c2 << endl;
    cout << c2 / 2 << endl;

    cout << polar(3, 4) << endl;
    cout << conj(c2) << endl;
    cout << norm(c1) << endl;

    cout <<(c1 == c2)<< endl;
    cout <<(c1 != c2)<< endl;
    return 0;
}
