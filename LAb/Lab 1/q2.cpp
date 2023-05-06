#include <iostream>
#include <set>

using namespace std;

int main()
{
    set<int> s1, s2;

    // Inserting elements in the sets
    s1.insert(1);
    s1.insert(2);
    s1.insert(3);

    s2.insert(4);
    s2.insert(5);

    // Performing Cartesian product
    for (auto i : s1)
    {
        for (auto j : s2)
        {
            cout << "(" << i << ", " << j << ") ";
        }
    }
    cout << endl;

    return 0;
}
