class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
    
        int count=1;

        sort(nums.begin(),nums.end());

        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]){
                count++;
            }
            else{
                count=1;
            }
            
          
        if(count > nums.size()/2){
            return nums[i];
        }

        }
      
        
        return nums[0];
    }
    
};


// using map
// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {

//         unordered_map<int,int> mp;

//         for(int i=0;i<nums.size();i++){
//             mp[nums[i]]++;
//         }

//         for(auto it: mp){
//             if(it.second>nums.size()/2){
//                 return it.first;
//             }
//         }

//         return -1;
        
    
       
//     }
    
// };