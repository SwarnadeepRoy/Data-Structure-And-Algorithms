/*Given an integer array nums of unique elements, return all possible 
subsets
 (the power set).

The solution set must not contain duplicate subsets. Return the solution in any order.

 

Example 1:

Input: nums = [1,2,3]
Output: [[],[1],[2],[1,2],[3],[1,3],[2,3],[1,2,3]]
Example 2:

Input: nums = [0]
Output: [[],[0]]
*/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
   void solve(vector<vector<int>> &ans,vector<int> out,vector<int>& nums,int i){
        if(i>=nums.size()){
            ans.push_back(out);
            return;
        }
        
        out.push_back(nums[i]);
        solve(ans,out,nums,i+1);
        out.pop_back();
        solve(ans,out,nums,i+1);
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> out;
        solve(ans,out,nums,0);
        return ans;
    }
};
// main() not included