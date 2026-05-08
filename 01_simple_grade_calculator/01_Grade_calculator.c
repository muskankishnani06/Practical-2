#include<stdio.h>


int main(){


    int marks;
    char grade;

    printf("enter your marks:-");
    scanf("%d",&marks);

    grade = (marks>=90)?'A':
            (marks>=80)?'B':
            (marks>=70)?'c':
            (marks>=60)?'D': 'F';

            printf("your grade is %c",grade);

    return 0;
}