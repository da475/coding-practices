#include <iostream>

using namespace std;

class clsA {
private:
    int a;
public:
    clsA() {
        a = 0;
    }
    friend class clsB;
};

class clsB {
private:
    int b;
public:
    void accessA(clsA& objA) {
        cout << "val is " << objA.a << endl;
    }
};

int main() {
    clsA objA;
    clsB objB;
    objB.accessA(objA);
    return 0;
}


