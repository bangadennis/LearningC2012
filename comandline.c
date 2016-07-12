# include <stdio.h>
int main (int argc, char * argv[])
{
char *FirstName;
char *SurName;
if(argc != 3)
{ printf("Usage Greetings FirstName LastName\n");
}
else
{ FirstName = argv[1];
SurName = argv[2];
printf("Hello %s %s", FirstName, SurName);
}
return 0;
}
