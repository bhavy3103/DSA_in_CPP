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

    vector<int>::iterator it1 = v.begin(); // declaration of iterators
    cout << *(it1 + 3) << endl;            // take output through iterators

    for (it1 = v.begin(); it1 != v.end(); it1++)
    {
        cout << (*it1) << endl;
    }

    vector<pair<int, int>> v_p = {{1, 2}, {2, 3}, {3, 4}};

    // given both output form are same only in second arrow is used.

    vector<pair<int, int>>::iterator it;
    for (it = v_p.begin(); it != v_p.end(); it++)
    {
        cout << (*it).first << " " << (*it).second << endl;
    }

    for (it = v_p.begin(); it != v_p.end(); it++) //  only use when iterator point to pair ...
    {
        cout << (it->first) << " " << (it->second) << endl; // (*it).first === (it-> first)
    }
    return 0;
}