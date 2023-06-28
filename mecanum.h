#ifndef MECANUM_H
#define MECANUM_H

#include "Arduino.h"

class Mecanum{
  private:
    // Pins:

    // Left front motor:
    int lf1 // Left Front 1.
    int lf2 // Left Front 2.
    int lfe // Left Front Enable.
    
    // Left rear motor:
    int lr1 // Left Rear 1.
    int lr2 // Left Rear 2.
    int lre // Left Rear Enable.

    // Right front motor:
    int rf1 // Right Front 1.
    int rf2 // Right Front 2.
    int rfe // Right Front Enable.

    // Right rear motor:
    int rr1 // Right Rear 1.
    int rr2 // Right Rear 2.
    int rre // Right Rear Enable.
    
    // Motors:
    lFM(int speed); // Left Front Motor.
    lRM(int speed); // Left Rear Motor.
    rFM(int speed); // Right Front Motor.
    rRM(int speed); // Right Rear Motor.
  public:
    // constructor:
   Mecanum(int leftFront1, int leftFront2, int leftRear1, int leftRear2, int rightFront1, int rightFront2, int rightRear1, int rightRear2, int leftFrontEnable, int leftRearEnable, int rightFrontEnable, int rightRearEnable);


};

#endif