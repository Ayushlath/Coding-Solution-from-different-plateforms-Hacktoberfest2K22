#include<iostream>
using namespace std;
int gcd(int a,int b){
    if(b==0){
        return a;
    }
    return gcd(b,a%b);
}
int main(){
    int a,b;
    cout<<"Enter the value of a and b ";
    cin>>a>>b;
    cout<<"GCD = "<<gcd(a,b)<<endl;
}
//T.C:O(log(min(a,b))
//S.C:O(log(min(a,b))