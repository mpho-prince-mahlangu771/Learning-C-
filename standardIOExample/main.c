#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ch1, ch2;
    /*
    * SOME OBSERVATIONS: since i've declared on two variables, if a user enters more than two-
    *characters, the program considers only the first and second variables ignoring the rest
    *EXAMPLES: if user enters abcd , only a and b are considered while c and d are discarded
    *ADDITIONAL: if a user enters numeric characters such as 12, the program represents 1 as-
    *ascii code 49 and 2 as ascii code 50
    `*/
    printf("Enter two characters together\n");

    //both getc(stdin) and getchar() read in only one character each and then closes the stream
    ch1 = getc(stdin);

    ch2 = getchar();

    //printing the numeric representation of ch1 an d ch2
    printf("the first character is: %d \n The second character is: %d \n", ch1, ch2);

    //printing the characters in ther original form
    printf("the first character is: %c \n The second character is: %c \n", ch1, ch2);
    return 0;
}
