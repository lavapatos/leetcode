class Solution(object):
    def minOperations(self, boxes):
        count, l, r = 0,0,0
        ans = [0]*len(boxes)
        for i in range(len(boxes)):
            ans[i] += l
            if boxes[i] == '1':
                count +=1
            l += count
        count = 0
        for i in range(len(boxes)-1,-1,-1):
            ans[i] += r
            if boxes[i] == '1':
                count += 1
            r += count
        return ans