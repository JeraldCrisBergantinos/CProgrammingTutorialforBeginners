#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("My favorite %s is %d\n", "number", 500);
    printf("My favorite %s is %f\n", "number", 500.33847832);
    int favNum = 90;
    char myChar = 'i';
    printf("My favorite %c is %d\n", myChar, favNum);
    printf("My favorite %c is %f\n", myChar, favNum);

    return 0;
}
