#include "electricfan.h"

ElectricFan::ElectricFan() : bPower( false ) {
}

const char* getStateString() {
    if ( bPower == true )
        return "Power On.";
    return "Power off";
}

void ElectricFan::pushSwitch() {
    bPower = !bPower;
}

