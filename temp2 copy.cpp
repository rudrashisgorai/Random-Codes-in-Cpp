#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;



void solve() {
    unsigned ll int c;
    cin >> c;
    int val = 0;
    int d = 0;
    while(val<c){
        val =  1<<(++d);
    }
    
    unsigned ll int m = 0;
    for(unsigned ll int i = 0 ;i<val;i++){
        for(unsigned ll int j = 0;j<val;j++){
            if( (((i % MOD)^ (j % MOD))% MOD) == c){
                ll int com  = ((i % MOD)* (j % MOD))% MOD  ;
                m = (m>com )? m: com ;
            }

        }
    }
    cout << m <<'\0';

    
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc ;
    cin >> tc;
    while(tc--) {
        // cout << "Case #" << t  << ": ";
        solve();
    }
    //solve(); //solve fucntion
    
    return 0;
}