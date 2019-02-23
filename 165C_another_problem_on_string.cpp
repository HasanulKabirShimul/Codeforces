#include<iostream>
using namespace std;
long long Arr[1000009], k,i,sum,total,len;string s;
int main()
{
    cin>>k>>s;
    Arr[0] = 1;
    for(i=0;i<s.length();i++)
    {
        if(s[i]=='1')
            sum++;
        if(sum>=k)
        {
            total+= Arr[sum-k];
        }
        Arr[sum]++;
    }
    cout<<total;

}

