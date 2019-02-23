#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    long long int n,i,max = 0,d1,d2,j,min;
    cin>>n;
    int A[n+100];
    for(i=0;i<n;i++)
    {
        cin>>A[i];
    }

    for(i=0;i<n;i++)
    {
    if(i==0)
    {

        min = abs(A[i+1]-A[i]);
        max = abs(A[n-1]-A[i]);
    }
    else if(i==n-1)
    {
        min = abs(A[i-1]-A[i]);
        max = abs(A[i]-A[0]);
    }
    else
    {
        d1 = abs(A[i]-A[i+1]);
        d2 = abs(A[i]-A[i-1]);
        if(d1<d2)
            min = d1;
            else
            min = d2;
        d1 = abs(A[i]-A[0]);
        d2 = abs(A[i]-A[n-1]);
        if(d1>d2)
            max = d1;
        else
            max = d2;
    }
    cout << min << " " << max << endl;
    }
    return 0;

}
