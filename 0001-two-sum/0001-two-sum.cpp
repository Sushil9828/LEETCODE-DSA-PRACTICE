class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> ps;
        
        for (int i = 0; i < nums.size(); i++) {
            int res = target - nums[i];
            
           
            if (ps.count(res)) {
                return {ps[res], i};
            }
            else{
            ps[nums[i]] = i;
        }
        }
        return {};
        
    }
};