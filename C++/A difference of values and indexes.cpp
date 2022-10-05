/*Given a unsorted array, you need to find the maximum difference of absolute values of elements and indexes, i.e., for i < j, calculate maximum of | A[i] - A[j] | + | i - j |. 

 Link: https://practice.geeksforgeeks.org/problems/a-difference-of-values-and-indexes0302/0

Example 1:

Input : 
n = 3
arr[ ] = {1, 3, -1}
Output : 5
Explanation:
Maximum difference comes from indexes 
1, 2 i.e | 3 - (-1) | + | 1 - 2 | = 5

Example 2:

Input : 
n = 4
arr[ ] = {5, 9, 2, 6} 
Output :  8*/

class Solution{
  public:
    int maxDistance(int arr[], int n) 
    { int max1=INT_MIN,max2=INT_MIN,min1=INT_MAX,min2=INT_MAX;
        for(int i=0;i<n;i++)
        {
            max1=max(max1,arr[i]+i);
            min1=min(min1,arr[i]+i);
            max2=max(max2,arr[i]-i);
            min2=min(min2,arr[i]-i);
            
        }return max(abs(max1-min1),abs(max2-min2));
    } 
};

/*Time Complexity: O(n).
Auxiliary Space: O(1).*/