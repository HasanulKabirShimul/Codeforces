#include<iostream>
#include<iomanip>
#include<stdlib.h>
using namespace std;
double x[100],y[100],z;
int main()
{
     int i,j;
     double max1 =0,max2=0;
    for(i=0,j=0;i<=2;i++,j++)
    {
      scanf("%lf %lf",&x[i],&y[j]);

    }
    cout<<showpoint;
    cout<<fixed;
    cout<<setprecision(6);
    for(i=0;i<3;i++)
    {
        if(x[i]>max1)
            max1 = x[i];
    }
    for(i=0;i<3;i++)
    {
        if(y[i]>max2)
            max2 = y[i];
    }
    double ans = max1*max2;
    cout<<ans<<endl;
    return 0;

}
