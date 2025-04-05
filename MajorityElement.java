class Solution {
    public int majorityElement(int[] nums) {
        Arrays.sort(nums);
        int i = nums.length/2;
        return nums[i];
    }
}
