#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

bool helper(int pos , vector<int>& nums){
        if(pos == nums.size()-1)
            return true;
        
        int far = pos + nums[pos] > nums.size()-1 ?  pos + nums[pos] : nums.size()-1 ;
        
        for(int i = pos +1 ; i<= far; i++){
            if(helper(i,nums))
                return true;
        }
        return false;
    }

void solve() {
    
    int n ;

    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i <n ;i++) {
        cin>>nums[i];
    }
    cout<<helper(0 , nums) ;
}

int main() {
    // ios_base::sync_with_stdio(0);
    // cin.tie(0); cout.tie(0);
    int tc = 1;
    // cin >> tc;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t  << ": ";
        solve();
    }
}