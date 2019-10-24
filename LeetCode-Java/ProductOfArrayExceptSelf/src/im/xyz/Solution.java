package im.xyz;

public class Solution {
    public int[] productExceptSelf(int[] nums) {
        int length = nums.length;

        int[] ret = new int[length];


        ret[0] = 1;
        for (int i=1; i<length; ++i) {
            ret[i] = ret[i-1] * nums[i-1];
        }

        int r = 1;

        for (int i=length-1; i>0; --i) {
            ret[i] = ret[i] * r;
            r *= nums[i];
        }

        ret[0] = r;

        return ret;
    }

    public static void main(String[] args) {
        Solution s = new Solution();
        int[] nums = {3,4};
        int[] ret = s.productExceptSelf(nums);
        for (int x : ret)
            System.out.print(x+" ");
    }
}
