#include <iostream>
using namespace std;

int main() {
    int x;
    cout << "type: " << typeid( x ).name() << endl;
    cout << "[min:max] " << numeric_limits<int>::min() << " : " << numeric_limits<int>::max() << endl;
    cout << "size: " << sizeof( x ) << " Bytes" << endl;

    int a1 = 2147483647/2;
    short a2 = 32767/2;
    float a3 = 1.23456789/2;
    double a4 = 1.23456789/2;
    long a5 = 2147483647/2;
    long long a6 = 9223372036854775807/2;
    char a7 = 255;
    string a8 = "1";
    bool a9 = 1;

    cout << a1*2 << endl;
    cout << a2*2 << endl;
    cout << a3*2 << endl;
    cout << a4*2 << endl;
    cout << a5*2 << endl;
    cout << a6*2 << endl;
    cout << a7*2 << endl;
    cout << a8+a8 << endl;
    cout << a9*1 << endl;

    return 0;
}