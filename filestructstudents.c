#include<stdio.h>
#define num 5;


typedef struct{

char name[15];
float assign1;
float assign2;
float assign3;
float assign4;
float assign5;
float assign6;
float average;


}student;

void averager(student school[]);
void examiner(student school[]);

void beststudent(student school[]);



int main()
{

    FILE *studentptr;
    student school[20];
    int i;
studentptr=fopen("student.txt","w");
if(studentptr==NULL)
{
    printf("file couldn't be opened\n");
    return 0;
}
 else{
printf("Enter the name and then the marks for the six assignment\n");
 for(i=0;i<5;i++)
 {
    scanf("%s", school[i].name);
    scanf("%f", &school[i].assign1);
    scanf("%f", &school[i].assign2);
    scanf("%f", &school[i].assign3);
    scanf("%f", &school[i].assign4);
    scanf("%f", &school[i].assign5);
    scanf("%f", &school[i].assign6);

 }

averager(school);
fprintf(studentptr,"%s%9s%9s%9s%9s%9s%9s%9s\n\n", "NAME", "ASSIGN1","ASSIGN2","ASSIGN3", "ASSIGN4","ASSIGN5", "ASSIGN6", "AVERAGE");
 for(i=0;i<5;i++)
 {

  fprintf(studentptr,"%s%6.2f%8.2f%8.2f%8.2f%8.2f%8.2f%8.2f\n",school[i].name,school[i].assign1,school[i].assign2,school[i].assign3,school[i].assign4,school[i].assign5,school[i].assign6, school[i].average);

 }
examiner(school);
beststudent(school);
 }

return 0;

}
void averager(student school[])
{
    float total;
    float averagestudent;
    int j;
    for(j=0;j<5;j++)
    {
        total=school[j].assign1+school[j].assign2+school[j].assign3+school[j].assign4+school[j].assign5+school[j].assign6;

        averagestudent=(total/6);
        averagestudent=averagestudent*0.5;

        school[j].average=averagestudent;
    }
}

void examiner(student school[])
{
    FILE *sptr;
    int k;
    int studentcount=0;
    int passcount=0;
    int failcount=0;
    float totalaverage=0;
    float classaverage=0;
    sptr=fopen("student.txt","a");
    if(sptr==NULL)
    {
        printf("file couldn't be opened\n");
    }
    else{
    for(k=0;k<5;k++)
    {

      if(school[k].average>20)
      {
        passcount++;
    }

      else
      {
        failcount++;


    }
    totalaverage=totalaverage+school[k].average;
    studentcount++;
    }
classaverage=(totalaverage/studentcount);

    fprintf(sptr,"No of students who passed=%d\n", passcount);
    fprintf(sptr,"No of students who failed=%d\n", failcount);
    fprintf(sptr,"The class Average is=%.2f\n", classaverage);

    }

}

void beststudent(student school[])
{   FILE *stptr;
    int l;
    int position=0;
    float maximum=0;
stptr=fopen("student.txt","a");
if(stptr==NULL)
{
    printf("file couldn't open\n");
}
else{
    for(l=0;l<5;l++)
    {

      if(school[l].average>maximum)
      {
        maximum=school[l].average;

      }
      if(school[l].average==maximum)
      {
         position=l;
      }

    }

   fprintf(stptr,"The Best student is***%s***\nhaving a total average of%.2f\n", school[position].name,maximum);

}

}


