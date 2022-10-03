#include<bits/stdc++.h>
using namespace std;
bool valid(string str);
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string str;
        getline(cin,str);
        cout<<valid(str)<<endl;
    }
    return 0;
}



bool valid(string s)
{
    stack<char> st;
    for(int i=0;i<s.length();i++)
    {
        char ch=s[i];
        
        if(ch=='(' || ch=='{' || ch=='[')
        {
            st.push(ch);
        }
        else{
            if(!st.empty())
            {
                char top=st.top();
                if( (top=='(' && ch==')') || (top=='[' && ch==']') || (top=='{' && ch=='}'))
                {
                    st.pop();
                }
                else{
                    return false;
                }
            }
            else{
                return false;
            }
        }
    }
    if(st.empty())
   {
       return true;
   }
    else{
        return false;
    }
}

//Time Complexity: O(N) where N is the length of S.
//Auxiliary Space: O(N) 

