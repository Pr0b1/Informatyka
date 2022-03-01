

#include <iostream>
using namespace std;

int main()
{
    int liczba;
    cout << "Podaj liczbę by sprawdzić czy jest liczbą pierwszą: " << endl;
    cin >> liczba;
    for (int i = 2; liczba%i==0; i++) {
        int wynik = liczba % i;
        if (wynik != 0) {
            
        }
        if (wynik == 0) {
            cout << liczba << " jest liczbą pierwszą!";
            break;
        }
    }
}


