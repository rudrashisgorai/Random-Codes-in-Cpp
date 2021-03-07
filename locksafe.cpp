#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;



void solve() {
    long long int n;
    cin >> n;
    long long int nums[n];
    for(int i = 0; i < n;i++){
        cin >> nums[i];
    }
    //sort(nums.begin(), nums.end());
    long long int count = 0;
    for(int i = 0; i <n;i++){
        long long int l1 = 0;
        long long int l2 = nums[i];
        long long int m = INT_MIN ;
        
        for(int j = i;j<n;i++){
            //cout<<l1<<" "<<l2<<" "<<nums[i]<<endl;
            l1 = l1 | nums[i];
            l2 = l2 & nums[i];
            m = (nums[i]>=m)?nums[i]:m;
        }
        if((l1 ^ l2)>= m) count++;
    }
    cout<<count<<endl;

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