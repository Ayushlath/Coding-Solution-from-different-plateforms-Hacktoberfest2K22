#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
	    int a,b,c,sum;
	    cin >> a >> b >> c;
	    if(a<10 || b<10 || c<10)
	    {
	        cout << "FAIL" << endl;
	    }
	    else{
	        sum = a+b+c;
	        if(sum<100)
	        {
	            cout <<"FAIL" <<endl;
	        }
	        else
	        {
	            cout <<"PASS" << endl;
	        }
	    }
	    
	}
	return 0;
}

//Pass the exam (codechef)
//Time Complexity : O(1)
