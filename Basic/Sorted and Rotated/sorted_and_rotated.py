def sortedAndRotated(arr):
    l=len(arr)
    count=0
    if(arr[l-1]>arr[0]):
        count==1
    for i in range(l-1):
        if(arr[i]>arr[i+1]):
            count+=1
    if(count<=1):
        return 'yes'
    else:
        return 'no'
def main():
    arr=[2,1,3,4]
    print(sortedAndRotated(arr))
if __name__=='__main__':
    main()
