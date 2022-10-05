#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ss string
#define loop1(i,n) for(ll i=0;i<n;++i)
#define loop2(i,n) for(ll i=n-1;i>=0;--i)
#define loop3(i,a,b) for(ll i=a;i<b;i++)
#define loop4(i,a,b) for(ll i=a;i>=b;i--)
#define NO cout<<"NO"<<endl; 
#define YES cout<<"YES"<<endl;
#define out(x) cout<<x<<endl;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    
    ll t;cin>>t;
    while(t--)
    {
        ll n;cin>>n;
        string s;
        string s2(n,'1');
        cin>>s;
        ll ans=0;
        for(ll i=1;i<=n;i++)
        {
          for(ll j=i;j<=n;j+=i)
          {
            if(s[j-1]=='0' && s2[j-1]=='1')
            {
              ans+=i;s2[j-1]='0';
            }
            else if(s[j-1]=='0' && s2[j-1]=='0')
            {

            }
            else
            {
              break;
            }
          }
        }
        cout<<ans<<endl;
    }
}