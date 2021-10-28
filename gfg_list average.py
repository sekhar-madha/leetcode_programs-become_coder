#{ 
#Driver Code Starts
#Initial Template for Python 3

 # } Driver Code Ends
#User function Template for python3


def avg(mylist):
    ##Your Code Here
    l=sorted(mylist)
    l.pop(0)
    l.pop()
    s=sum(l)
    return s//len(l)
#{ 
#Driver Code Starts.




def main():
    testcases = int(input()) #testcases
    while(testcases > 0):
        
        mylist = [int(x) for x in input().split()]
        print(avg(mylist))
        testcases -= 1
        


if __name__=='__main__':
    main()
#} Driver Code Ends
