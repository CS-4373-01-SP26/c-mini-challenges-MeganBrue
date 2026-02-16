#include <stdio.h>
#include <math.h>
#include <time.h>

int main() {
    int n = 1000000000;
    double result;
    int end;
    int start = clock();
    for (int i = 0; i < n; i++)
    {
        result = 200.0 * 300.0;
    }
    end = clock();
    printf("Multiplication:\t%d clock ticks.\n", (end - start));
    start = clock();
    for (int i = 0; i < n; i++)
    {
        result = 200.0 / 300.0;
    }
    end = clock();
    printf("Division:\t%d clock ticks.\n", (end - start));
    start = clock();
    for (int i = 0; i < n; i++)
    {
        result = sqrt(200.0);
    }
    end = clock();
    printf("Square Root:\t%d clock ticks.\n", (end - start));
    start = clock();
    for (int i = 0; i < n; i++)
    {
        result = sin(200.0);
    }
    end = clock();
    printf("Sine:\t\t%d clock ticks.\n", (end - start));
    return 0;
}