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
                string convert(ll n){
                    string str="";
                    while(n)
                    {
                        if(n&1)
                            str='1'+str;
                        else
                            str='0'+str;
                        n/=2;
                    }
                    return str;
                }
                void solve()
                {
                    ll n;
                    cin>>n;
                    // cout<<convert(n)<<endl;
                    string str=convert(n);
                    ll len=str.length();
                    char s1[len],s2[len];
                    for(int i=0;i<len;i++)
                    {
                        if(str[i]=='0')
                            s1[i]='1',s2[i]='1';
                        else
                            s1[i]='/',s2[i]='/';
                    }
                    int ctr=1;

                    for(int i=0;i<len;i++)
                    {
                        if(s1[i]=='/' && ctr==1)
                            s1[i]='1',s2[i]='0',ctr++;
                        else if(s1[i]=='/' && ctr>=1)
                            s2[i]='1',s1[i]='0',ctr++;
                    }
                    
                    // cout<<s1<<" "<<s2<<endl;
                    ll n1=stoi(s1, 0, 2);
                    ll n2=stoi(s2, 0, 2);
                    cout<<n1*n2<<endl;
                    
                }
 
                int main(){
                        hs;
                        // fioe();
                        ll t;
                        t=1;
                        cin>>t;
                        for (int i=1; i<=t; i++){
                                //cout<<"Case #"<<i<<": ";
                                solve();
                         }
        return 0;
}