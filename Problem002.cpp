/*
    author: kille
*/

#include <bits/stdc++.h>
#define ll long long
#define ld long double
 
using namespace std;

ll fib(ll a)
{
    if (a <= 1)
        return a;
    return fib(a-1) + fib(a-2);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        cout << fib(n);
    }
    return 0;
}