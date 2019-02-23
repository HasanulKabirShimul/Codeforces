#include<stdio.h>
int main()
{
    long long int l,r,n,p,i,j,count=0;
    scanf("%lld %lld",&l,&r);
    p = (r-l+1)/2;
    printf("YES\n");
    for(i=l;i<=r;i+=2)
    {
        printf("%lld %lld\n",i,i+1);
        count++;
        if(count==p)
            break;

    }
    return 0;

}
