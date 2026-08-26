class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int min , low =0  , high = n-1 , mid  ;
        int index = 0 ; 
        mid = low + ( high - low )/2;
        min = nums[mid];
        while (low <= high) {
    mid = low + (high - low) / 2;

    if (mid < n - 1 && nums[mid] > nums[mid + 1]) {
        index = mid + 1;
        break;
    }
    else if (nums[mid] < nums[0]) {
        high = mid - 1;
    }
    else {
        low = mid + 1;
    }
}
       low = index ; 
       high = n-1 ; 

       while ( low <= high ){
        mid = low + ( high - low )/2;
        if ( nums [mid] == target ){
            return mid ; 

        }else if (nums [mid] > target ){
            high = mid -1 ; 

        }else {
            low = mid + 1 ;
        }
       }

        low = 0;
        high = index - 1;

        while (low <= high) {
            mid = low + (high - low) / 2;

            if (nums[mid] == target) {
                return mid;
            }
            else if (nums[mid] > target) {
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }

    return -1;
    }

};