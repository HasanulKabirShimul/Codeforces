#include<stdio.h>
int main()
{
    int a,b,c,diff,ans;
    scanf("%d %d %d",&a,&b,&c);
     if(a+b<=c)
        ans = c - (a+b)+1;
    else if(b+c<=a)
        ans = a - (b+c)+1;
    else if(c+a<=b)
        ans = b - (c+b) + 1;
        else
            ans  = 0;
        printf("%d\n",ans);
        return 0;



}
