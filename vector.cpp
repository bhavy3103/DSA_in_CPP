#include <bits/stdc++.h>
using namespace std;

// all the declaration condition of array same for vector .... global declaration or local.
// local 10^5
// global 10^7
void printvec(vector<int> v)
{
    cout << "size: " << v.size() << endl; // O(1) for v.size()
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}
int main()
{
    int a[10];
    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;       // push back add value in the last of vector.
        v.push_back(x); // time complexity of push back is O(1).
        printvec(v);
    }
    printvec(v);

    return 0;
}
