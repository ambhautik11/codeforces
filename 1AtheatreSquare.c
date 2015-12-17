#include<stdio.h>
int main(void)
{

    long long int a,m,n,r,c;
    scanf("%lld %lld %lld",&m,&n,&a);

 /*   if((m%a)&&(n%a))
        printf("\n %I64d",(m/a)*(n/a) + (m/a) + (n/a) + 1 );
    else if (m%a)
            printf("\n %I64d",(m/a)*(n/a) + (m/a));
    else if(n%a)
            printf("\n %I64d",(m/a)*(n/a) + (n/a) );
    else
            printf("\n %I64d",(m/a)*(n/a));
            */

    if (m%a)
        r = m/a +1;
    else
        r = m/a;
    if(n%a)
        c =n/a + 1;
    else
        c = n/a;
    printf("\n%I64d",r*c);
    return 0;
}
