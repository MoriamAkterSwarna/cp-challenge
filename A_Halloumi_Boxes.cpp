#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define tst   \
    int t;    \
    cin >> t; \
    while (t--)

void firebird_solve()
{

    long long n , k;
    cin >> n >> k;

    vector<long long> arr1(n);


    for(long long i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }


    vector<long long> arr2 = arr1;
    sort(arr2.begin(), arr2.end());

    if(arr1 == arr2 || k > 1)
    {
        cout << "YES" << nl;
    }
    else
    {
        cout << "NO" << nl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    tst
    {
        firebird_solve();
    }

    return 0;
}