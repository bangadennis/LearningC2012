#include<stdio.h>

int main()
{

FILE *sptr;
char * dictionary[20]={"Honey","sweet","pawpaw","pineapple","ngina","kenyatta"};
char * dictionary2[20];

char name[20];
int i,j=0;
printf("Enter A name to search\n");
scanf("%s", name);
i=0;

sptr=fopen("Diction.txt","w");
if(sptr==NULL)
	{
	printf("file didn't open\n");
	}
		else
		{

			while(i<1000)
			{
				if((dictionary[i]==NULL)&&((strcmp(dictionary[i],name)==0)))
				{
					printf(" %d...Yes\n",i);
				}
				if(dictionary[i]==NULL&&(strcmp(dictionary[i],name))!=0)
				{
					printf("%d...No\n",i);
					fputs(dictionary[i], sptr);
					dictionary2[i]=name;

				}

				i++;

			}

		for(j=0;j<10;j++)
		{
			printf("%s",dictionary2[j]);
		}	fclose(sptr);
		}


	return 0;

}
