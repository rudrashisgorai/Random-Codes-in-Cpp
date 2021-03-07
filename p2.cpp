#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

void helper( vector<bool>& visit,string s , int pos){
    if(pos <0 or pos == s.size()){
        return ;
    }
    if(visit[pos]) return ;
    if(s[pos]=='0') return ;
    //cout << s << endl;
    visit[pos] = true;
    
    helper(visit, s, pos + 1);
    

}


void solve() {
    string s;
    cin>> s;
    vector<bool> visit (s.size(), false);
    int groups= 0;
    for(int i = 0; i < s.size();i++){
        if(s[i]=='1' and !visit[i]){
            helper(visit, s , i );
            groups++;
        }

    }
    cout<<groups<<endl;
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