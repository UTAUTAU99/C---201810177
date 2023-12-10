#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#define MAX_STRING_SIZE 100

typedef struct cities
{
    char name[MAX_STRING_SIZE];
    char country[MAX_STRING_SIZE];
    int population;
} Cities;

int main(void)
{
    Cities city_list[3];
    int i;
    printf("Input three cities:\n");
    for(i=0; i<3; i++)
    {
        printf("Name> ");
        fgets(city_list[i].name, MAX_STRING_SIZE, stdin);

        printf("Country> ");
        fgets(city_list[i].country, MAX_STRING_SIZE, stdin);

        printf("Population> ");
        scanf("%d", &(city_list[i].population));

        while(getchar() != '\n');
    }
    printf("\n");

    printf("Printing the three cities:\n");
    for(i=0; i<3; i++)
    {
        city_list[i].name[strlen(city_list[i].name)-1]=0;
        city_list[i].country[strlen(city_list[i].country)-1]=0;
        printf("%d. %s in %s with population of %d people \n", i+1, city_list[i].name, city_list[i].country, city_list[i].population);
    }

    return 0;
}