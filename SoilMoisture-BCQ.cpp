///////////////////////////////////////////////////////////
//  SoilMoisture-BCQ.cpp
//  Implementation of the Class SoilMoisture
//  Created on:      04-mar-2019 23:24:20
//  Original author: Breno Cunha Queiroz
///////////////////////////////////////////////////////////



#include "SoilMoisture-BCQ.h"

#if defined(ARDUINO) && ARDUINO>=100
#include "Arduino.h"//arduino version >= 1.0.0
#elif defined(ARDUINO) && ARDUINO<100
#include "WProgram.h"//arduino old version
#endif


SoilMoisture::SoilMoisture(int _pinAnalog,int _value0, int _value100)
	:pinAnalog(_pinAnalog), value0(_value0), value100(_value100){
}

SoilMoisture::~SoilMoisture() {
}
 
float SoilMoisture::value() const{
	int dataSensor = analogRead(pinAnalog);
	//float moist = 100 - ((dataSensor - value100) / (value0 - value100));

	float moist = 100 - ( float(dataSensor - value100) / float(value0 - value100) )*100;

	moist > 100 ? moist = 100 : moist;
	moist < 0 ? moist = 0 : moist;

	return moist;
}
