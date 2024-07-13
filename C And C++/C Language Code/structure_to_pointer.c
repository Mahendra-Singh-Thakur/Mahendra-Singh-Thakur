#include <stdio.h>

struct info
{
    char name[100];
    int roll;
    float cgpa;
};
int main()
{
    struct info s1;
    struct info *sp;
    sp = &s1;
    // scanf("%[^\n]", sp->name);
    scanf("%[^\n]", s1.name);
    scanf("%d", &s1.roll);
    scanf("%f", &s1.cgpa);
    printf("%s\n", sp->name);
    printf("%d\n", sp->roll);
    printf("%f\n", sp->cgpa);

    printf("%s\n", (*sp).name);
    printf("%d\n", (*sp).roll);
    printf("%f\n", (*sp).cgpa);
    return 0;
}