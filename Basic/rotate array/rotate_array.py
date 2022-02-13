def rotateArray(nums,k):
    arr=[]
    for i in range(len(nums)):
        arr.append(0)
    for i in range(len(nums)):
        arr[(i+k)%len(nums)]=nums[i]
    nums=arr
    return nums

def main():
    nums=[1,2,3,4,5,6,7]
    k=3
    print(rotateArray(nums,k))

if __name__=="__main__":
    main()

