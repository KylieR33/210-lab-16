#include <iostream>
#include <iomanip>
// COMSC-210 | Lab 16 | Kylie Roxo
using namespace std;

const int n = 25;//constant size for functions 

class Color{
    private://private variables
    int red;
    int blue;
    int green;
    public:
    Color(){red = 0; blue = 0; green = 0; }//default construct(all variables set to 0)
    Color(int r) {red = r; blue = 0; green = 0;}//partial construct(red = r, all other variables set to 0)
    Color(int r, int b, int g){red = r; blue = b; green = g;}//parameter construct(red = r, blue = b, green = g)
     void print(){//print private variables functions
         cout << setw(15) << left << red;
         cout << setw(15) << left << blue;
         cout << setw(15) << left << green << endl;
    }

};

int main(){
    int r;//holding variables 
    int b;
    int g;
    srand((unsigned) time(NULL));

    cout << setw(15) << left << "R";
    cout << setw(15) << left << "B";
    cout << setw(15) << left << "G" << endl;

    Color color1;//initiates default construct

    for (int i = 0; i < 1; i++){//for loop to send 1 random number to r and intiate partial constuct and void print 
        r = 1 + (rand() % 999);
        Color color2(r);
        color2.print();
    }

    for (int i = 0; i < n; i++){//for loop to send n amount of random numbers for r,b,g and intiates parameter construct and void print
        r = 1 + (rand() % 999);
        b = 1 + (rand() % 999);
        g = 1 + (rand() % 999);
        Color color3(r, b ,g);
        color3.print();
    }

    return 0;
}