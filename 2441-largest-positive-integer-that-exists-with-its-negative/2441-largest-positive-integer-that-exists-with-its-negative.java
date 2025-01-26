class Solution {
    public int findMaxK(int[] nums) {
        HashSet <Integer> check = new HashSet <Integer>();
        int resp = -1001;
        for (var n : nums) {
            if (!check.contains(n)) {check.add(n);}
        }
        for (var n : nums) {
            if (check.contains(-n) && n > resp) {resp = n;}
        }
        if (resp != -1001) {return resp;}
        return -1;
    }
}