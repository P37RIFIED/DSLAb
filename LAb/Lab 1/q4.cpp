#include <iostream>
#include <string>

using namespace std;

int main()
{
    string name[5];
    int age[5];
    double membership[5];

    // Input name and age for five people
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter name and age of person " << i + 1 << ": ";
        cin >> name[i] >> age[i];
    }

    // Compute membership for each person
    for (int i = 0; i < 5; i++)
    {
        if (age[i] <= 20)
        {
            membership[i] = 1;
        }
        else if (age[i] <= 30)
        {
            membership[i] = (30 - age[i]) / 10.0;
        }
        else
        {
            membership[i] = 0;
        }
    }

    // Print membership for each person
    cout << "Membership for each person according to function a:\n";
    for (int i = 0; i < 5; i++)
    {
        cout << name[i] << ": " << membership[i] << endl;
    }

    // Compute membership for each person
    for (int i = 0; i < 5; i++)
    {
        if (age[i] <= 15)
        {
            membership[i] = 1;
        }
        else if (age[i] <= 35)
        {
            membership[i] = (35 - age[i]) / 20.0;
        }
        else
        {
            membership[i] = 0;
        }
    }

    // Print membership for each person
    cout << "Membership for each person according to function b:\n";
    for (int i = 0; i < 5; i++)
    {
        cout << name[i] << ": " << membership[i] << endl;
    }

    return 0;
}
