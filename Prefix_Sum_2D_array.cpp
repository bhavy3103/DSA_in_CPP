// #include <bits/stdc++.h>
// using namespace std;

// const int N = 1e3 + 10;
// int ar[N][N];
// int sum[N];

// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             cin >> ar[i][j];
//         }
//     }
//     int q;
//     cin >> q;
//     while (q--)
//     {
//         int a, b, c, d;
//         cin >> a >> b >> c >> d;
//         long long sum = 0;
//         for (int i = a; i <= c; i++)
//         {
//             for (int j = b; j <= d; j++)
//             {
//                 sum = sum + ar[i][j];
//             }
//         }
//         cout << sum << endl;
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 10;
int ar[N][N];
long long sum[N][N];

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n; ++j)
        {
            cin >> ar[i][j];
            sum[i][j] = ar[i][j] + ar[i - 1][j] + ar[j][i - 1] + ar[i - 1][j - 1];
        }
    }
    int q;
    cin >> q;
    while (q--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        cout << sum[c][d] - sum[a - 1][d] - sum[c][b - 1] + sum[a - 1][b - 1] << endl;
    }

    return 0;
}