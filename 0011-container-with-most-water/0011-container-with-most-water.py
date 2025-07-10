class Solution(object):
    def maxArea(self, height):
        max, l, r = 0, 0, len(height)-1
        while l < r:
            if max < min(height[l],height[r])*(r-l):
                max = min(height[l],height[r])*(r-l)
            if height[l] < height[r]:
                l+=1
            else:
                r-=1
        return max