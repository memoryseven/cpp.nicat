#include <iostream>
int main(void){
	using namespace std;
	int a=0,b=0;
	while(cin>>a>>b)
	{
		if(a==0&&b==0)
			break;
		cout<<a+b<<endl;
	}
	return 0;
}
