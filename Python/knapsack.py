def knapsack(wt,val,W,N):
    if N==0 or W==0:
        return 0
    elif wt[N-1]<=W:
        return max((val[N-1]+knapsack(wt,val,W-wt[N-1],N-1)),knapsack(wt,val,W,N-1))
    elif (wt[N-1]>W):
        return knapsack(wt,val,W,N-1)
#__main()__:
wt=list(map(int,input().split()))
val=list(map(int,input().split()))
W=int(input())
N=len(wt)
a=knapsack(wt,val,W,N)
print(a)

# Time Complexity is Exponential i.e. O(2^n)
# Space Complexity is O(n) i.e. Auxillary stack space
