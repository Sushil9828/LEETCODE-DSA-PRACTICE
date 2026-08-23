class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
    sort(nums.begin(), nums.end());
    
    int n = nums.size();
    int closestSum = nums[0] + nums[1] + nums[2];
    
    for (int i = 0; i < n - 2; i++) {
        int j = i + 1;
        int k = n - 1;
        
        while (j < k) {
            int sum = nums[i] + nums[j] + nums[k];
            
            int currDiff = abs(target - sum);
            int minDiff = abs(target - closestSum);
            
            if (currDiff < minDiff) {
                closestSum = sum;
            }
            
            if (sum < target) {
                j++;
            } 
            else if (sum > target) {
                k--;
            } 
            else {
                return sum;
            }
        }
    }
    
    return closestSum;
    }
};