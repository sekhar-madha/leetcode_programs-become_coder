#problem to print count no number of digits in a given number using recursion


def count(n,c):
    if n==0:
        return c
    c+=1
    return count(n//10,c)
c=0
n=int(input())
print(count(n,c))
