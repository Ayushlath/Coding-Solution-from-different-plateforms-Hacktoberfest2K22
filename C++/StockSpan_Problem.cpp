
#include<bits/stdc++.h>
using namespace std;





class Solution
{
    public:
    //Function to calculate the span of stockâ€™s price for all n days.
    vector <int> calculateSpan(int price[], int n)
    {
       vector<int> v(n);
       
       stack<pair<int,int>> s; //nearest greater element to left,index;
       
       for(int i=0;i<n;i++)
       {
           int curr=price[i];
           
           if(s.empty())
           {
               v.push_back(-1);
           }
           else if(!s.empty() && s.top().first>curr )
           {
               v.push_back(s.top().second);
               
           }
           else if(!s.empty() && s.top().first<=curr)
           {
               while(!s.empty() && s.top().first<=curr)
               {
                   s.pop();
               }
               if(s.empty())
               {
                   v.push_back(-1);
               }else{
                   v.push_back(s.top().second);
               }
           }
           s.push({curr,i});
       }
       
       for(int i=0;i<n;i++)
       {
           v[i]=i-v[i];
       }
       return v;
       
       
    }
};





int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int i,a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		Solution obj;
		vector <int> s = obj.calculateSpan(a, n);
		
		for(i=0;i<n;i++)
		{
			cout<<s[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
//Time Complexity: O(N).
//Auxiliary Space: O(N).

