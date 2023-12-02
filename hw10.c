#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

typedef struct cities
{
    char name[30];
    char country[30];
    int population;
} Cities;

int main(void)
{
    Cities city1, city2, city3;
    printf("Input three cities:\n");

    printf("Name> "); scanf("%s", city1.name);
    printf("Country> "); scanf("%s", city1.country);
    printf("Population> "); scanf("%d", &city1.population);

    printf("Name> "); scanf("%s", city2.name);
    printf("Country> "); scanf("%s", city2.country);
    printf("Population> "); scanf("%d", &city2.population);

    printf("Name> "); scanf("%s", city3.name);
    printf("Country> "); scanf("%s", city3.country);
    printf("Population> "); scanf("%d", &city3.population);

    printf("Printing the three cities:\n");
    printf("%s in %s with a population of %d people\n", city1.name, city1.country, city1.population);
    printf("%s in %s with a population of %d people\n", city2.name, city2.country, city2.population);
    printf("%s in %s with a population of %d people\n", city3.name, city3.country, city3.population);

    return 0;
}