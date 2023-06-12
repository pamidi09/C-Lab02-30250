#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Pamidi\n");
    printf("Sri Palee College\n");
    printf("23.1 batch\n");
    printf("19 years old\n");

    printf("Pamidi\n"
           "23.1 batch\n"
           "19 years old\n");

    printf("*\n");
    printf("**\n");
    printf("***\n");
    printf("****\n");
    printf("*****\n");


    printf("*\n"
           "**\n"
           "***\n"
           "****\n"
           "*****\n");

    printf("*\t"
           "**\t"
           "***\t"
           "****\t"
           "*****\t");

    printf("*\a"
           "**\a"
           "***\a"
           "****\a"
           "*****\n");
    // A comment
    // for describe codes to programmer

    //declaring values
    int num_1 ,b_year  ;
    //input the number
    printf("Enter a Number:");
    scanf("%d" , &num_1);
    //output
    printf("The number is %d \n" , num_1);

    char name;
    //input name
    printf("Enter your name:\n");
    scanf("%c" , &name);
    printf("Your name is %c \n" , name);
    //input birth year
    printf("Enter your Birth year:\n");
    scanf("&d" , &b_year );
    printf("Your Birth Year is %d \n" , b_year);














    return 0;
}
