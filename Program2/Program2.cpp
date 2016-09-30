/*Created By: Ryan Spaulding
Date Created: 9/29/16
CSI20
Browne */

#include <iostream>
using namespace std;

class DistanceConverter {
    public:
        DistanceConverter();                //default construct
        DistanceConverter(double Inches_);   //overload construct
        void SetInches(double disInches);
        double GetInches();
        void SetFeet(double disFeets);
        double GetFeet();
        void SetYards(double disYards);
        double GetYards();
        void SetMeters(double disMeters);
        double GetMeters();
        void SetMiles(double disMiles);
        double GetMiles();
        void DistancePrint();

    private:
        double Inches_;
        
    /* Equations used
    ft = in*12
    yd = in*36
    m  = in*39.3701
    mi = in* 63360
    */
    
};
    
DistanceConverter::DistanceConverter() {     //default construct
    double Inches_ = 0;
    return;
}    

DistanceConverter::DistanceConverter(double disInches) { //overload construct
    Inches_ = disInches;
    return;
}

void DistanceConverter::SetInches(double disInches) {
    Inches_ = disInches;
    return;
}

double DistanceConverter::GetInches() {
    return Inches_;
}


void DistanceConverter::SetFeet(double disFeet) {
    Inches_ = disFeet * 12;
    return;
}

double DistanceConverter::GetFeet(){
    double disFeet;
    disFeet = Inches_  / 12;
    return disFeet;
}

void DistanceConverter::SetYards(double disYards) {
    Inches_ = disYards * 36;
    return;
}

double DistanceConverter::GetYards() {
    double disYards;
    disYards = Inches_ / 36;
    return disYards;
}

void DistanceConverter::SetMeters(double disMeters) {
    Inches_ = disMeters * 39.3701;
    return;
}

double DistanceConverter::GetMeters() {
    double disMeters;
    disMeters = Inches_ / 39.3701;
    return disMeters;
}

void DistanceConverter::SetMiles(double disMiles) {
    Inches_ = disMiles * 63360;
    return;
}

double DistanceConverter::GetMiles() {
    double disMiles;
    disMiles = Inches_ / 63360;
    return disMiles;
}


void DistanceConverter::DistancePrint() {
    cout << GetInches() << " inches" << endl;
    cout << GetFeet()   << " feet"   << endl;
    cout << GetYards()  << " yards"  << endl;
    cout << GetMeters() << " meters" << endl;
    cout << GetMiles()  << " miles"  << endl << endl;
}

int main ()
{
    DistanceConverter dis1;
    DistanceConverter dis2;
    DistanceConverter dis3;
    DistanceConverter dis4;
    DistanceConverter dis5;
    
    dis1.SetMiles(1); 
    cout << "Problems 1-4" << endl;
    dis1.DistancePrint();
    
    
    dis2.SetMeters(16);
    cout << "Problem 5" << endl;
    dis2.DistancePrint();
    
    
    dis3.SetYards(20);
    cout << "Problem 6" << endl;
    dis3.DistancePrint();
    
    
    dis4.SetInches(100);
    cout << "Problem 7" << endl;
    dis4.DistancePrint();
   
    
    dis5.SetMeters(1);
    cout << "Problem 8" << endl;
    dis5.DistancePrint();
    
    
    return 0;
}
