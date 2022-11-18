// In normal map value store in ordered/ sorted condition like 1 5 3 --> 1 3 5
// each element is pair in map.
// so we use it++ not it+1.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<int, string> m; // declaration int --> key datatype  string --> value datatype
    m[1] = "abc";
    m[5] = "cdc"; // O(log(n))
    m[3] = "acd";
    m.insert({4, "afg"});

    // map<int, string>::iterator it;
    // for (it = m.begin(); it != m.end(); it++)
    // {
    //     cout << (*it).first << " " << (*it).second << endl;
    // }

    for (auto &pr : m)
    {
        cout << pr.first << " " << pr.second << endl;
    }

    return 0;
}