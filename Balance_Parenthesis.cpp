#include<iostream>
#include<stack>
  using namespace std;

  // Time Complexity = O(N)
  // Space Coplexity = O(N)

  bool isvalid(string s){
      int n=s.size();
      stack<char> st;
      bool ans = true;
      for(int i=0;i<n;i++){
          if(s[i]=='[' || s[i]=='{'|| s[i]=='('){
              st.push(s[i]);
          }
          else if(s[i]==')'){
              if(st.top()=='('){
                  st.pop();
              }
              else{
                  ans = false;
                  break;
              }
          }
          else if(s[i]=='}'){
              if(st.top()=='{'){
                  st.pop();
              }
              else{
                  ans = false;
                  break;
              }
          }
          else if(s[i]==']'){
              if(st.top()=='['){
                  st.pop();
              }
              else{
                  ans = false;
                  break;
              }
          }
      }
      if(st.size()==0){
      	ans = true;
      	return ans;
	  }
	  else{
	  	return ans;
	  }
      
  }

int main()
{
    string s ="[{()}]";
    if(isvalid(s)){
        cout<<"Valid String"<<endl;
    }
    else{
        cout<<"Invalid String"<<endl;
    }
    return 0;
}
