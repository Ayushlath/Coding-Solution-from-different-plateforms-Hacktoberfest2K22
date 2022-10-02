#include <iostream>
using namespace std;

int ceiling(int a[] ,int n ,  int target){
    
    int s = 0;
    int e = n-1;
    int mid = (s+e)/2;
    while (s<=e){
       
       if(a[mid]==target){
        return mid;
       }
       else if (a[mid]>target){
        e = mid-1;
       }
       else{
        s = mid +1;
       }

       mid = (s+e)/2;
     }
    return s;
}

int main(){

    //ceiling of a number means ..a samallest number in the array equal or greater than our target element;
int a[5] = {2,4,7,9,10};
int p = ceiling(a,5,8);
cout<<p;

return 0;
}