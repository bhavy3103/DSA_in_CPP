#include <bits/stdc++.h>
using namespace std;

int ds(int n)
{
    if (n == 0) // this is base condition , and very important
        return 0;
    int r = n % 10;
    int t = n / 10;
    return ds(t) + r;
}
int main()
{
    int n;
    cin >> n;
    cout << ds(n) << endl;

    return 0;
}