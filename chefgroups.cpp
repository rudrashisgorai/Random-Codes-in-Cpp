#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

void helper(vector<bool>& visit, string s , int pos){
    if(pos <0 or pos == s.size()){
        return ;
    }
    if(s[pos]=='0' or visit[pos]) return ;
    
    visit[pos]=true;
    if(!visit[pos +1]) 
        helper(visit , s, pos + 1);
    if(!visit[pos -1]) 
        helper(visit , s, pos - 1);

}


void solve() {
    string s;
    cin>> s;
    vector<bool> visit(s.size(), false);
    int groups= 0;
    for(int i = 0; i < visit.size();i++){
        if(!visit[i] and s[i]=='1'){
            helper(visit , s , i );
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