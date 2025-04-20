#include "mbed.h"
#include <tsi_sensor.h>
#include <Touch_Slider.h>

DigitalOut LedR(LED1);
DigitalOut LedG(LED2);
DigitalOut LedB(LED3);


int main() {

    LedR = 1; // Turn off Red LED
    LedG = 1; // Turn off Green LED
    LedB = 1; // Turn off Blue LED

    float position;
    printf("Test depuis main\r\n");

    while (true) 
    {
        position=lire_slider();

        if(position < 50) {
            LedR = 0; // Turn on Red LED
            LedG = 1; // Turn off Green LED
            LedB = 1; // Turn off Blue LED
        } else if (position < 100) {
            LedR = 1; // Turn off Red LED
            LedG = 0; // Turn on Green LED
            LedB = 1; // Turn off Blue LED
        } else {
            LedR = 1; // Turn off Red LED
            LedG = 1; // Turn off Green LED
            LedB = 0; // Turn on Blue LED
        }
    }
}