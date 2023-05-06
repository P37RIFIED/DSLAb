#include <iostream>

using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

void linearCongruence(int a, int b, int m)
{
    int d = gcd(a, m);

    if (b % d != 0)
    {
        cout << "No solution exists." << endl;
        return;
    }

    a /= d;
    b /= d;
    m /= d;

    int x = 1, y = 0, u = 0, v = 1;

    while (a != 0)
    {
        int q = m / a;
        int r = m % a;
        int w = x - q * u;
        int z = y - q * v;
        m = a;
        a = r;
        x = u;
        y = v;
        u = w;
        v = z;
    }

    if (y < 0)
        y += m;

    int ans = (b * y) % m;

    cout << "The solution of " << a << "x ≡ " << b << " (mod " << m << ") is x ≡ " << ans << " (mod " << m << ")." << endl;
}

int main()
{
    int a, b, m;
    cout << "Enter a, b, and m: ";
    cin >> a >> b >> m;

    linearCongruence(a, b, m);

    return 0;
}
