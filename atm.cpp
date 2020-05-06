#include<stdio.h>
int main()
{
    int x;float y,z;
    scanf("%d",&x);
    scanf("%f",&y);
    if((x+0.5>y)||(x%5!=0))
    printf("%.2f\n",y);
    else
    {
     z=((y-x)-0.50);
     printf("%.2f\n",z);
    }
    return 0;
}
