package im.xyz;

import java.util.TreeSet;

public class Solution {
    public boolean containsNearbyAlmostDuplicate(int[] nums, int k, int t) {
        for (int i=0; i<nums.length; ++i) {
            for (int j=i+1; j<=Math.min(i+t, nums.length-1); ++j) {
                long absolute = Math.abs((long)nums[j] - (long)nums[i]); //long类型防止溢出
                if (absolute <= k)
                    return true;
            }
        }
        return false;
    }

    //方法二：时间复杂度O(n*lgk)，空间复杂度O(k)
    //基于k个有序列表，最佳数据结构TreeSet,参考：https://wiki.jikexueyuan.com/project/java-enhancement/java-twentyeight.html
    public boolean containsNearbyAlmostDuplicate02(int[] nums, int k, int t) {
        TreeSet<Long> slides = new TreeSet<>();
        for (int i=0; i<nums.length; ++i) {
            Long floor = slides.floor((long)nums[i] + t);
            Long ceiling = slides.ceiling((long)nums[i] - t);
            if (floor != null && floor >= nums[i] ||
                    ceiling != null && ceiling <= nums[i])
                return true;
            slides.add((long)nums[i]);
            if (i >= k)
                slides.remove((long)nums[i-k]);
        }
        return false;
    }

    public static void main(String[] args) {
        Solution s = new Solution();
        int[] nums = {0,2147483647};
        System.out.println(s.containsNearbyAlmostDuplicate02(nums, 1, 2147483647));

    }
}
