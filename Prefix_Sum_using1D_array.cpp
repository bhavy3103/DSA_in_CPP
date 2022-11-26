/* Given array a of n integers. Given Q queries and in each query given l and r print sum of array
 element from index l to r */

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     int sum = 0;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         int a[n];
//         for (int i = 1; i <= n; i++)
//         {
//             cin >> a[i];
//         }
//         int q;
//         cin >> q;
//         while (q--)
//         {
//             int l, r;
//             cin >> l >> r;
//             for (int i = l; i <= r; i++)
//             {
//                 sum = sum + a[i];
//             }
//             cout << sum << endl;
//             sum = 0;
//         }
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
int a[N];
int sum[N];

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            sum[i] = sum[i - 1] + a[i];
        }
        int q;
        cin >> q;
        while (q--)
        {
            int l, r;
            cin >> l >> r;
            cout << sum[r] - sum[l - 1] << endl;
        }
    }
    return 0;
}