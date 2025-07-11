class Solution(object):
    def threeSum(self, nums):
        ans = set()
        n, z, p = [], [], []

        for num in nums:
            if num < 0:
                n.append(-num)
            elif num == 0:
                z.append(num)
            else:
                p.append(num)
        
        uniqueN, uniqueP = set(n), set(p)

        if len(z) > 2:
            ans.add((0,0,0))

        if len(z) >= 1:
            for num in uniqueN:
                if num in uniqueP:
                    ans.add((-num,0,num))

        for i in range(len(p)):
            for j in range(i+1,len(p)):
                sum = p[i]+p[j]
                if sum in uniqueN:
                    ans.add((-sum,min(p[i],p[j]),max(p[i],p[j])))
        
        for i in range(len(n)):
            for j in range(i+1,len(n)):
                sum = n[i]+n[j]
                if sum in uniqueP:
                    ans.add((-max(n[i],n[j]),-min(n[i],n[j]),sum))
        return list(ans)