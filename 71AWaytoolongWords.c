#include<stdio.h>
#include<string.h>
int main(void)
{
    char s[100];
    int n;
    int i,l;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%s",s);
        l=strlen(s);
        if(l>10)
        {
            printf("\n%c%d%c\n",s[0],l-2,s[l-1]);
        }
        else
            printf("\n%s\n",s);
    }

return 0 ;

}

