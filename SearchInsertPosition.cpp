class Solution {
    public:
        int searchInsert(vector<int>& nums, int target) {
            int left=0, right=nums.size() -1;  //initialize left and right pointers
    
            // binary search loop
            while (left <= right){
                int mid = left + (right - left) / 2;
    
                //comparison Logics
                if(nums[mid] == target)
                return mid;
    
                else if(nums[mid] < target)
                left = mid+1;
    
                else right = mid-1;
            }
    
            return left;
        }
    };