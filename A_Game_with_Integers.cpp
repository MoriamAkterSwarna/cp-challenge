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
        int n; 
        cin >> n;

        // if(n%3){
        //     cout << "First" << nl;
        // } else {
        //     cout << "Second" << nl;
        // }
        if(n%3 == 0){
            cout << "Second" << nl;
        } else {
            cout << "First" << nl;
        }
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