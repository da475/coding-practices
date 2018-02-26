#include <iostream>

using namespace std;

class baseA {
public:
    baseA() {
        cout << "baseA called" << endl;
    };
};


class baseB : public baseA {
public:
    baseB() {
        cout << "baseB called" << endl;
    };
};

class chld : public baseB {
public:
    chld() {
        cout << "child called" << endl;
    };
};

int main() {
    //baseA *b1 = new(baseA);
    chld *c1 = new(chld);
    return 0;
}
