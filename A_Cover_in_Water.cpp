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
    string s;
    cin >> s;

    int total_count=0;
    bool in_water=false; 

    for(int i= 0;i < n; i++){
        if(s[i] == '.' && i+1 <n && s[i+1] == '.' && i+2 < n && s[i+2] == '.'){
               in_water=true;
               break;
            }
        
        if(s[i] == '.')  total_count++;
        }
    

    if(in_water){
        cout << 2 << "\n";
    }else {
        cout << total_count << "\n";
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