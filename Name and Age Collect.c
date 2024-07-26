#include<stdio.h>
int main()
{
    int total_person, loop;
    scanf("%d", &total_person);
    char name[total_person][50];
    int age[total_person];
    for(loop=0; loop<total_person; loop++)
    {
        char bypass = getchar();
        gets(name[loop]);
        scanf("%d", &age[loop]);
    }
    for(loop=0; loop<total_person; loop++)
    {
        printf("\nPerson %d\n", loop+1);
        printf("Name : %s\n", name[loop]);
        printf("Age  : %d\n", age[loop]);
    }
    return 0;
}
