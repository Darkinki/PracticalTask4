//
// Created by Darkinki on 31.10.2023.
//

#ifndef PRACTICALTASK4_MAXLENGHTTEST_H
#define PRACTICALTASK4_MAXLENGHTTEST_H
int seriesCounting(char *bytes, int size){
    int counter = 1;
    for (int i = 0; i < size; i++) {
        if (bytes[i] == 0x00 || bytes[i] == 0x11) {
                counter++;
        } else {
            counter = 1;
        }
    }
    return counter;
}
void seriesTest(int counter, double max_series){

    if (counter <= max_series) {
        printf("The sequence is random\n");
    } else {
        printf("The sequence is not random\n");
    }

}
#endif //PRACTICALTASK4_MAXLENGHTTEST_H
