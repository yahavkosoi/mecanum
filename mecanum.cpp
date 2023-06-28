#include "Arduino.h"
#include "mecanum.h"


// constructor:
Mecanum::Mecanum(int leftFront1, int leftFront2, int leftRear1, int leftRear2, int rightFront1, int rightFront2, int rightRear1, int rightRear2, int leftFrontEnable, int leftRearEnable,   int rightFrontEnable, int rightRearEnable) // Setup the pins so that the 1 pin makes the motor move forwards when HIGH.
{
  // Left front motor:
  int lf1 = leftFront1; // Left Front 1.
  int lf2 = leftFront2; // Left Front 2.
  int lfe = leftFrontEnable; // Left Front Enable.
  
  // Left rear motor:
  int lr1 = leftRear1; // Left Rear 1.
  int lr2 = leftRear2; // Left Rear 2.
  int lre = leftRearEnable; // Left Rear Enable.

  // Right front motor:
  int rf1 = rightFront1; // Right Front 1.
  int rf2 = rightFront2; // Right Front 2.
  int rfe = rightFrontEnable; // Right Front Enable.

  // Right rear motor:
  int rr1 = rightRear1; // Right Rear 1.
  int rr2 = rightRear2; // Right Rear 2.
  int rre = rightRearEnable; // Right Rear Enable.
}

// Left Front Motor:
Mecanum::lFM(int speed) {
  // Change motor's speed.
  analogWrite(lfe, abs(speed));

  // If (speed) > 0 move motor forward.
  if (speed > 0) {
    digitalWrite(lf1, HIGH);
    digitalWrite(lf2, LOW);
  }

  // If (speed) < 0 move motor backwards.
  else {
    digitalWrite(lf2, HIGH);
    digitalWrite(lf1, LOW);
  }
}

// Left Rear Motor:
Mecanum::lRM(int speed) {
  // Change motor's speed.
  analogWrite(lre, abs(speed));

  // If (speed) > 0 move motor forward.
  if (speed > 0) {
    digitalWrite(lr1, HIGH);
    digitalWrite(lr2, LOW);
  }

  // If (speed) < 0 move motor backwards.
  else {
    digitalWrite(lr2, HIGH);
    digitalWrite(lr1, LOW);
  }
}

// Right front motor:
Mecanum::rFM(int speed) {
  // Change motor's speed.
  analogWrite(rfe, abs(speed));

  // If (speed) > 0 move motor forward.
  if (speed > 0) {
    digitalWrite(rf1, HIGH);
    digitalWrite(rf2, LOW);
  }

  // If (speed) < 0 move motor backwards.
  else {
    digitalWrite(rf2, HIGH);
    digitalWrite(rf1, LOW);
  }
}

// Right rear motor:
Mecanum::rRM(int speed) {
  // Change motor's speed.
  analogWrite(rre, abs(speed));

  // If (speed) > 0 move motor forward.
  if (speed > 0) {
    digitalWrite(rr1, HIGH);
    digitalWrite(rr2, LOW);
  }

  // If (speed) < 0 move motor backwards.
  else {
    digitalWrite(rr2, HIGH);
    digitalWrite(rr1, LOW);
  }
}