#include <stdio.h>
#include <math.h>
#include <time.h>

int main() {
    clock_t first = clock();
    //Base case
    int n = 6;
    double in = 3;
    double out = sqrt(12);

    //changed upper bound to 10000 to get convergence
    for (int n = 6; n <= 100; n *= 2)
    {
        clock_t start = clock();
        if (n != 6)
        {
            out = 2/((1/in)+(1/out));
            in = sqrt(in * out);
        }
        clock_t end = clock();
        int time = (end - start);
        printf("Number of sides: %d \t%lf < PI < %lf\tThis took %d clock ticks.\n", n, in, out, time);
    }
    clock_t last = clock();
    int totalTime = last - first;
    printf("The entire program took %d clock ticks.", totalTime);
    return 0;
}