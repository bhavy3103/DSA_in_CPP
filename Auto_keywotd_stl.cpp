#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> v = {2, 3, 5, 6, 7};
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    vector<int>::iterator it; // also use in pair and vector.

    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << (*it) << " ";
    }

    auto a = 1.023; // it will automatically detect the datatype of variable
    cout << a << endl;
    return 0;
}