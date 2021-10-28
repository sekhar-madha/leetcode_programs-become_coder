#{ 
#Driver Code Starts
#Initial Template for Python 3

 # } Driver Code Ends
#User function Template for python3


def has44(arr):
    ##Your code here
    c=arr.count(4)
    k=0
    for i in range(c):
        k=arr.index(4,k)
        if k<len(arr)-1 and arr[k+1]==4:
            return True
        else:
            k+=1
    return False

#{ 
#Driver Code Starts.




def main():
    testcases = int(input()) #testcases
    while(testcases > 0):
        
        arr = [int(x) for x in input().split()]
        print(has44(arr))
        testcases -= 1
        


if __name__=='__main__':
    main()
#} Driver Code Ends
