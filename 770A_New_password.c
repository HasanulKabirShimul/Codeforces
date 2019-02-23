#include<stdio.h>
#include<string.h>
int main()
{
    int n,k,i,r=1,count=0;
    char s[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    scanf("%d %d",&n,&k);
    for(i=0; i<n; i++)
    {
        if(i==k)
        {
            i = 0;
        }
        printf("%c",s[i]);
        count++;
        if(count==n)
            break;
    }
    printf("\n");
    return 0;

}

