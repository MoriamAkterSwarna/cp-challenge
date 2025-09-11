
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 
using namespace __gnu_pbds; 

using namespace std;
#define ll long long
#define nl '\n' 
#define tst int t; cin >> t; while(t--) 
#define yc cout << "YES" << nl;
#define nc cout << "NO" << nl; 
#define ys cout << "Yes" << nl; 
#define ns cout << "No" << nl; 
#define nn int n; cin >> n;  

template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;



void firebird_solve(){
    long long n, x;
    cin >> n >> x;

    vector<long long> a;

    a.push_back(0);
    for (long long i = 0; i < n; i++)
    {
        long long temp;
        cin >> temp;
        a.push_back(temp);
    }

    a.push_back(x);

    n = a.size();

    long long max_distance = INT_MIN;

    for (long long i = 1; i < n; i++)
    {
        if (i == n - 1)
        {
            max_distance = max(max_distance, (2 * (a[i] - a[i - 1])));
        }
        else
        {
            max_distance = max(max_distance, a[i] - a[i - 1]);
        }
    }
    cout << max_distance << "\n";
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    tst{
        firebird_solve();
    }

    return 0;
}