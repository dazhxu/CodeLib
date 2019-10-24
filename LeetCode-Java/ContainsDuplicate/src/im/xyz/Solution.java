package im.xyz;

import java.util.HashSet;
import java.util.Map;
import java.util.Set;

public class Solution {
    public boolean containsDuplicate(int[] nums) {
        if(nums.length <= 1) return false;

        Set<Integer> numSet = new HashSet<>();
        for(int x : nums) {
            if(numSet.contains(x)) {
                return true;
            }
            numSet.add(x);
        }
        return false;
    }
}
