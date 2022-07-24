#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	long long int t;
	cin>>t;
	
	while(t--)
	{
	    long long int A,Y,X;
	    cin>>A>>Y>>X;
	    
	    if(A>=Y)
	    {
	        cout<<(X*Y)<<endl;
	    }
	    else
	    {
	        cout<<(X*A)+1<<endl;
	    }
	}
	return 0;
}
