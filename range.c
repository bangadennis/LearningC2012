#include<stdio.h>
double calc(int x, int y);

int main()
{
int x=2;
int y;
printf("enter the value of y\n");
scanf("%d",&y);
double r;
while(y!=EOF)
{


r=calc(x, y);
printf("%f",r);
}

}
double calc(int x, int y)
{
    if(y<=0)
    {
        return 1;
    }
    else
    {
        return (pow(x, y))+calc(x, (y-1));
    }


}
