/*
    author: kille
*/

#include <bits/stdc++.h>
#define ll long long
#define ld long double
 
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if ((i % 3 == 0) || (i % 5 == 0))
            sum += i;
    }
    cout << sum;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}