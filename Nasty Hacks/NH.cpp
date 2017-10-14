#include <iostream>
int main(void){
    using namespace std;
    int a=0;
    cin>>a;
    for(;a>0;a--)
    {
        int b=0,c=0,d=0;
        cin>>b;
        cin>>c;
        cin>>d;
        if(b==c-d)
            cout<<"does not matter"<<endl;
        else if(b<c-d)
            cout<<"advertise"<<endl;
        else  cout<<"do not advertise"<<endl;
    }
    return 0;
}
