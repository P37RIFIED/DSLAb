#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

void printTable(vector<vector<bool>> table, vector<char> vars)
{
    for (char c : vars)
        cout << c << " ";
    cout << "| "
        << "Output" << endl;
    for (int i = 0; i < vars.size(); i++)
        cout << "- ";
    cout << "| "
        << "------" << endl;

    for (vector<bool> row : table)
    {
        for (bool val : row)
            cout << val << " ";
        cout << "| " << row.back() << endl;
    }
}

vector<vector<bool>> truthTable(int n)
{
    int rows = pow(2, n);
    vector<vector<bool>> table(rows, vector<bool>(n + 1));

    for (int i = 0; i < n; i++)
    {
        int rep = pow(2, n - i - 1);
        for (int j = 0; j < rows; j++)
        {
            bool val = (j / rep) % 2;
            table[j][i] = val;
        }
    }

    return table;
}

int main()
{
    // Truth table for (p ᴧ ⌐q ᴠ r) → (⌐p ᴠ r)
    vector<char> varsA{'p', 'q', 'r'};
    vector<vector<bool>> tableA = truthTable(varsA.size());
    for (vector<bool> &row : tableA)
        row.push_back((row[0] && !row[1] || row[2]) <= (!row[0] || row[2]));

    cout << "Truth table for (p ᴧ ⌐q ᴠ r) → (⌐p ᴠ r)" << endl;
    printTable(tableA, varsA);

    // Truth table for (p ᴧ ⌐q ᴠ r) ↔ (⌐p ᴠ r)
    vector<char> varsB{'p', 'q', 'r'};
    vector<vector<bool>> tableB = truthTable(varsB.size());
    for (vector<bool> &row : tableB)
        row.push_back((row[0] && !row[1] || row[2]) == (!row[0] || row[2]));

    cout << "Truth table for (p ᴧ ⌐q ᴠ r) ↔ (⌐p ᴠ r)" << endl;
    printTable(tableB, varsB);

    return 0;
}
