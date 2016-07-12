/*MUIRURI DENNIS BANGA
P15/1475/2012
SCHOOL OF COMPUTING AND INFORMATICS
BSC. COMPUTER SCIENCE
UNIVERSITY OF NAIROBI

PROGRAM THAT SEARCHES A WORD IN DICTONARY FILE WHEN FOUND RETURNS YES,  WHEN NOT FOUND
ADDS THE SEARCH WORD IN THE DICTONARY FILE
*/
#include<stdio.h>

int main()//MAIN FUNCTION
{
FILE *sptr;

char name[20];
int i=0;
for(i=0;i<=4;i++)
{
printf("Enter A name to search\n");
scanf("%s", name);
char word[20];
int c;
sptr=fopen("Diction.txt","r+");

if(sptr==NULL)
	{
	printf("file didn't open\n");
	}
		else
		{

			while(!feof(sptr))
			{   fscanf(sptr,"%s",word);
				if(strcmp(word,name)==0)
				{

				    printf("YES, RECORD FOUND\n");
				    return 0;
                }


			}
printf("NO RECORD\n");
printf("word saved\n");
fprintf(sptr,"%s\n",name);

		fclose(sptr);
		}
}


	return 0;
}
