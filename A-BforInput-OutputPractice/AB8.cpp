#include <iostream>
int main(void){
    using namespace std;
    int a=0,b=0;
    cin>>a;
    for(;a>0;a--){
        while(cin>>b)
        {
            int sum=0,c=0;
            for(;b>0;b--)
            {
                cin>>c;
                sum+=c;
            }
            cout<<sum<<endl;
            if(a>1)
                cout<<endl;
            break;
        }
    }
    return 0;
}
