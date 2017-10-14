#include <iostream>
int main(void){
	using namespace std;
	int a=0;
	cin>>a;
	for(;a>0;a--)
	{
		int b=0;		
		cin>>b;
		int c=0,sum=0;
		for(;b>0;b--)
		{
			cin>>c;
			sum+=c;
		}
		cout<<sum<<endl;
			
		
		
	}
	return 0;
}
