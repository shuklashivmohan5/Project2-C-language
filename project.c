#include <stdio.h>

int main()
{
    float Subject1,Subject2,Subject3,Total,Avg;
    char grade;
    printf("Enter all three subject marks:- ");
    scanf("%f %f %f",&Subject1,&Subject2,&Subject3);

    Total = Subject1+Subject2+Subject3;
    Avg = Total/3;

    grade = Avg>=90?'A': Avg>=80?'B': Avg>=70?'C':Avg>=60?'D':'F';

    switch(grade)
    {
        case 'A':
        printf("\nYour grade is %c. Excellent work",grade);
        break;
        case 'B':
        printf("\nYour grade is %c. Well done",grade);
        break;
        case 'C':
        printf("\nYour grade is %c. Good job",grade);
        break;
        case 'D':
        printf("\nYour grade is %c. You passed but you could do better",grade);
        break;
        default:
        printf("\nYour grade is %c. Sorry, you failed",grade);
        break;
    }

    if(grade == 'A' || grade == 'B' || grade == 'C' || grade == 'D')
    {
        printf("\nCongratulations! You are eligible for the next level, your grade is %c",grade);
    }
    else
    {
        printf("\nPlease try again next time your grade is %c",grade);
    }
}