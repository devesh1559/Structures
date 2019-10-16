#include <stdio.h>
#include <stdlib.h>
struct student
{
    char name[50];
    char div[5];
    long long int prn;
};
int main()
{
	struct student s[2];
    int i;
    printf("Enter information of students:\n");
    for(i=0; i<3; i++)
    {
        printf("Enter PRN\n");
        scanf("%llu",&s[i].prn);
        printf("Enter name\n");
        scanf("%s",&s[i].name);
        printf("Enter div\n");
        scanf("%s",&s[i].div);
        printf("\n");
    }
    printf("Displaying Information:\n\n");
    for(i=0; i<3; i++)
    {
        printf("\PRN: %d\n",s[i].prn);
        printf("Name: ");
        puts(s[i].name);
        printf("DIV: ");
        puts(s[i].div);
        printf("\n");
    }
    return 0;
}

