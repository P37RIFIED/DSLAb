#include <iostream>
using namespace std;

// function to calculate gcd using Euclidean algorithm
int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}

// function to calculate gcd and coefficients using Extended Euclidean algorithm
int extended_gcd(int a, int b, int &x, int &y)
{
    if (b == 0)
    {
        x = 1;
        y = 0;
        return a;
    }
    int x1, y1;
    int gcd = extended_gcd(b, a % b, x1, y1);
    x = y1;
    y = x1 - y1 * (a / b);
    return gcd;
}

int main()
{
    int a, b, x, y;
    cout << "Enter two integers: ";
    cin >> a >> b;

    // calculate gcd using Euclidean algorithm
    int gcd_value = gcd(a, b);
    cout << "gcd(" << a << ", " << b << ") = " << gcd_value << endl;

    // calculate gcd and coefficients using Extended Euclidean algorithm
    int extended_gcd_value = extended_gcd(a, b, x, y);
    cout << "extended_gcd(" << a << ", " << b << ") = " << extended_gcd_value << endl;
    cout << "Coefficients: x = " << x << ", y = " << y << endl;

    return 0;
}
