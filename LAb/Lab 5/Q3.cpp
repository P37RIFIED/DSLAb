#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// function to calculate a^b % m using modular exponentiation
int modexp(int a, int b, int m)
{
    int result = 1;
    while (b > 0)
    {
        if (b & 1)
        {
            result = (result * a) % m;
        }
        a = (a * a) % m;
        b >>= 1;
    }
    return result;
}

// function to check whether a number is prime using Fermat's little theorem
bool is_prime(int n, int k)
{
    // perform k iterations
    for (int i = 0; i < k; i++)
    {
        // generate a random number between 2 and n-2
        int a = 2 + rand() % (n - 2);
        // calculate a^(n-1) % n using modular exponentiation
        int x = modexp(a, n - 1, n);
        // if a^(n-1) % n != 1, n is composite
        if (x != 1)
        {
            return false;
        }
    }
    // if n passes all k iterations, it is probably prime
    return true;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    srand(time(nullptr)); // seed the random number generator
    if (is_prime(n, 10))
    {
        cout << n << " is probably prime." << endl;
    }
    else
    {
        cout << n << " is composite." << endl;
    }
    return 0;
}
