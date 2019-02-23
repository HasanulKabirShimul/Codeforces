#include<stdio.h>
void rec(int n)
{
    if(n==0)
        return ;
    rec(n);
    printf("%d\n", n);
}
int main()
{
    int n;
    while(scanf("%d", &n)!=EOF)
    {
        rec(n);
    }
    return 0;
}
