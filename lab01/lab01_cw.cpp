#include <iostream>
#include <iomanip>
using namespace std;

int main() {

float Pi = 3.14;
float R;
cin >> R;
cout << "R = " << R << endl;

float wynik1 = 2 * Pi * R;
float wynik2 = R * R * Pi;
cout << fixed << setprecision(2);
cout << "Obwód: " << wynik1 << endl;
cout << "Pole: " << wynik2 << endl;
    return 0;
}