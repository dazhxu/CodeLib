package im.xyz;

import java.util.ArrayList;
import java.util.List;

public class Solution {
    public List<List<Integer>> combinationSum3(int k, int n) {
        List<List<Integer>> combinationLists = new ArrayList<>();

        backtracking(combinationLists, new ArrayList<>(), n, 1, k);

        return combinationLists;
    }

    void backtracking(List<List<Integer>> lists, List<Integer> curList, int remains, int index, int limit) {
        if(remains < 0) return;
        if(remains == 0 && curList.size() == limit) {
            lists.add(new ArrayList<>(curList));
            return;
        }

        if (remains < index || index > 9 ) return;

        backtracking(lists, curList, remains, index+1, limit);
        curList.add(index);
        backtracking(lists, curList, remains-index, index+1, limit);
        curList.remove(curList.size()-1);
    }

    public static void main(String[] args) {
        Solution s = new Solution();
        List<List<Integer>> lists = s.combinationSum3(9, 10);
        for (int i=0; i<lists.size(); ++i) {
            System.out.println(lists.get(i));
        }
    }
}
