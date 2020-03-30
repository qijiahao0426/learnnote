def re(nums,begin,end):
    while(begin<end):
        temp=nums[begin]
        nums[begin]=nums[end]
        nums[end]=temp
        begin+=1
        end-=1

def rotate(nums,k):
    """
    Do not return anything, modify nums in-place instead.
    """
    n=len(nums) 
    k %= n
    re(nums,0,n-k-1)
    re(nums,n-k,n-1)
    re(nums,0,n-1)
nums=[-1,-100,3,99]
rotate(nums,2)
print(nums)
    
