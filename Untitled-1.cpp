#include <iostream>
#include <cmath>
#include <iomanip> 

using namespace std;
/*
        /\
       /  \
      /  l \ h
     /      \
    /   r    \
   (---<===>--)
*/

const double PI = 3.14159265358979;

int main() {
    double r, h;

    cout << "конустун радиусун киргизиңиз (r, cm): ";
    cin >> r;
    cout << "конустун бийиктигин киргизиңиз (h, cm): ";
    cin >> h;

    // Расчёттор
    double l = std::sqrt(std::pow(h, 2) + std::pow(r, 2));         // Түзүүчүсү (апофема сыяктуу)
    double negizinin_ayanty = PI * std::pow(r, 2);                 // Негизинин аянты (pi * r^2)
    double kaptalinin_ayanty = PI * r * l;                         // Каптал бетинин аянты (pi * r * l)
    double toluk_ayanty = negizinin_ayanty + kaptalinin_ayanty;    // Толук аянты
    double kolomu = (1.0 / 3.0) * negizinin_ayanty * h;            // Көлөмү (1/3 * pi * r^2 * h)

    cout << fixed << setprecision(1);

    cout << "Түзүүчүсү (l): " << l << " cm\n";
    cout << "Негизинин аянты: " << negizinin_ayanty << " cm^2\n";
    cout << "Каптал бетинин аянты: " << kaptalinin_ayanty << " cm^2\n";
    cout << "Толук аянты: " << toluk_ayanty << " cm^2\n";
    cout << "Конустун көлөмү: " << kolomu << " cm^3\n";

    return 0;
}
