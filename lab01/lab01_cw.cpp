#include <iostream>
#include <iomanip>
using namespace std;

int main() {
cout << "Podaj a ";
int a;
cin >> a;
cout << "Podaj b ";
int b;
cin >> b;

int wynik1 = a + b;
int wynik2 = a - b; 
int wynik3 = a * b;


cout << "Suma: " << wynik1 << endl;
cout << "Różnica: " << wynik2 << endl;
cout << "Iloczyn: " << wynik3 << endl;


    return 0;
}