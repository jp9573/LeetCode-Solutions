class Solution(object):
    def minPartitions(self, n):
        max_digit = -1
        for digit in n:
            if int(digit) > max_digit:
                max_digit = int(digit)
        return max_digit
