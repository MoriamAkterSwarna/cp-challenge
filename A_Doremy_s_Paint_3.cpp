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
        
    long long n; 
    cin >> n;
    map<long long, long long> mp;
    for(int i = 0; i < n; i++){
        long long x;
        cin >> x;
        mp[x]++;
    }

    if(mp.size() >= 3){
        cout << "No" << nl;
        return;
    }
    else {
        long long fre1 = mp.begin()->second;
        long long fre2 = mp.rbegin()->second;
        if(fre1 == fre2){
            cout << "Yes" << nl;
            return;
        }
        else if(n%2 == 1 && abs(fre1 - fre2) == 1){
            cout << "Yes" << nl;
            return;
        }
        else {
            cout << "No" << nl;
            return;
        }
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