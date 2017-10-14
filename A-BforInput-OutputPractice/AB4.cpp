#include <iostream>
int main(void)
{
	using namespace std;
	int a=0;
	while(cin>>a&&a!=0)
	{
		int sum=0,b=0;
		for(int i=0;i<a;i++)
		{
			cin>>b;
			sum+=b;
		}
		cout<<sum<<endl;
		
	}
	
	return 0;
}
