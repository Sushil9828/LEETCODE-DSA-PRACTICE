class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0 , p=1 , j=i+1;
        int n = nums.size();
        while (j<n){
            if ( nums[i]== nums[j]){
                j++;
            }else{
                nums[p]=nums[j];
                i=p;
                p++;
                j++;
            }
        }
        return p ;
        
    }
};