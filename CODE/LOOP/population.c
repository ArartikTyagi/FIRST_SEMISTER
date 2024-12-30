#include <stdio.h>

int main() {

    long initial_population = 100000;
    float growth_rate = 0.10; // 10%
    long population = initial_population;
    printf("Year\tPopulation\n");
    for (int year = 1; year <= 10; year++) {
        population += population * growth_rate;
        printf("%d\t%ld\n", year, population);
    }
    return 0;
}