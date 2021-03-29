#include <iostream>
using namespace std;

int main() {

    float num1, num2;
    char operation;
    cout << "** Calculator **" << endl;
    cin >> num1 >> operation >> num2;

    switch (operation) {
        case '-' : cout << num1 << operation << num2 << "=" << num1 - num2; break;
        case '+' : cout << num1 << operation << num2 << "=" << num1 + num2; break;
        case '*' : cout << num1 << operation << num2 << "=" << num1 * num2; break;
        case '/' : cout << num1 << operation << num2 << "=" << num1 / num2; break;
        case '%' :
            bool isNumInt, isNumInt2;
            isNumInt = ((int) num1 == num2); //5 == 5.0
            isNumInt2 = ((int) num2 == num2);

            if(isNumInt && isNumInt2)
                cout << num1 << operation << num2 << "=" << (int)num1 % (int)num2;
            else
                cout << "Not valid";
            break;
    }
    system("pause>0");
}
