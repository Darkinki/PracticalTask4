//
// Created by Darkinki on 30.10.2023.
//

#ifndef PRACTICALTASK4_MONOBITE_H
#define PRACTICALTASK4_MONOBITE_H
#include <stdio.h>
void checkRandomness(int count, int size, double lower_bound, double upper_bound) {
    printf("Number of 1: %d\n", count);
    printf("Number of 0: %d\n", size - count);

    if (count > lower_bound && count < upper_bound) {
        printf("The sequence is random\n");
    } else {
        printf("The sequence is not random\n");
    }
}
void bitization(char *bytes, int size) {
    int i;
    for (i = 0; i < size; i++) {
        bytes[i] = rand() % 2;
    }
}

int counting(char *bytes, int size) {
    int i, count = 0;
    for (i = 0; i < size; i++) {
        if (bytes[i] == 1) {
            count++;
        }
    }
    return count;
}



#endif //PRACTICALTASK4_MONOBITE_H
