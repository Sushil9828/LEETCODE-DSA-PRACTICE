class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        std::sort(nums.begin(), nums.end());
        int n = nums.size();
        int i = 0;
        vector<vector<int>> result;
        int target = 0 ;
        int sum = 0 ; 
        while ( i < (n-2) ){
           
            if (i > 0 && nums[i] == nums[i - 1]){
            i++;
            continue;
            }
            target = -nums[i];

            int j = i + 1;
            int k = n - 1;
            
            while (j<k){
                sum = nums[j]+nums[k];
                if ( sum == target ){
                result.push_back({nums[i], nums[j], nums[k]});
                while (j < k && nums[j] == nums[j + 1]) j++;
                while (j < k && nums[k] == nums[k - 1]) k--;
                j++;
                k--;

                }else if ( sum < target ){
                    j++;
                }else{
                    k--;
                }

            }
            i++;
        }
    return result;   
    }
};