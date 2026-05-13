// 349. Intersection of Two Arrays

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {

        vector<int> v;
    
    for(int i=0;i<nums1.size();i++){
        for(int j=0;j<nums2.size();j++){
            if(nums1[i]==nums2[j]){
                if(find(v.begin(),v.end(),nums1[i])==v.end())
                v.push_back(nums1[i]);
                     break;
            }
           


            }
        }
        return v;
    }
        
    
};