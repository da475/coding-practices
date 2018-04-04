#include <iostream>
#include <string>

using namespace std;

class animals {
        //private members
        private:
            int number_legs;
            int number_eyes;
    
        // public methods
        public:

            // constructor
            animals() {
                name = "cat";
                number_legs = 3;
                number_eyes = 1;
            }

            string name;    // name of the animal
            bool carni_herbi;

            int set_legs(int legs) {
                number_legs = legs;
                cout << "legs set to " << number_legs << endl;
                return legs;   
            }

            void print_legs() {
                cout << name << " has " << number_legs << " legs" << endl;
            }        
    };

class dinos : private animals {
    private:
        int number_wings;    
    public:

        //constructor
        dinos() {
            number_wings = 6;
        }

        string name;    // same name as in the base class
        void print_wings() {
            cout << name << " has " << number_wings << " wings" << endl;
        }
};

int main() {

    animals ani;
    ani.name = "cow";
    ani.set_legs(4);
    ani.print_legs();

    animals *aniptr = new(animals);
//    aniptr->name = "another cow";     //default name set in construct would print here
    aniptr->print_legs();

    dinos dino1;
    dino1.name = "terex";
    dino1.print_wings();

    return 0;
}


