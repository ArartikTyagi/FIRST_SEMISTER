#include <stdio.h>
#include <math.h>
#define MAX_RAMANUJAN 100
#define MAX_REPRESENTATIONS 5
int find_ramanujan_numbers(int numbers[], int reps_a[][MAX_REPRESENTATIONS], int reps_b[][MAX_REPRESENTATIONS], int rep_counts[], int limit) 
{
    int count = 0;

    for (int n = 1; n <= limit && count < MAX_RAMANUJAN; n++) 
    {
        int rep_count = 0;

        for (int a = 1; a <= cbrt(n) && rep_count < MAX_REPRESENTATIONS; a++) 
        {
            for (int b = a + 1; b <= cbrt(n) && rep_count < MAX_REPRESENTATIONS; b++) 
            {
                if (a * a * a + b * b * b == n) 
                {
                    reps_a[count][rep_count] = a;
                    reps_b[count][rep_count] = b;
                    rep_count++;
                }
            }
        }

        if (rep_count >= 2) 
        {
            numbers[count] = n;
            rep_counts[count] = rep_count;
            count++;
        }
    }

    return count;
}

void print_ramanujan_numbers(int numbers[], int reps_a[][MAX_REPRESENTATIONS], int reps_b[][MAX_REPRESENTATIONS], int rep_counts[], int count) 
{
    for (int i = 0; i < count; i++) 
    {
        printf("\nRamanujan Number: %d\n", numbers[i]);
        for (int j = 0; j < rep_counts[i]; j++) 
        {
            int a = reps_a[i][j];
            int b = reps_b[i][j];
            printf("  Representation %d: %d^3 + %d^3 = %d + %d = %d\n", 
                   j + 1, a, b, a * a * a, b * b * b, numbers[i]);
        }
    }
}

int main() 
{
    int limit = 20000;  // Increased limit to find more Ramanujan numbers
    int numbers[MAX_RAMANUJAN];
    int reps_a[MAX_RAMANUJAN][MAX_REPRESENTATIONS];
    int reps_b[MAX_RAMANUJAN][MAX_REPRESENTATIONS];
    int rep_counts[MAX_RAMANUJAN];

    printf("Ramanujan Numbers up to %d:\n", limit);
    int count = find_ramanujan_numbers(numbers, reps_a, reps_b, rep_counts, limit);
    print_ramanujan_numbers(numbers, reps_a, reps_b, rep_counts, count);

    return 0;
}