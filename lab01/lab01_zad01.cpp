#include <iostream>
#include <iomanip>
using namespace std;
int main() {
float P = 0.0, R = 0.0, I = 0.0;

int  T = 0;

cin >> P >> T >> R;
I = (P * T * R)/100;

cout << fixed << setprecision(2);

cout << "P = " << P << endl;
cout << "T = " << T << endl;
cout << "R = " << R << endl;

cout << "Wynik rzeczywisty: " << I << endl;
cout << "Wynik całkowity: " << static_cast<int>(I) << endl;
   
    return 0;
}