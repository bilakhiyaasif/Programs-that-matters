#include <stdio.h>
#include <stdlib.h>

int main()
{

    int l,r,k,c=0;
    scanf("%d %d %d",&l,&r,&k);

    for(int i=l;i<=r;i++)
    {
     if(i%k==0)
        {
          // printf("\ni=%d",i);
            c++;
        }
    }
   // printf("\nl=%d r=%d k=%d",l,r,k);
    printf("%d",c);
    return 0;
}
