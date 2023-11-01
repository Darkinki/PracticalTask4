#include <stdlib.h>
#include <time.h>
#include "monoBite.h"
#include "maxLenghtTest.h"
#include <math.h>

#define capacity 20000


int main() {
    char bytes[capacity];
    double lower_bound = 9654, upper_bound = 10346, max_series = 36;
    srand(time(NULL));

    bitization(bytes, capacity);

    int count = counting(bytes, capacity);

    checkRandomness(count, capacity, lower_bound, upper_bound);
//
    int counter = seriesCounting(bytes, capacity);
    printf("counter of series is %d \n", counter);

    seriesTest(counter, max_series);
//

    int Y = 100;
    int k = 5;
    int m = 4;
    int ni[5] = {10, 15, 20, 25, 30};
    double X3 = 0;
    double sum_ni_squared = 0;

    for (int i = 0; i < k; i++) {
        sum_ni_squared += pow(ni[i], 2);
    }

    X3 = (2 * m / k) * (sum_ni_squared - k);

    if (X3 > 1.03 && X3 < 57.4) {
        printf("Послiдовнiсть вважається випадковою.\n");
    } else {
        printf("Послiдовнiсть не випадкова.\n");
    }

    return 0;
}