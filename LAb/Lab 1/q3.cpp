#include <iostream>

using namespace std;

int main()
{
    double num;
    cout << "Enter a real number: ";
    cin >> num;

    int floor_num = static_cast<int>(num);
    int ceil_num = floor_num + ((num > floor_num) ? 1 : 0);

    cout << "Floor number " << floor_num << endl;
    cout << "Ceiling number " << ceil_num << endl;

    return 0;
}
