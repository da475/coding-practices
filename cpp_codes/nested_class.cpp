#include <iostream>

using namespace std;

//NOTE: an object of clsB is a member of clsA
// But if int b is made private, then we cannot access
// obj1.objB.b outside (as expected)

class clsB {
public:
    int b;
    clsB() {
        b = 8;
    }
};

class clsA {
public:
    int a;
    clsB objB;
    clsA() {
        cout << "Default constructor called" << endl;
        a = 0;
    }
};


int main() {
    clsA obj1;
    cout << obj1.a << obj1.objB.b  << endl;
    return 0;
}


