/* read_resistance.cpp
 * file created by Jenna Hebert 
 * implements AnalogIn class, reads pin AIN0
 * AIN0 connected to a 100 -100k ohm resistor
 * Reads the ADC value, converts the value to a resistance, and prints it
 * Takes no input arguments. call by ./read_resistance 
 */

#include "AnalogIn.h"
#include <iostream>
using std::string;
using namespace::std;
int main(){
	cout <<"Testing program"<<endl;
	AnalogIn resistor(0);
	cout <<"Reading from AIN" << resistor.getNumber()<<endl;
	int adc = resistor.readADCsample();
	float Vref = 1.8;
	float maxADC = 4096;
	float baseR = 10000;
	float Va = (adc*Vref)/maxADC;
	cout<<"ADC reading is "<<adc<<endl;
	cout<< "Voltage is "<<Va<<endl;
	float resistance = ((Va*baseR)/Vref);
	if(resistance > 1000){
		resistance =  resistance/1000;
		cout<<"Resistance is "<<resistance<<"k"<<endl;
	}
	else{
		cout<<"Resistance is "<< resistance<<endl;
	}
	cout<<"done"<<endl;
}
