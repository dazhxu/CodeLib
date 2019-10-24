package im.xyz;

public class Solution {
    public int missingNumber(int[] nums) {
        for (int i=0; i<nums.length; ++i) {
            if (nums[i] == i)
                continue;
            while (nums[i] != i && nums[i] != nums.length) {
                int tmp = nums[nums[i]];
                nums[nums[i]] = nums[i];
                nums[i] = tmp;
            }

        }

        for (int i=0; i<nums.length; ++i) {
            if (nums[i] != i)
                return i;
        }
        return nums.length;
    }

    public static void main(String[] args) {
        Solution s = new Solution();
        int[] nums = {1,2,3};
        System.out.println(s.missingNumber(nums));
    }
}
