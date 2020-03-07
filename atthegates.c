#include <stdio.h>
/*There is a table in front of you, with N coins placed in a row and numbered 1 through N from left to right. For each coin, you know whether it is initially showing heads or tails. You have to perform exactly K
operations.
In one operation,
you should remove the rightmost
coin present on the table,
and if this coin was showing heads right before it was removed,
then you should also flip all the remaining coins.
(If a coin was showing heads, then after it is flipped,
it is showing tails, and vice versa.)

The code needed to enter the temple
is the number of coins which,
after these K
operations are performed, have not been removed
and are showing heads.
Can you find this number?
The fate of Persia lies in your hands…*/

void main()
{
    int n,i,m;
    printf("number of coins?");
    scanf("%d",&n);
    char cns[n];
    for(i=0;i<n;i++)
    {
        scanf(" %c",&cns[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%c ",cns[i]);
    }
    int k;
    printf("number of operations?");
    scanf("%d",&k);
    for(i=0;i<k;i++)
    {
        cns[n-1]=cns[n-2];
        n=n-1;
        if(cns[n-1]=='H')
            for(m=0;m<n-1;m++)
        {
            if(cns[m]=='T')
            {
                cns[m]='H';
            }
            else if(cns[m]=='H')
            {
                cns[m]='T';
            }

        }
    }
    for(i=0;i<n;i++)
    {
        printf("%c ",cns[i]);
    }

}
