#include <iostream>

using namespace std;

class clsA {
public:
    int a;
    clsA() {
        cout << "Default constructor called" << endl;
        a = 0;
    }
    clsA(int val) {
        cout << "Parametric constructor called" << endl;
        a = val;
    }
    clsA(const clsA &obj) {
        cout << "Copy constructor called" << endl;
        a = obj.a;
    }
};


int main() {
    clsA obj1;
    clsA obj2(3);
    clsA obj3 = obj2;
    cout << obj1.a << obj2.a << obj3.a << endl;
    return 0;
}


