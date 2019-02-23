#include<iostream>
using namespace std;
int main()
{
    int a,b,c,diff,ans;
    cin>>a>>b>>c;
    if(a+b<=c)
        ans = c - (a+b)+1;
    else if(b+c<=a)
        ans = a - (b+c)+1;
    else if(c+a<=b)
        ans = b - (c+a) + 1;
    else
        ans  = 0;
    cout<<ans<<endl;
    return 0;



}

