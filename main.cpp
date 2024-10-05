#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

const int n = 25;

class Color{
    private:
    int red;
    int blue;
    int green;
    public:
    Color(){red = 0; blue = 0; green = 0; }
    Color(int r) {red = r; blue = 0; green = 0;}
    Color(int r, int b, int g){red = r; blue = b; green = g;}
     void print(){
         cout << setw(15) << left << red;
         cout << setw(15) << left << blue;
         cout << setw(15) << left << green << endl;
    }

};

int main(){
    int r;
    int b;
    int g;
    srand((unsigned) time(NULL));

    cout << setw(15) << left << "R";
    cout << setw(15) << left << "B";
    cout << setw(15) << left << "G" << endl;

    Color color1;

    for (int i = 0; i < 1; i++){
        r = 1 + (rand() % 999);
        Color color2(r);
        color2.print();
    }


    return 0;
}