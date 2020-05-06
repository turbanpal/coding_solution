#include <stdio.h>
int cmpfunc (const void * a, const void * b)
 {
   return ( *(int*)b - *(int*)a );
}
int main(void) {
 int f;
scanf("%d",&f);
while(f--)
{
    long  int h;
    scanf("%ld",&h);
    long long int q[h];
    for(int i=0;i<h;i++)
     scanf("%lld",&q[i]);
    long long int i,sum=0,t=0;
    qsort(q, h, sizeof(long long int), cmpfunc);
    for(i=0;i<h;i++)
    {
       t=q[i]-i;
        if (t<0)
            t=0;
        sum=sum+t;
     }
    printf("%ld\n",sum%1000000007);
}
  return 0;
}
