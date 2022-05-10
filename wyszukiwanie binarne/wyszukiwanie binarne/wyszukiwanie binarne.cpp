

#include <iostream>
using namespace std;
int pozycja(int szukana,int tab[]) {
    int pozycja; int l = 0; int p = 15; int sr = (l + p) / 2; 
    
    while (l <= p) {
        if (tab[sr] == szukana) {
            return sr;
        }
        if (tab[sr] > szukana) {
            p = sr - 1;
        }
        else {
            l = sr + 1;
        }
        sr = (l + p) / 2;
    }
    return -1;
}

int main()
{
   int szukana; int tab[15] = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47 };
    cout << "2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47" << endl;
    cout << "Jakiej liczby szukasz: " << endl; 
    cin >> szukana;
    pozycja(szukana, tab);
    if (pozycja(szukana, tab) == -1) {
        cout << "Nie udało się znaleźć oczekiwanej liczby." << endl;
    }
    else
      {
        cout << "liczba " << szukana << " występuje w zbiorze w komórce o indeksie " << pozycja(szukana, tab) << endl;
    }
}

