#include <iostream>
int GCD(int a,int b)
{
    return b==0?a:GCD(b,a%b);
}
int main(void){
    using namespace std;
    int a=0,b=0;
    while(cin>>a&&cin>>b&&a!=-1&&b!=-1)
    {
        if(GCD(a,b)==1)
            cout<<"YES"<<endl;
        else cout<<"POOR Haha"<<endl;
    }
    return 0;
}
