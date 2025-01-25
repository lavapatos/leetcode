class Solution {
    public boolean isValid(String s) {
        Stack<Character> check = new Stack <Character>();
        for (int i = 0; i < s.length(); i++) {
            Character c = s.charAt(i);
            if (c == '(' || c == '[' || c == '{') {check.push(c);}
            else if (check.isEmpty() == true || c == ')' && check.peek() != '(' || c == ']' && check.peek() != '[' || c == '}' && check.peek() != '{') {return false;}
            else {check.pop();}
        }
        return check.isEmpty();
    }
}