class Solution {
    public:
        int removeElement(vector<int>& nums, int val) {
            int k=0; //described a variable k=0;
            for(int i=0; i<nums.size(); i++){
                if(nums[i]!=val){  // if nums[i]!= to the val then,
                    nums[k]=nums[i]; // nums[k]=nums[i] means nums[k] replaced by nums[i]. 
                    k++;  //then,increment k.
            }
        }
        return k;
        }
    };