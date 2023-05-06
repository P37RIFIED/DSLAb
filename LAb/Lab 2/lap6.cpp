#include <iostream>
#include <vector>

using namespace std;

long long int modInv(long long int a, long long int m)
{
    for (long long int x = 1; x < m; x++)
        if ((a * x) % m == 1)
            return x;
}

int main()
{
    long long int n, M = 1, answer = 0;
    vector<long long int> a, m, Marray;

    cout << "Enter the number of equations: ";
    cin >> n;

    cout << "Enter the array a: ";
    a.resize(n);
    for (long long int i = 0; i < n; i++)
        cin >> a[i];

    cout << "Enter the array m ";
    m.resize(n);
    for (long long int i = 0; i < n; i++)
    {
        cin >> m[i];
        M *= m[i];
    }

    Marray.resize(n);
    for (long long int i = 0; i < n; i++)
        Marray[i] = M / m[i];

    for (long long int i = 0; i < n; i++)
        answer = (answer + ((a[i] * Marray[i]) % M * modInv(Marray[i], m[i])) % M) % M;

    cout << "x = " << answer << endl;

    return 0;
}
