#include<stdio.h>
void main()
{
    printf("Enter the no of yrs: ");
    int yrs,x,y=0;
    scanf("%d",&yrs);
    printf("Enter the fixed deposit amount: ");
    scanf("%d",&x);
    for(int i=0;i<yrs;i++)
    {
        y=(x/100)*7.5;
        x=x+y;
    }
    printf("The amount after %d yrs will be %d",yrs,x);
}