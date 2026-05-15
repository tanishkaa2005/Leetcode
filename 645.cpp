class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {

        int n=nums.size();
        vector<int> v(n+1,0); 
        vector<int> ans(2);

        for(int i=0;i<n;i++){
            v[nums[i]]++;  //counting frequency of each element in the array 
        }

        for(int i=1;i<=n;i++){
            if(v[i]==0) ans[1]=i;
            if(v[i]>1) ans[0]=i;
            
        }
        return ans;
        
    }
};

// n+1 as we want to store the elements eg- 1,2,2,4 at v[nums[0]]= v[1]  so v array becomes [0,1,0,0,0]  and at last it becomes [0,1,2,0,1] the frequency of ech element at their indexes