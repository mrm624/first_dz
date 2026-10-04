#include <iostream>
#include <cmath>

using namespace std;
           
                                    /*cilindir*/

const double PI = 3.14159265358979;
int main(){
double r;

cout<<"шардын радиусу канча болсун?(cm) - ";
cin >> r;

double aylananın_uzundugu = 2*PI*r;                                  // негизинин узундугу
double diametr = 2*PI*r;                                    // диаметри
double ayantı = 4*PI*r*r;                                  // толук аянты
double kolomu = (4.0 / 3.0) * PI * std::pow(r, 3);                            // көлөмү

cout <<"айлананын узундугу: "<<aylananın_uzundugu<<"cm\n";
cout <<"диаметри: "<<diametr<<"cm\n";
cout <<"сферанын аянты: "<<ayantı<<"cm\n";
cout <<"сферанын көлөмү: "<<kolomu<<"cm\n";


return 0;
}
