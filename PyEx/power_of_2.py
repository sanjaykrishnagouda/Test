class Solution:
    def fn(self, n):
        """
        :type n: int
        :rtype: bool
        """
        if n<0:
            return False
        if n==1:
            return True

        if n!=1 and n%2!=0:
            return False
        else:
            if n==2 or n==4 or n==8:
                return True
            if n%3==0 or n%5==0 or n%7==0 or n%11==0 or n%17==0 or n%13==0 or n%19==0:
                return False
            if n>=39:
                return self.fn(n/2)
            else:
                return True

sol=Solution()
n=int(raw_input("enter a number:"))
re=sol.fn(n)
print re


