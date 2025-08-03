#include<stdio.h>
#include<string.h>
typedef struct student
{
    int rollno;
    char name[20];
    char department[50];
    char course[50];
    int yearofjoining;

}student;
int main(){
    int n;
    printf("Enter total no. of students : ");
    scanf("%d",&n);
student st[n];

for (int i = 0; i <n; i++)
{
   printf("Enter student rollno. : ");
   scanf("%d",&st[i].rollno);
   getchar();
   printf("Enter student name : ");
   gets(st[i].name);
   printf("Enter student's department : ");
   gets(st[i].department);
   printf("Enter student's course : ");
   gets(st[i].course);
   printf("Enter year of joining : ");
   scanf("%d",&st[i].yearofjoining);
   getchar();
   printf("\n");
} int year;
    printf("Enter particular year : ");
    scanf("%d",&year);
for (int i = 0; i <n; i++)
{   
    if (st[i].yearofjoining==year)
        printf("%s",st[i].name);
}
int roll;
    printf("\nEnter particular rollno. : ");
    scanf("%d",&roll);
for (int i = 0; i <n; i++)
{   
    if (st[i].rollno==roll)
       { printf("Details of the student are : \n");
        printf("%s\n",st[i].name);
         printf("%s\n",st[i].course);
         printf("%s\n",st[i].department);
         printf("%d\n",st[i].yearofjoining);
       }


return 0;
}
}