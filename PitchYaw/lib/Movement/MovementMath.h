// This is the Library file for the movement functionality of the two servos
// PWMs will be abstracted as functions in this file to be more efficiently used in the main c.
//
// 6/21/26
// File written by David Fuad Dueiri
//---------------------------------------------------------------------------------

#ifndef MOVEMENT_MATH_H
#define MOVEMENT_MATH_H

void SG90Angle(float *v);
// Driver for the SG-90 Servo. 
// Will take a discrete angle input, and instruct the servo to approach that angle.
// This function will abstract the PWM and allow for simple mathematical operations in the main file.

void PWMFreq(int *v);
// Take an integer and convert it to pwm frequency, may not be necessary might delete
// 
// 

#endif /*Matrix Math*/
