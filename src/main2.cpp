#include "task2.cpp"

int main (){

    setlocale (0, "");

    unsigned long long x;

    cout << "¬ведите число: ";
    cin >> x;
    cout << "\n" << x << (checkPrime(x) ? " - простое число" : " - составное число") << "\n";
    cout << "Ѕлижайшее следующее простое число после " << x << ": " << nextPrime(x) << endl;

    unsigned y;
    cout << "¬ведите число от 1 до " << INF/10 << ": ";
    cin >> y;
    cout << "\n" << y << " простое число " << nPrime (y);

}
