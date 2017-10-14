#include <iostream>
#include <cstdio>
int main(void){
    using namespace std;
    double a=0,evr=0,sum;
    for(int i=1;i<=12;i++)
    {
        cin>>a;
        sum+=a;
    }
    evr=sum/12;
    printf("$%.2lf\n",evr);
    return 0;
}
