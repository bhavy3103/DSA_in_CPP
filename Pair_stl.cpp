#include <bits/stdc++.h>
using namespace std;

// only two variable

int main()
{
    pair<int, string>
        // 1. p = make_pair(2, "abc");    // these both ways are same to declare pair
        p = {2, "abc"}; // <-- 2nd method

    pair<int, string> p1 = p; // here value of first can't change bcz it is gone throw copy not reference.
    p1.first = 3;             // f we use &p1 instead of p1 then first element value become 3.
    cout << p.first << " " << p.second << endl;

    int a[] = {1, 2, 3};
    int b[] = {2, 3, 4};

    pair<int, int> p_array[3];
    p_array[0] = {1, 2};
    p_array[1] = {2, 3};
    p_array[2] = {3, 4};

    for (int i = 0; i < 3; i++)
    {
        cout << p_array[i].first << " " << p_array[i].second;
    }
    return 0;
}