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

    float position = 1.0f;

    printf("Test depuis main\r\n");

    while (true) 
    {
        position=lire_slider();
        //printf("Position : %d.%02d\r\n", (int)position, (int)(position * 100) % 100);
        
        ThisThread::sleep_for(1000ms);
        

        if(position < 0.5) {
            LedR = 0; // Turn on Red LED
            LedG = 1; // Turn off Green LED
            LedB = 1; // Turn off Blue LED
        } else if (position <= 0.99) {
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