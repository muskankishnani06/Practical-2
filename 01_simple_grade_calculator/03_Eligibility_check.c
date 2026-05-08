#include<stdio.h>


int main(){


    int marks;
    char grade;

    printf("enter your marks:-");
    scanf("%d",&marks);

    grade = (marks>=90)?'A':
            (marks>=80)?'B':
            (marks>=70)?'C':
            (marks>=60)?'D': 'F';

            printf("your grade is %c",grade);


            switch (grade)
            {
            case 'A':
                printf("\n Excellent work!");
                break;

            case 'B':
                printf("\n Well done!");
                break;

            case 'C':
                printf("\n Good job.");
                break;

            case 'D':
                printf("\n You passed, but you could do better.");
                break;

            case 'E':
                printf("\n You passed, but you could do better.");
                break; 

            case 'F':
                printf("\n sorry , you failed.");
                break;
            
            }

           if(grade>='A' && grade<='D'){

        printf("\nCongratulations! you are eligible for next level");
    }else{

        printf("\nPlease try again next time");
    }

    return 0;
    

}