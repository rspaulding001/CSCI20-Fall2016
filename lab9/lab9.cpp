/*Created By: Ryan Spaulding
Date Created: 9/25/16
CSI20
Browne */

#include <iostream>
using namespace std;

class TemperatureConverter {
    public:
        TemperatureConverter(); //default constructor
        TemperatureConverter(double kelvin);
        void SetTempFromKelvin(double tempKelvin);
        double GetTempFromKelvin();
        void SetTempFromCelsius(double tempCelsius);
        double GetTempAsCelsius();
        void SetTempFromFahrenheit(double tempFahrenheit);
        double GetTempAsFahrenheit();
        void PrintTemps();
    private:
        double kelvin_;
      
        
};

TemperatureConverter::TemperatureConverter() {  //default constructor
    kelvin_ = 0;                                 //default value
    return;
}

TemperatureConverter::TemperatureConverter(double kelvin) {  //default overload constructor
    kelvin_ = kelvin;
    return;
}

void TemperatureConverter::SetTempFromKelvin(double kelvin) {
    kelvin_ = kelvin;
    return;
    
}

double TemperatureConverter::GetTempFromKelvin(){
    return kelvin_;
}

void TemperatureConverter::SetTempFromCelsius(double tempCelsius){            
    kelvin_ = tempCelsius + 273.15;
    return;
}

void TemperatureConverter::SetTempFromFahrenheit(double tempFahrenheit){
    kelvin_ = (5 * (tempFahrenheit - 32) / 9) + 273.15;
    return;
}

double TemperatureConverter::GetTempAsCelsius(){
    double tempCelsius;
    tempCelsius = kelvin_ - 273.15;
    return tempCelsius;
}

double TemperatureConverter::GetTempAsFahrenheit(){
    double tempFahrenheit;
    tempFahrenheit = (((kelvin_ - 273.15) * 9) / 5 + 32);
    return tempFahrenheit;
}

void TemperatureConverter::PrintTemps(){
    cout << GetTempFromKelvin()    << "K" << endl;
    cout << GetTempAsCelsius()   << "C" << endl;
    cout << GetTempAsFahrenheit() << "F" << endl;
}