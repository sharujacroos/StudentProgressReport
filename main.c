#include <stdio.h>
#include <stdlib.h>


int main()
{
    printf("====================== Welcome to Progress Report System =======================\n");
    int subject, student;
    int marks[1000][1000],total1[1000];
    float average[1000];
    printf("\nHow many student in your class : ");
    scanf("%d",&student);
    printf("\nHow many subjects in your class : ");
    scanf("%d",&subject);
    char names[student][20];

    for(int i = 0;i<student;i++)
    {
        int total = 0;
        float avg = 0;
        printf("\nEnter the student name : ");
        scanf("%s",&names[i]);
        for(int j = 0;j<subject;j++)
        {
            printf("\tEnter the marks : ");
            scanf("%d",&marks[i][j]);
            total = total+ marks[i][j];
            avg = (float)total/subject;
        }
        total1[i] = total;
        average[i] = avg;

    }
     printf("\n\n****************************** Final Report ***********************************\n");

    for(int m = 0;m<student;m++)
    {
        printf("\n\n\tProgres Report for %s\n", names[m]);
        for(int n = 0;n<subject;n++)
        {
            printf("\n\t\tsubject %d  : %d",n+1,marks[m][n]);
        }
        printf("\n\t\tTotal is   : %d",total1[m]);
        printf("\n\t\tAverage is : %0.3f\n",average[m]);
        if(average[m] <35)
        {
            printf("\n\t\t%s is fail",names[m]);
        }
        else
        {
            printf("\n\t\t%s is pass",names[m]);
        }
        printf("\n\n================================================================================");

    }


    return 0;
}
