#include<stdio.h>
int main()
{
	char text[1000];
	int Acount,Bcount;
	int CA, CB;
	printf("Enter a line of text\n");
	getchar(text);

	while(text!='\0')
	{
		switch(text)
		{
			case 'a':
			case 'A':
					Acount++;

					/*for(i=0;i<=count;i++)
					{
						printf("*");
					}
					count=0;*/
					break;

			case'b':
			case 'B':
					Bcount++;
					/*for(i=0;i<=count;i++)
					{
						printf("*");
					}
					count=0;*/
					break;
	}
	for(CA=0;CA<Acount;CA++)
	{
		printf("\nA **");
	}
	for(CB=0;CB<Acount;CB++)
	{
		printf("\nB **");
	}
	return 0;
}