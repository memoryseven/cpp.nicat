#include <iostream>
int main(void){
	using namespace std;
	int a=0;
	while(cin>>a)
	{
		int b=0,sum=0;
		for(;a>0;a--)
		{
			
			cin>>b;
			sum+=b;
		}
		cout<<sum<<endl;
	}
	return 0;
}
