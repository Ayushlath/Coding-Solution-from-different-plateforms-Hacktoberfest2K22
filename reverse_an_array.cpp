#include<iostream>
using namespace std;
int main()
{
    int arr[100], ele, i, j, temp;
    cout<<"Enter the Size of Array: ";
    cin>>ele;
    cout<<"Enter the elements: ";
    for(i=0; i<ele; i++)
        cin>>arr[i];
    j = ele-1;
    for(i=0; i<j; i++, j--)
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    cout<<"Reverse of Array is:\n";
    for(i=0; i<ele; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}
// Time complexity:O(n)
// Space complexity:O(n)
