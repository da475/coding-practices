
#include <iostream>

using namespace std;

/*
NOTE: the functions defined as pure virtual in base class can be
overridden in the derived class. But you cannot make an base
class object now
*/

class Base {
    public:
        int var;
        Base() {
            printf ("Base cons called\n");
            var = 5;
        }
        ~Base() {
            printf ("Base desc called\n");
        }

        virtual void func() = 0;    // function made pure virtual
};

class Derv : public Base {
    public:
        int var;

        Derv() {
            printf("Child cons called\n");
            var = 4;
        }

        ~Derv() {
            printf("Child desc called\n");
        }

        void func() {
            printf("func called in child\n");
            var = 7;
        }
};

int main() {

    // base class object assigned child obj ptr
    Derv *obj2 = new Derv;
    Base *b = obj2;
    b->func();    
    delete obj2;

    // same stuff using C++ reference
    Derv obj1;
    Base& b1 = obj1;
    b1.func();    

    // this is not allowed for virtual
    Base objB;

    return 0;
}


