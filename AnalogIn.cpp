//AnalogIn.cpp
/* A program created by Jenna Hebert to wrpa the functionality of an analog sensor
 *
 *
 */
#include "AnalogIn.h"
#include <iostream>
#include <sstream>
#include <fstream>
using namespace std;
using std::string;

//constructor 
AnalogIn::AnalogIn(){
}
AnalogIn::AnalogIn(unsigned int n){
   number=n;
}
unsigned int AnalogIn::getNumber(){
   return number;
}
void AnalogIn::setNumber(unsigned int n){
   number=n;
}
int AnalogIn::readADCsample(){
   stringstream ss;
   ss << ADC_PATH << number << "_raw";
   fstream fs;
   fs.open(ss.str().c_str(), fstream::in);
   fs >> number;
   fs.close();
   return number;
}
AnalogIn::~AnalogIn(){}
