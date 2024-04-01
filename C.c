//Q18)
#include <stdio.h>
void f(char**);
int main()
{
    char *argv[] = { "ab", "cd", "ef", "gh", "ij", "kl" };
    f(argv);
    return 0;
}
void f(char **p)
{
    char *t;
    t = (p += sizeof(int))[-1];
    printf("%s\n", t);
    printf("Hello GITHUB, learning how to make pull request!!"); 
    //Hello GITHUB
}
// ab cd ef gh