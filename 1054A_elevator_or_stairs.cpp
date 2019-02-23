#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;
int main()
{
    int x,y,z,t1,t2,t3,diff1,diff2,stairs,elavator;
    cin>>x>>y>>z>>t1>>t2>>t3;
    diff1 = abs(x-y);
    stairs = diff1*t1;
    diff2 = abs(x-z);
    elavator = diff2*t2+2*t3+diff1*t2+t3;
    if(elavator<=stairs)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;

}
