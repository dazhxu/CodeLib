package com.xyz;

class Solution {
    public String toGoatLatin(String s) {
        Set<Character> vowel = new HashSet<Character>();
        for(char c : new char[]('a','e','i','o','u','A','E','I','O','U')) {
            vowel.add(c);
        }
        
        int t = 1;
        StringBuilder sb = new StringBuilder();
        for (String word : s.split(" ")) {
            char first = word.charAt(0);
            if (vowel.contains(first)) {
                sb.append(word);
            } else {
                sb.append(word.subString(1));
                sb.append(word.subString(0, 1));
            }
            
            sb.append("ma");
            for (int i=0;i<t;i++) {
                sb.append("a");
            }
            t++
            sb.append(" ");
        }
        
        sb.deleteCharAt(sb.length()-1);
        return sb.toString();
    }
}