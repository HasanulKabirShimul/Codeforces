#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    int A[n+5];
    for(i=0;i<n;i++)
        cin>>A[i];
    sort(A,A+n);
    for(i=0;i<n;i++)
        cout<<A[i];
    return 0;
}

