#include <stdlib.h>
#include <time.h>
#include "monoBite.h"
#include "maxLenghtTest.h"

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

    return 0;
}