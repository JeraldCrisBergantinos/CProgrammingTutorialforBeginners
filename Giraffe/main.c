#include <stdio.h>
#include <stdlib.h>

int main()
{
    //printf("There once was a man named George\n");
    //printf("he was 70 years old.\n");
    //printf("He really liked the name George\n");
    //printf("but did not like being 70.\n");

    char characterName[] = "Tom";
    int characterAge = 67;
    printf("There once was a man named %s\n", characterName);
    printf("he was %d years old.\n", characterAge);
    characterAge = 30;
    printf("He really liked the name %s\n", characterName);
    printf("but did not like being %d.\n", characterAge);

    return 0;
}
