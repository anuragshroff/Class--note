/* Q1. Accept your name and print "Welcome, <your name>". */
#include <stdio.h>

int main(void)
{
    char name[100];
    int i;
    printf("Enter your name: ");
    if (fgets(name, sizeof name, stdin) == NULL) return 1;
    for (i = 0; name[i] != '\0'; i++)      /* drop the newline fgets keeps */
        if (name[i] == '\n') { name[i] = '\0'; break; }
    printf("Welcome, %s\n", name);
    return 0;
}
