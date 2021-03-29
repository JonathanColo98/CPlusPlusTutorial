#include <iostream>

template<typename T>
//template<class T>


void swap(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}


int main() {
    int a = 5, b = 7;
    std::cout << a << " - " << b << std::endl;
    swap(a,b);
    std::cout << a << " - " << b << std::endl;

    char c = 'c' , d = 'd';
    std::cout << c << " - " << d << std::endl;
    swap<char>(c,d);
    std::cout << c << " - " << d << std::endl;

    system("pause>0");
}
