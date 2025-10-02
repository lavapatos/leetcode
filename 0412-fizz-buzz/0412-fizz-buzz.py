class Solution(object):
    def fizzBuzz(self, n):
        ans = [""]*n
        for i in range(n):
            flag = True
            if (i+1) % 3 == 0:
                ans[i] += "Fizz"
                flag = False
            if (i+1) % 5 == 0:
                ans[i] += "Buzz"
                flag = False
            if flag:
                ans[i] += str(i+1)
        return ans 
        """
        :type n: int
        :rtype: List[str]
        """
        