class Solution {  /*  BRUTE FORCE */
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            vector<int> result;  /* this result is the name of the vector array */
            for(int i=0; i<nums.size(); i++){     /*nums.size () used for :: call total number 
                                                      of element in array*/
                for(int j=i+1; j<nums.size(); j++){
                    if(nums[i]+nums[j]==target){
    
                        result.push_back(i); 
                        result.push_back(j);
    
                    }
                }
            }
            return result;
        }
    };