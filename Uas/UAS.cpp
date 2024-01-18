#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void activateMotor(int speed) {
    printf("Motor berputar dengan kecepatan %d rpm\n", speed);
}

void controlValve(int isOpen) {
    if (isOpen) {
        printf("Klep terbuka\n");
    } else {
        printf("Klep tertutup\n");
    }
}

int readTurbidity() {
    return 0;
}

void fillWaterTank(int fillTime) {
    controlValve(1); 
    sleep(fillTime * 60);
}

void runWashingProcess(int washTime, int drainTime, int dryTime) {
   
}

int main() {
    int turbidityLevels[] = {6, 8, 12, 18, 24, 30, 36, 42, 49};

    int washTime = 0;
    int drainTime = 2;
    int dryTime = 3;

    printf("Tombol Start ditekan\n");

    fillWaterTank(2);

    runWashingProcess(washTime, drainTime, dryTime);

    printf("Proses mencuci selesai\n");

    return 0;
}

