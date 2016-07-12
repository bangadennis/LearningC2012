# include <stdio.h>
int array[5]= {1,2,3,4,5};
int SIZE = 5;
int sum (int * s, int size);
int display (int * s, int size);
void SumDisplay(int (*)(int * s, int size));
int main()
{ int choice = 0;
int t = 0;
printf("choose between summing(0) and displaying(1) array: ");
scanf("%d", &choice);
if (choice == 0) {SumDisplay(sum);}
else {SumDisplay(display);}
return 0;
}
int sum (int * s, int size)
{ int i,total = 0;
for (i = 0; i< size; i++)
{
total += s[i];
}
return total;
}
int display (int * s, int size)
{ int i = 0;
printf("\n\nArray Displayed\n");
for (i = 0; i< size; i++)
{
printf("%d", s[i]);
}
return 0;
}
void SumDisplay (int (* str)(int * s, int size))
{
int j;
j = (*str)(array,SIZE);
printf("\n\nresult returned by function is %d \n\n\n", j);
}

