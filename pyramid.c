
#include<stdio.h>

int main()
{

    int row;
    int col;
    int k,n;
    printf("Enter the value of the rows\n");
    scanf("%d", &n);
int temp=n;

    for(row=1; row<=n;row++)

    {

        for(col=1;col<temp;col++)

            printf(" ");
        temp--;

        for(k=1; k<=row*2-1; k++)


    printf("*");

        printf("\n");


    }


    return 0;
}
