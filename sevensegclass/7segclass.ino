#include "Sevclass.h"

int my7pins[7]{2, 3, 4, 5, 6, 7, 8};

int mypins[7]{9, 10, 11, 12, 13, 14, 15};


SevenDisplay my7(my7pins);
SevenDisplay mydisplay(mypins);

void setup() {
    my7.init();
    mydisplay.init(); // call initial
}

void loop() {
    for (int i = 0; i < 10; ++i) { // fr loop for all numbers increesing
        my7.display(i);
        mydisplay.display(i);
        delay(1000); // delay 1sec
    }
}
