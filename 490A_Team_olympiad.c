#include<stdio.h>
int main()
{
    int n ,i,p=0,m=0,s=0,min,j=1,k=1,r=1,l;
    int B[3];
    int pa[5000];
    int ma[5000];
    int sp[5000];
    scanf("%d",&n);
    int A[n];
    for(i=1; i<=n; i++)
    {
        scanf("%d",&A[i]);
    }
    for(i=1; i<=n; i++)
    {
        if(A[i]==1)
        {
            p++;
            pa[j] = i;
            j++;
        }
        if(A[i]==2)
        {

            m++;
            ma[k] = i;
            k++;
        }
        if(A[i]==3)
        {

            s++;
            sp[r] = i;
            r++;

        }
    }
    for(i=0; i<3;)
    {
        B[i] = p;
        i++;
        B[i] = m;
        i++;
        B[i] = s;
        i++;
    }
    min = B[0];
    for(i=0; i<3; i++)
    {
        if(B[i]<min)
            min = B[i];
    }
    printf("%d\n",min);
    for(i=1;i<=min;i++)
    {
        printf("%d %d %d\n",pa[i],ma[i],sp[i]);
    }
    return 0;

}
