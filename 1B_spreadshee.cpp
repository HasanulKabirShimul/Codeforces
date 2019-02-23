#include<iostream>
#include<string.h>
#include<stdbool.h>
#include<stdlib.h>
using namespace std;
int T,i,len,row,a,b,last=0,cnt=0,j=0,k=0,c;
int main()
{
    char string[100];
    char row[100];
    char column[100];
    cin>>T;
    while(T--)
    {
        cin>>string;
        len = strlen(string);
        i =0;
        if(string[0]=='R')
        {
            for(i=0;i<len;i++)
            {
                if(string[i]>='A'&& string[i]<='Z')
                {
                    string[i] = string[i]-64;
                }
            }
                for(i=1;i<len;i++)
                {
                    if(isdigit(string[i]))
                    {
                            row[k++] = string[i];
                            cnt = cnt + i;

                    }

                    else
                        break;
                }
                for(k=0;k<2;k++)
                {
                    printf("%c",row[k]);
                }
                 printf("\n");
                for(i=cnt+1;i<len;i++)
                {

                            column[c++] = string[i];

                }
                for(k=0;k<c;k++)
                {
                    printf("%c",column[k]);
                }
                printf("\n");
                for(i=0;i<c;i++)
                {
                    column[i] = column[i]-'0';
                }
                for(k=0;k<c;k++)
                {
                    printf("%d",column[k]);
                }
                printf("\n");







        }

    }

}
