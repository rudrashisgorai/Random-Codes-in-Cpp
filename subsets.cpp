#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void helper(vector<vector<int>>& ans , vector<int> s_ans, vector<int>&nums){
        if(!nums.size()){
            ans.push_back(s_ans);
            return ;
        }
        int n1 = nums[nums.size()-1];
        nums.pop_back();
        helper(ans , s_ans , nums);
        s_ans.push_back(n1);
        helper(ans, s_ans, nums); 
        nums.push_back(n1);
             
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> s_ans;
        vector<vector<int>> ans ;
        helper(ans , s_ans , nums);
        return ans ;
    }
    
};

int main(){
    vector<int> nums = {1,2,3};
    Solution sol ;
    vector<vector<int>> m =sol.subsets(nums);
    for(auto & i : m){
        for(auto & j :i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}