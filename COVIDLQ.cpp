#include <stdio.h>
int main()
{
    int c;
    scanf("%d",&c);
    while(c--)
    {
        int t;
        scanf("%d",&t);
        int a[t],b[t];
        for(int i=0;i<t;i++)
        {
            scanf("%d",&a[i]);
        }
        int p=0;
         for(int i=0;i<t;i++)
         {
           if(a[i]==1)
           {
               b[p]=i;
               p++;
           }
           
         }
         int f=1;
         
         for(int i=0;i<p-1;i++)
         {
             if(b[i+1]-b[i]<6)
             {
                 f=0;
                 break;
             }
         }
         if(f==1)
         printf("YES\n");
         else printf("NO\n");
        
    }
     return 0;
}
