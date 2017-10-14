#include <iostream>
#include <cstdio>
#define P 3.1415927
#define toFeet(x) x/12.0
#define toMiles(x) x/5280.0
int main(void){
    using namespace std;
    double a=0,c=0;
    int b=0;
    int e=1;
    double s;
    while(cin>>a&&cin>>b&&cin>>c&&b)
    {
        c/=3600;
        a/=5280*12;
        s=a*P*b;
        printf("Trip #%d: %.2lf %.2lf\n",e++,s,s/c);
    }
    return 0;
}
