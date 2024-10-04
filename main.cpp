#include <iostream>
#include <iomanip>
#include <vector>

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