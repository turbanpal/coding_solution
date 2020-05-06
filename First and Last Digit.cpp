#include<stdio.h>
int main()
{ int t,i,d;
  long a,w=0,c=0;
  scanf("%d",&t);
  while(t--)
  {   long s=0;
   scanf("%ld",&a);
   w=a%10;
   while(a!=0){
    d=a%10;
    s=s*10+d;
    a=a/10;
   }
   c=s%10;   
   printf("%ld\n",w+c);
  }
}

