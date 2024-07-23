#include <stdio.h>

int main()
{
    int t,count=0,p=0,x=0;
    scanf("%d",&t);
    for(int i=0; i<t; i++)
    {
        int s,r;
        scanf("%d %d",&s, &r);
        int a[s],z=r;

        for(int j=0; j<s; j++)
        {
            scanf("%d",&a[j]);
        }
        while(x<r)
        {
            for(int j=0; j<s; j++)
            {
                if(a[j]<=r)
                    count++;
                    r=r-a[j];
            }
            for(int h=0;h<s;h++)
                a[h]=a[h]+1;
            for(int t=0; t<s; t++)
            {
                if(a[t]>r)
                    p++;
                if(p==sizeof(a[s]))
                    x=a[t];
            }
            r=z;
        }
        printf("%d",count);
        count=0;
        x=0;

    }
}
