#include <iostream>
<<<<<<< HEAD
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
   
=======

using namespace std;

int main() {

    /*
    cout służy do wyświetlania danych na standardowym wyjściu,
    czyli w naszym przypadku w terminalu.

    Tekst umieszczamy w cudzysłowie.

    endl kończy bieżącą linię i przechodzi do następnej.
    */
    cout << "Hello world!" << endl;

    /*
    return 0 oznacza poprawne zakończenie programu.

    Wykonywanie programu rozpoczyna się od funkcji main()
    i kończy po wykonaniu jej instrukcji.
    */
>>>>>>> f6031af4101041f70f69530d9ac8c369d783299a
    return 0;
}