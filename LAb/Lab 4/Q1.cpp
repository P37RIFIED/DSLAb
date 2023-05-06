#include <iostream>
using namespace std;

int power(int a, int n)
{
    int result = 1;
    for (int i = 1; i <= n; i++)
    {
        result *= a;
    }
    return result;
}

int main()
{
    int a, n;
    cout << "Enter number and power"<<endl;
    cin >> a >> n;
    cout <<  "Result: " << power(a, n) << endl;
    return 0;
}
