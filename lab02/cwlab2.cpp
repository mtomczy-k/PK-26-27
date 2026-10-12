#include <iostream>
#include <iomanip>
using namespace std;

int main() {
   


    cout << "Wybierz precyzję: " << endl << "[1] pojedyncza precyzja" << endl << "[2] podwójna precyzja" << endl;
    int precyzja;
    cin >> precyzja;

    if (precyzja == 1){
     
    float a;
    float b;    

    cout << "Wybór: " << precyzja << endl;
    cout << "Podaj a: ";
    cin >> a;
    cout << "Podaj b: ";
    cin >> b;
    
    cout << fixed << setprecision(12);
    cout << "Suma: " << a + b << endl;
    cout << "Różnica: " << a - b << endl;
    cout << "Iloczyn: " << a * b << endl;
    cout << "Iloraz: " << a / b << endl;


    }
    
    else if(precyzja == 2){
    
    double a;
    double b;    

    cout << "Wybór: " << precyzja << endl;
    cout << "Podaj a: ";
    cin >> a;
    cout << "Podaj b: ";
    cin >> b;
    
    cout << fixed << setprecision(12);
    cout << "Suma: " << a + b << endl;
    cout << "Różnica: " << a - b << endl;
    cout << "Iloczyn: " << a * b << endl;
    cout << "Iloraz: " << a / b << endl;
    }

    else 
    cout << "Wybór: " << precyzja << endl << "Niepoprawny wybór" << endl;

    return 0;
}