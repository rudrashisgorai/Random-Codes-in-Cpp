
 
#include <bits/stdc++.h>
using namespace std;
 
 void fileioe(){
    freopen("input.txt", "r", stdin);
    freopen("xyz1.txt", "w", stdout);
    freopen("error.txt","w",stderr);
}
#ifndef ONLINE_JUDGE
#define fioe() fileioe()
#else
#define fioe() 1
#endif
 
#define SOT(n) SieveOfEratosthenes(n)
#define fioe() fileioe()
#define add(x) accumulate(x)
#define sz(x) (int)(x).size()
#define mp make_pair
#define pb push_back
#define ff first
#define ss second
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
#define pi 3.1415926535897932384626433832795
#define rep(i, a, b) for (int i=a; i<(b); i++)
#define zrep(i, a, b) for (ll i=b; i>=(a); i--)
#define hs ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef long long ll;
typedef pair<ll,ll> pll;
typedef vector<ll> vll;
typedef vector<pll> vpll;
const ll mod = 1000000007;
const ll INF = 1e18;
const ll MAX = 100001;
//
//              
                
            void solve() {
                unsigned long long int c;
                cin >> c;
                unsigned long long int val = 0;
                int d = 0;
                while(val<c){ // figuring out d
                    val =  1<<(++d);
                }
                
                unsigned long long int a = 0; 
                unsigned long long int b = (1<<(d-1))-1;
                for(int i= 0;i<d;i++){
                    if( !(c & (1<<i)) ){ // checks if bits is off
                        a |=(1<<i) ; // turn on the bit in a
                    }
                }
                a |= (1<<(d-1)); // setting (d-1) bit of a 

                cout<<a*b<<endl;
}
 
                int main(){
                        //hs;
                        //fioe();
                        ll t;
                        t=1;
                        cin>>t;
                        for (int i=1; i<=t; i++){
                                //cout<<"Case #"<<i<<": ";
                                solve();
                         }
        return 0;
}