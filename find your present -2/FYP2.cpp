#include <iostream>
int main(void){
    using namespace std;
    int a=0;
    while(cin>>a,a)
    {
        int b=0,x=0;
        for(;a>0;a--)
        {
            cin>>b;
            x^=b;
        }
        cout<<x<<endl;
    }
    return 0;
}
