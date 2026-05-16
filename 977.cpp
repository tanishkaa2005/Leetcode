// Squares of a Sorted Array


class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        vector<int> sq(n);

        
        int left=0;
        int right=n-1;
        int index=n-1;

       while(left <= right){
        int l=pow(nums[left],2);
        int r=pow(nums[right],2);

        if(l > r){
        sq[index]=l;
        left++;
       }
       else{
        sq[index]=r;
        right--;
       }

       index--;

       }
       return sq;

       
        
    }
};