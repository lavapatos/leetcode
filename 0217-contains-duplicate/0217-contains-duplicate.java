class Solution {
    public boolean containsDuplicate(int[] nums) {
        HashSet <Integer> check = new HashSet<Integer>();

        for (var n : nums) {
            if (check.contains(n)) {return true;}
            else {check.add(n);}
        }
        return false;
    }
}