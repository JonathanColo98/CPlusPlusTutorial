#include <iostream>
using namespace std;

int main() {

    //+,-,*,/,%

    cout << 5 + 2 << endl;
    cout << 5 / 2.0 << endl;
    cout << 5 / 2 << endl; // 2
    cout << 5 % 2 << endl; // 1

    // ++. --
    int counter = 7;
    counter++; // post increment
    cout << counter << endl;
    counter--;
    cout << counter << endl;

    int counter2 = 7;
    cout << ++counter2 << endl; // pre increment

    system("cls");

    // <,>,<=,>=,==,!=
    int a = 5, b = 5;
    cout << (a != b);

    system("cls");

    //&&, ||, !
    cout << (a == 5 && b == 5);
    system("cls");

    // priority operators: arithmetic >> relational >> logical

    // =, +=, -=, *=, /=, %=
    int x = 5;
    x += 7;
    // x = x + 7;
    cout << x << endl;


    system("pause>0");
}
