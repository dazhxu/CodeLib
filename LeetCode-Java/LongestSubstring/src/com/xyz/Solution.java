package com.xyz;

import java.util.HashMap;
import java.util.HashSet;
import java.util.Map;
import java.util.Set;

public class Solution {
    public int lengthOfLongestSubstring(String s) {
        int n = s.length();
        if(n<=1) return n;
        int maxLenth = 0;
        int i = 0, j= 0;
        Set<Character> set = new HashSet<>();
        while(i<n && j<n) {
            if(!set.contains(s.charAt(j))) {
                set.add(s.charAt(j++));
                maxLenth = Math.max(maxLenth, j-i);
            } else {
                set.remove(s.charAt(i++));
            }
        }
        return maxLenth;
    }

    public int lengthOfLongestSubstringII(String s) {
        int n = s.length();
        if(n<=1) return n;
        int maxLenth = 0;
        Map<Character, Integer> map = new HashMap<>();
        for(int i=0,j=0;j<n;j++){
            if(map.containsKey(s.charAt(j))){
                i = Math.max(map.get(s.charAt(j))+1, i);
            }
            maxLenth = Math.max(maxLenth, j-i+1);
            map.put(s.charAt(j), j);
        }
        return maxLenth;
    }
}
