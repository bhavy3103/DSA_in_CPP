#include <bits/stdc++.h>
using namespace std;
const int N = 1e7 + 10;
long long int arr[N];

int main()
{
    int n, m;
    cin >> n >> m;
    while (m--)
    {
        int a, b, d;
        cin >> a >> b >> d;
        for (int i = a; i <= b; ++i)
        {
            arr[i] += d;
        }
        long long mx = -1;
        for (int i = 1; i <= n; ++i)
        {
            if (mx < arr[i])
            {
                mx = arr[i];
            }
        }
        cout << mx << endl;
    }

    return 0;
}