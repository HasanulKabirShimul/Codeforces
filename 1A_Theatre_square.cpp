#include<iostream>
using namespace std;
int main()
{
    long long int n,m,a,remainder1,remainder2,x,y,ans;
    cin>>n>>m>>a;
    remainder1 =n%a;
    remainder2 =m%a;
    x = n/a;
    y = m/a;
    if(remainder1!=0)
        x = x+1;
    if(remainder2!=0)
        y = y+1;
    ans = x*y;
    cout<<ans<<endl;
    return 0;

}
