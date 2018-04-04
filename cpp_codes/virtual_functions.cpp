
#include <iostream>

/*

NOTE: the functions defined as virtual in base class can be
overridden in the derived class.
- Mainly tested using a pointer of base class type and assigning
it the address of a derived class object
- In this case, there is another issue which is that there is a
variable of same name in both classes

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
        virtual void func() {
            printf("func called in base\n");
            var = 6;
        }
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
    //Base obj1;
    //printf ("val is %d\n", obj1.var);

//    Base *base_ptr = new (Derv);
//    base_ptr->func();
//    printf ("val is %d\n\n\n", base_ptr->var);

    Derv obj2;
    Base &b = obj2;
    b.func();    
    printf ("val is %d\n", b.var);

//    obj2.func();
//    printf ("val after func call is %d\n", obj2.var);

    return 0;
}


