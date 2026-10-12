#include <iostream>
using namespace  std;

int main() {
    cout << "podaj kwote rachunku: ";
    double kwota;
    cin >> kwota;
    cout << "podaj jeszcze liczbe osob: ";
    int osoby;
    cin >> osoby;

    if (osoby == 0) {
        cout << "nie da sie obliczyc przez zero!! ";
        return 0;
    }else if (osoby < 0) {
        cout << "nie da sie obliczyc przez ujemne liczby!!";
        return 0;
    }
    else  {
        double osoboweKwoty = kwota / osoby;
        cout << "tyle wychodzi na osobe: " << osoboweKwoty;
    }
     return 0;
}