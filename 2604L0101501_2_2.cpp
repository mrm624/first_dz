#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    string name1, name2, name3;
    float zone1, zone2, zone3;
    int el1, el2, el3;
    int hole1, hole2, hole3;


    cout << "\n1-sapty kirginiz (Zat Zona Electron Tk) > ";
    cin >> name1 >> zone1 >> el1 >> hole1;

    cout << "2-sapty kirginiz (Zat Zona Electron Tk) > ";
    cin >> name2 >> zone2 >> el2 >> hole2;

    cout << "3-sapty kirginiz (Zat Zona Electron Tk) > ";
    cin >> name3 >> zone3 >> el3 >> hole3;

    cout << "\n-------------------------------------------------------------\n";
    cout << "|              Zarym otkorguchtordun kasietteri             |\n";
    cout << "-------------------------------------------------------------\n";
    cout << "|    Zat    | Tyuu salyngan | Electron dordun|  Teshikterdin|\n";
    cout << "|           |   zona (eV)   |    kyymyly     |    kyymyly   |\n";
    cout << "------------|---------------|----------------|--------------|\n";

    cout << fixed << setprecision(2);

    cout << "| " << setw(10) << name1 
         << "| " << setw(13) << zone1 
         << " | " << setw(14) << el1 
         << " | " << setw(12) << hole1 << " |\n";

    cout << "| " << setw(10) << name2 
         << "| " << setw(13) << zone2 
         << " | " << setw(14) << el2 
         << " | " << setw(12) << hole2 << " |\n";

    cout << "| " << setw(10) << name3 
         << "| " << setw(13) << zone3 
         << " | " << setw(14) << el3 
         << " | " << setw(12) << hole3 << " |\n";

    cout << "-------------------------------------------------------------\n";
    cout << "| Tyuu salyngan zona: ev; kyymyl: kv.sm/sek*v               |\n";
    cout << "-------------------------------------------------------------\n";

    return 0;
}