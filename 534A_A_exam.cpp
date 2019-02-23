#include<iostream>
using namespace std;
int arr[5005];
int odd[5005];
int main()
{
    int i,j=0;
    int n,k,pos=0,count=0;
    cin>>n;
    if(n==1)
    {
        cout<<"1"<<endl;
        cout<<"1"<<endl;
    }
    else if(n==2)
    {
        cout<<"1"<<endl;
        cout<<"1"<<endl;
    }
    else if(n==3)
    {
        cout<<"2"<<endl;
        cout<<"1 3"<<endl;
    }
    if(n>=4)
    {
        k = n;
        cout<<k<<endl;
    for(i=1;i<=n;i++)
    {
        arr[j]=i;
        j++;
    }
    if(n>=4 && n%2==0)
    {
        for(i=j-2;i>=0;i-=2)
        {
           odd[pos] = arr[i];
           pos++;
        }
        count = pos;
        for(i=n-1;i>=1;i-=2)
        {
            odd[count] = arr[i];
            count++;

        }
        for(i=0;i<count;i++)
        {

            cout<< odd[i];
            cout<<" ";
        }
        cout<<"\n";
    }
    if(n>=4 && n%2==1)
    {
        for(i=j-1;i>=0;i-=2)
        {
           odd[pos] = arr[i];
           pos++;
        }
        count = pos;
        for(i=n-2;i>=1;i-=2)
        {
            odd[count] = arr[i];
            count++;

        }
        for(i=0;i<count;i++)
        {

            cout<< odd[i];
            cout<<" ";
        }
        cout<<"\n";
    }
    }
    return 0;





}
