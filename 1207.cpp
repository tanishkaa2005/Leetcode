class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        
        vector<int> result;
         int size=arr.size();
          
        sort(arr.begin(),arr.end());
        for(int i=0;i<size;){
              int count=1;
              int j;
        for( j=i+1;j<size;j++){
            if(arr[i]==arr[j]){
                count++;
            }
            else{
                break;
            }
         
        }
        result.push_back(count);
         i=j;
        }

         
        sort(result.begin(),result.end());
        for(int i=0;i<result.size()-1;i++){
            if(result[i]==result[i+1]){
                return false;
            }
        }
        return true;
    }
};