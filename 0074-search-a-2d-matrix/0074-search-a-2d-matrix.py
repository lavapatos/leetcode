class Solution(object):
    def searchMatrix(self, matrix, target):
        m, n = len(matrix), len(matrix[0])
        l, r = 0, m*n-1
        while (l <= r):
            mid = (l + r)/2
            row = mid/n
            col = (mid + n) % n
            midTerm = matrix[row][col]

            if midTerm == target:
                return True
            elif midTerm < target:
                l = mid + 1
            else:
                r = mid - 1
        return False