#include<iostream>
using namespace std;//using C++ to write the program
int main(){
  int n=0;
  cout<<"Enter number of rows:"<<endl;
  cin>>n;
  for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
      cout<<"*";
    }
    cout<<" "<<endl;
  }
}
    /*
    OUTPUT:for n=5
    *
    * *
    * * *
    * * * *
    * * * * *
    */
