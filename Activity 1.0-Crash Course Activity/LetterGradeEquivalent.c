#include<stdio.h>
int main()
{
    int grade;
    printf("Enter grade: ");
    scanf("%d",&grade);
    if (grade > 100 || grade <= 0)
    {
        printf("Invalid input. Try again.");
    }
    else if(grade <=100 && grade > 91){
        printf("Your letter grade is A.");
    }
    else if(grade <= 91 && grade > 83){
        printf("Your letter grade is A-.");
    }
    else if(grade <= 83 && grade > 75){
        printf("Your letter grade is B.");
    }
    else if(grade <=75 && grade > 67){
        printf("Your letter grade B-.");
    }
    else if(grade <=67 && grade > 59){
        printf("Your letter grade is D.");
    }
    else{
        printf("Your letter grade is F.");
    }
    return 0;
}
