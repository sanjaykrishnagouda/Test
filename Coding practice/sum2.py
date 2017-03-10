nums=[0,4,3,0]
target=0

for i in range(len(nums)):
     a=nums[i]
     for j in range(i+1,len(nums)):
          b=nums[j]
          if b+a==target:
              print [i,j]




class Solution(object):
    

    def findDuplicate(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        
        t=0
        v=len(nums)-1
        m=(t+v)/2
        while v-t>1:
            count=0
            for i in nums:
                if m<i<=v:
                    count+=1
            if count>v-t:
                t=m
            else:
                v=m
            m=(t+v)/2
        return v



class Solution(object):
    def findDuplicate(self, nums):
        low = 0
        high = len(nums) - 1
        mid = (high + low) / 2
        while high - low > 1:
            count = 0
            for k in nums:
                if mid < k <= high:
                    count += 1
            if count > high - mid:
                low = mid
            else:
                high = mid
            mid = (high + low) / 2
        return high
