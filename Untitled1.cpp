#include <iostream>
using namespace std;

int main() {
	int x,y,sum=0;
	cout<<" sonni kiriting ";
	cin>>x;
	y=x;
	while ( y!=0)
	   { 
	   sum=sum+y%10;
	   y=y/10; }
	   cout<<x<<" raqamlar yig'indisi "<<sum;
return 0;
 
}
