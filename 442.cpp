// 442. Find All Duplicates in an Array

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        
        vector<int> ans;
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]){
                ans.push_back(nums[i]);
            }
        }
        return ans;
    }
};



// class Solution {
// public:
//     vector<int> findDuplicates(vector<int>& nums) {

//       unordered_map<int,int> m;
//       vector<int> result;

//       for( int n : nums){
//         m[n]++;
//       }
//       for(auto &p: m){
//         if(p.second > 1){
//             result.push_back(p.first);        }
//       }
//       return result;
//     }
      
// };