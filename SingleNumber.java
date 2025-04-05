class Solution {
    public int singleNumber(int[] nums) {
        
        int ans = 0; // Initialize ans to 0
        
        for(int x : nums) { // interact with each element through 'nums' 
            ans ^= x; // Apply XOR operation on every 'nums'
        }

        return ans; // Return the unique number 

    }
}
