#{ 
#Driver Code Starts
#Initial Template for Python 3

 # } Driver Code Ends
#User function Template for python3

def realSum(mylist):
    ##Your code here
    s,i=0,0
    l=len(mylist)
    while i<l:
        if mylist[i]==7:
            i+=2
            continue
        s+=mylist[i]
        i+=1
    return s    


#{ 
#Driver Code Starts.




def main():
    testcases = int(input()) #testcases
    while(testcases > 0):
        
        mylist = [int(x) for x in input().split()]
        print(realSum(mylist))
        testcases -= 1
        


if __name__=='__main__':
    main()
#} Driver Code Ends
