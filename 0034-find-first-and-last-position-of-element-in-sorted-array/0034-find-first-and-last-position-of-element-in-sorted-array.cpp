class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int low = 0, high = n - 1;
        int first = -1, last = -1;
        int j, k;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (nums[mid] == target) {

                
                j = 0;
                k = mid;

                while (j <= k) {
                    int x = j + (k - j) / 2;

                    if (nums[x] == target) {
                        first = x;
                        k = x - 1;
                    }
                    else {
                        j = x + 1;
                    }
                }

                
                j = mid;
                k = n - 1;

                while (j <= k) {
                    int x = j + (k - j) / 2;

                    if (nums[x] == target) {
                        last = x;
                        j = x + 1;
                    }
                    else {
                        k = x - 1;
                    }
                }

                return {first, last};
            }

            else if (nums[mid] < target) {
                low = mid + 1;
            }

            else {
                high = mid - 1;
            }
        }

        return {-1, -1};
    }
};