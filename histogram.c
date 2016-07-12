/*
MUIRURI DENNIS BANGA
P15/1475/2012
BSC. COMPUTERSCIENCE
CHIROMO CAMPUS

A PROGRAM THAT DISPLAYS THE FREQUENCY OF CHARACHERS ENTERED AND ALSO PRINTS A HORIZONTAL HISTOSGRAM REPRESENTING THE
FREQUENCY OF EACH CHARACTER.
*/
#include<stdio.h>
//main function
int main()
{
	int c;
	int acount=0;//COUNTER INCREMENTERS OF EACH CHARACTER
	int bcount=0;
	int ccount=0;
	int dcount=0;
	int ecount=0;
	int fcount=0;
	int gcount=0;
	int hcount=0;
	int icount=0;
	int jcount=0;
	int kcount=0;
	int lcount=0;
	int mcount=0;
	int ncount=0;
	int ocount=0;
	int pcount=0;
	int qcount=0;
	int rcount=0;
	int scount=0;
	int tcount=0;
	int ucount=0;
	int vcount=0;
	int wcount=0;
	int xcount=0;
	int ycount=0;
	int zcount=0;


	int i;

printf("Enter string to Display their frequency of characters in the string and display a horizontal Histogram\n To terminate (ctrl+z)\n");

	while((c=getchar())!=EOF)
	{
		switch(c)
		{
			case 'a':
			case 'A':
					acount++;
					break;

			case'b':
			case 'B':
					bcount++;
					break;
            case'c':
			case 'C':
					ccount++;
					break;
            case'd':
			case 'D':
					dcount++;
					break;
            case'e':
			case 'E':
					ecount++;
					break;
            case'f':
			case 'F':
					fcount++;
					break;

            case'g':
			case 'G':
					gcount++;
					break;

            case'h':
			case 'H':
					hcount++;
					break;
            case'i':
			case 'I':
					icount++;
					break;
            case'j':
			case 'J':
					jcount++;
					break;
            case'k':
			case 'K':
					kcount++;
					break;
            case'l':
			case 'L':
					lcount++;
					break;
            case'm':
			case 'M':
                    mcount++;
					break;
            case'n':
			case 'N':
					ncount++;
					break;
            case'o':
			case 'O':
					ocount++;
					break;
            case 'p':
			case 'P':
					pcount++;
					break;
            case'q':
			case 'Q':
					qcount++;
					break;
            case'r':
			case 'R':
					rcount++;
					break;
            case's':
			case 'S':
					scount++;
					break;

            case't':
			case 'T':
					tcount++;
					break;

            case'u':
			case 'U':
					ucount++;
					break;
            case'v':
			case 'V':
					vcount++;
					break;
            case'w':
			case 'W':
					wcount++;
					break;

            case'x':
			case 'X':
					xcount++;
					break;
            case'y':
			case 'Y':
					ycount++;
					break;

            case'z':
			case 'Z':
					zcount++;
					break;




}



	}
printf("\na (%d)->",acount);
for(i=1;i<=acount;i++)
{

printf("*");
}
printf("\nb (%d)->",bcount);

for(i=1;i<=bcount;i++)
{

printf("*");
}
printf("\nc (%d)->",ccount);
for(i=1;i<=ccount;i++)
{

printf("*");
}
printf("\nd (%d)->",dcount);
for(i=1;i<=dcount;i++)
{

printf("*");
}
printf("\ne (%d)->",ecount);
for(i=1;i<=ecount;i++)
{

printf("*");
}
printf("\nf (%d)->",fcount);
for(i=1;i<=fcount;i++)
{

printf("*");
}
printf("\ng (%d)->",gcount);
for(i=1;i<=gcount;i++)
{

printf("*");
}
printf("\nh (%d)->",hcount);
for(i=1;i<=hcount;i++)
{

printf("*");
}
printf("\ni (%d)->",icount);
for(i=1;i<=icount;i++)
{

printf("*");
}
printf("\nj (%d)->",jcount);
for(i=1;i<=jcount;i++)
{

printf("*");
}
printf("\nk (%d)->",kcount);
for(i=1;i<=kcount;i++)
{

printf("*");
}
printf("\nl (%d)->",lcount);
for(i=1;i<=lcount;i++)
{

printf("*");
}
printf("\nm (%d)->",mcount);
for(i=1;i<=mcount;i++)
{

printf("*");
}
printf("\nn (%d)->",ncount);;
for(i=1;i<=ncount;i++)
{

printf("*");
}
printf("\no (%d)->",ocount);
for(i=1;i<=ocount;i++)
{

printf("*");
}
printf("\np (%d)->",pcount);
for(i=1;i<=pcount;i++)
{

printf("*");
}
printf("\nq (%d)->",qcount);
for(i=1;i<=qcount;i++)
{

printf("*");
}

printf("\nr (%d)->",rcount);
for(i=1;i<=rcount;i++)
{

printf("*");
}
printf("\ns (%d)->",scount);
for(i=1;i<=scount;i++)
{

printf("*");
}
printf("\nt (%d)->",tcount);
for(i=1;i<=tcount;i++)
{

printf("*");
}
printf("\nu (%d)->",ucount);
for(i=1;i<=ucount;i++)
{

printf("*");
}
printf("\nv (%d)->",vcount);
for(i=1;i<=vcount;i++)
{

printf("*");
}
printf("\nw (%d)->",wcount);
for(i=1;i<=wcount;i++)
{

printf("*");
}
printf("\nx (%d)->",xcount);
for(i=1;i<=xcount;i++)
{

printf("*");
}
printf("\ny (%d)->",ycount);
for(i=1;i<=ycount;i++)
{

printf("*");
}
printf("\nz (%d)->",zcount);
for(i=1;i<=zcount;i++)
{

printf("*");
}



return 0;
}
