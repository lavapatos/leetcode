class Solution(object):
    def trap(self, height):
        l, r = 0, len(height) - 1
        l_max, r_max = height[l], height[r]
        ans = 0

        while l < r:
            if l_max < r_max:
                l += 1
                l_max = max(l_max, height[l])
                ans += l_max - height[l]
            else:
                r -= 1
                r_max = max(r_max, height[r])
                ans += r_max - height[r]

        return ans
        