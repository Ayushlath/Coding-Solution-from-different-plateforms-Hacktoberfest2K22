#include<bits/stdc++.h>
using namespace std;
// first approach------------------------------------------------------------>>>>>>>>>>>>>>>
class Stack{
    private:
        stack< pair<int , int> > st;
        int minE = INT_MAX;
    public:
        void push(int x){
            if(st.empty()==true){
                minE = x;
            }
            else{
                minE = min(minE,x);
            }
            st.push({x,minE});
        }
        int pop(){
            if(!st.empty()){
                int x = st.top().first;
                st.pop();
                return x;
            }
            return -1;
        }
        int getMinEle(){
            if(!st.empty()){
                return st.top().second;
            }
            return -1;
        }
};
// code by srajan

int main() {
     Stack s;
     s.push(8);
     s.push(3);
     s.push(1);
     s.push(9);
     s.push(19);
     cout<< s.pop() << " ";
     cout<< s.pop() << " ";
     cout<< s.getMinEle() << " ";
     cout<< s.pop() << " ";
     cout<< s.getMinEle() << " ";
     return 0;
}
