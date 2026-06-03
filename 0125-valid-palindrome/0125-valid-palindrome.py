class Solution(object):
    def isPalindrome(self, s):
        check  = "".join(c for c in s if c.isalnum())
        check = check.lower()
        return check == check[::-1]