#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;



void solve() {
     long long int c;
    cin >> c;
     long long int val = 0;
    int d = 0;
    while(val<c){ // figuring out d
        val =  1<<(++d);
    }
    
    if((c & (c-1)) == 0){
        val<<= 1;
        cout<<(val-1)*(c-1)<<endl;
        return;
    }
    
     long long int a = 0; 
     long long int b = (1<<(d-1))-1;
    for(int i= 0;i<d;i++){
        if( !(c & (1<<i)) ){ // checks if bits is off
            a |=(1<<i) ; // turn on the bit in a
        }
    }
    a |= (1<<(d-1)); // setting (d-1) bit of a 

    cout<<a*b<<endl;
}

int main() {
    //ios_base::sync_with_stdio(0);
    //cin.tie(0); cout.tie(0);
    int tc ;
    cin >> tc;
    while(tc--) {
        // cout << "Case #" << t  << ": ";
        solve();
    }
    //solve(); //solve fucntion
    
    return 0;
}