#include <iostream>
#include <set>
#include <algorithm>
#include <iterator>

using namespace std;

int main()
{
    set<int> s1, s2, s3, s4;

    // Inserting elements in the sets
    s1.insert(1);
    s1.insert(2);
    s1.insert(3);

    s2.insert(2);
    s2.insert(3);
    s2.insert(4);

    s3.insert(1);
    s3.insert(3);
    s3.insert(5);
    s4.insert(2);
    s4.insert(4);
    s4.insert(6);

    // Performing Union Operation
    set<int> s_union;
    s_union = s1;
    s_union.insert(s2.begin(), s2.end());
    s_union.insert(s3.begin(), s3.end());
    s_union.insert(s4.begin(), s4.end());

    cout << "Union of Sets: ";
    for (auto i : s_union)
        cout << i << " ";
    cout << endl;

    // Performing Intersection Operation
    set<int> s_intersection;
    set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(), inserter(s_intersection, s_intersection.begin()));
    set_intersection(s_intersection.begin(), s_intersection.end(), s3.begin(), s3.end(), inserter(s_intersection, s_intersection.begin()));
    set_intersection(s_intersection.begin(), s_intersection.end(), s4.begin(), s4.end(), inserter(s_intersection, s_intersection.begin()));

    cout << "Intersection of Sets: ";
    for (auto i : s_intersection)
        cout << i << " ";
    cout << endl;

    // Performing Difference Operation
    set<int> s_difference;
    set_difference(s1.begin(), s1.end(), s2.begin(), s2.end(), inserter(s_difference, s_difference.begin()));
    set_difference(s_difference.begin(), s_difference.end(), s3.begin(), s3.end(), inserter(s_difference, s_difference.begin()));
    set_difference(s_difference.begin(), s_difference.end(), s4.begin(), s4.end(), inserter(s_difference, s_difference.begin()));

    cout << "Difference of Sets: ";
    for (auto i : s_difference)
        cout << i << " ";
    cout << endl;

    // Performing Symmetric Difference Operation
    set<int> s_symmetric_difference;
    set_symmetric_difference(s1.begin(), s1.end(), s2.begin(), s2.end(), inserter(s_symmetric_difference, s_symmetric_difference.begin()));
    set_symmetric_difference(s_symmetric_difference.begin(), s_symmetric_difference.end(), s3.begin(), s3.end(), inserter(s_symmetric_difference, s_symmetric_difference.begin()));
    set_symmetric_difference(s_symmetric_difference.begin(), s_symmetric_difference.end(), s4.begin(), s4.end(), inserter(s_symmetric_difference, s_symmetric_difference.begin()));

    cout << "Symmetric Difference of Sets: ";
    for (auto i : s_symmetric_difference)
        cout << i << " ";
    cout << endl;

    return 0;
}
