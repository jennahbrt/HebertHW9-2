/*
* file name: analogIn.h
* Created by Amer Qouneh on October 30, 2020.
*
* This class wraps the functionality of analog input pins.
*/
#ifndef ANALOGIN_H_
#define ANALOGIN_H_
#include <string>
#include <iostream>
#define ADC_PATH "/sys/bus/iio/devices/iio:device0/in_voltage"
using std::string;
using namespace std;
class AnalogIn{
private:
unsigned int number;
public:
AnalogIn();
AnalogIn(unsigned int n);
virtual unsigned int getNumber();  // inline function implementation.
virtual void setNumber(unsigned int n);
virtual int readADCsample();
virtual ~AnalogIn();
};
#endif /* ANALOGIN_H_ */ 
