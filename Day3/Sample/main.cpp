#include <stdio.h>
#include "electricfan.h"

int main() {

    ElectricFan fan;

    fan.pushSwitch();   // Switch on

    printf( "Electric Fan State: %s", fan.getStateString() );

    return 0;
}

