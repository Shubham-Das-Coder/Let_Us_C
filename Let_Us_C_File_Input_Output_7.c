// Writes records to a file ussing structure
#include <stdio.h>
int main()
{
    FILE *fp;
    char another = 'Y';
    struct emp
    {
        char name[40];
        int age;
        float bs;
    };
    struct emp e;

    fp = fopen("EMPLOYEE.DAT", "w");

    if (fp == NULL)
    {
        puts("Cannot open file");
        exit(1);
    }

    while (another == 'Y')
    {
        printf("Enter name, age and basic salary : ");
        scanf("%s%d%f", e.name, &e.age, &e.bs);
        fprintf(fp, "%s%d%f\n", e.name, e.age, e.bs);

        printf("Add another record(Y/N) : ");
        fflush(stdin);
        another = getch();
    }

    fclose(stdin);
    return 0;
}