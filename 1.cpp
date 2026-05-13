class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector <int> v; 
        for(int i=0; i<n; i++){
            for(int j=i+1;j<n; j++){
                if (nums[i]+nums[j]==target){
                    v.push_back(i);
                    v.push_back(j);
                }
            }
            

        }
        return v;
    }

};

// optimized 

// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         unordered_map<int,int> mp;

//         for(int i=0;i<nums.size();i++){
//             int sum=target - nums[i];

//             if(mp.find(sum) !=mp.end()){
//                 return {mp[sum],i};
//             }
//             mp[nums[i]]=i;
//         } 
//         return {};
        
//     }
// };