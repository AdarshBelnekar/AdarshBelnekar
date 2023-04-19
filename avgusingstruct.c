#include<stdio.h>
struct Student
{
    int roll_no;
    char name[25];
    int marks[5];

}s1;

void main()
{
    printf("Enter your name\n");
    scanf("%s",&s1.name[25]);
    printf("Enter your roll no\n");
    scanf("%d",&s1.roll_no);
    printf("Enter marks of 5 Subject\n");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&s1.marks[i]);
    }
     avg(s1.marks);    
}
void avg(int a[])
{
    int i ,sum=0;
    for(i=0;i<5;i++)
    {
        sum = sum + a[i];
    }
    printf("Average is %d",sum/5);
}