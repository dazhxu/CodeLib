package im.xyz;

import java.util.HashMap;
import java.util.Map;

public class Solution {
    public boolean containsNearbyDuplicate(int[] nums, int k) {
        if(nums.length <= 1) return false;
        Map<Integer, Integer> indexMap = new HashMap<>();
        for (int i=0; i<nums.length; ++i) {
            if(indexMap.containsKey(nums[i]) && (i - indexMap.get(nums[i])) <= k) {
                return true;
            }
            indexMap.put(nums[i], i);
        }
        return false;
    }
}
