///////////////////////////////////////////////////////////
//  SoilMoisture-BCQ.h
//  Implementation of the Class SoilMoisture
//  Created on:      04-mar-2019 23:24:20
//  Original author: Breno Cunha Queiroz
///////////////////////////////////////////////////////////

#if !defined(SOILMOISTURE_H)
#define SOILMOISTURE_H

class SoilMoisture
{
public:
	SoilMoisture(int _pinAnalog, int _value0, int _value100);//constructor
	virtual ~SoilMoisture();//destroyer
	float value() const;//return sensor value in centimeters

private:
	const int pinAnalog, value0, value100;

};

#endif // !defined(SOILMOISTURE_H)
