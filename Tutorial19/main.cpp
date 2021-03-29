#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    int height, width;
    cout << "Height: " << endl;
    cin >> height;
    cout << "Width: " << endl;
    cin >> width;
    char symbol;
    cout << "Symbol: " << endl;
    cin >> symbol;

    for (int h=0; h<height; h++) {
        for (int w = 0; w<width; w++) {
            //cout << symbol << "\t";
            cout << setw(3) << symbol;
        }
        cout << endl;
    }

    system("pause>0");
}
