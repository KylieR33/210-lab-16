#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

class Color{
    private:
    int red;
    int blue;
    int green;
    public:
    Color(){red = 0; blue = 0; green = 0; }
    Color(int r) {red = r; blue = 0; green = 0;}
    Color(int r, int b, int g){red = r; blue = b; green = g;}

};

int main(){
    int r;
    int b;
    int g;
    srand((unsigned) time(NULL));
    int n = 25 + (rand() % 25);

    Color color1;

    for (int i = 0; i < n; i++){
        r = 1 + (rand() % 999);
    }

    
    cout << setw(15) << left << "R";
    cout << setw(15) << left << "B";
    cout << setw(15) << left << "G" << endl;

    return 0;
}