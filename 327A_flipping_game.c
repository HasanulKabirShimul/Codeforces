#include<stdio.h>
int main()
{
    int n,i,j,c,count = 0,one=0,zero=0,x=-1;
    scanf("%d",&n);
    int A[n];
    for(i=1;i<=n;i++)
    {
            scanf("%d",&A[i]);
    }
    for(i=1;i<=n;i++)
    {
        if(A[i]==1)
        {
            one++;
            if(zero>0)
            {
                zero--;
            }
        }
        else
        {
            zero++;
            if(zero>x)
                x = zero;
        }
    }
    printf("%d\n",x+one);

}
