
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<time.h>
int main()
{
    int i;
    int j;
    int K;
    int hold;
    int data[20];
    char student[10];

    FILE *fptr;
    srand(time(NULL));
    fptr=fopen("data.txt", "w");
    if(fptr==NULL)
    {

        printf("file couldn't be opened\n");


    }
    else
    {   printf("enter the names of the students\n");
        for(i=0;i<20;i++)
        {
            data[i]=6+rand()%21;

        }

        for(K=1;K<20;K++)
            {
            for(i=0;i<20-1;i++)
            {
                    if(data[i]>data[i+1])
                    {
                    hold=data[i];
                    data[i]=data[i+1];
                    data[i+1]=hold;

                    }
                }
            }

            for(i=0;i<20;i++)
            { scanf("%s",student );
            printf("%d\n", data[i]);
            fprintf(fptr, "%s\t%d\n", student,data[i]);
            }


        fclose(fptr);
    }

return 0;
}
