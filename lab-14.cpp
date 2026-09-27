// COMSC-210-5293 | Lab 14 | Yuyi Chen

#include <iostream>
using namespace std;

class Color {
    private:
        int red;
        int green;
        int blue;

    public:
        int getRed() const {
            return red;
        }

        void setRed(int r) {
            red = r;
        }

        int getGreen() const {
            return green;
        }

        void setGreen(int g) {
            green = g;
        }

        int getBlue() const {
            return blue;
        }

        void setBlue(int b) {
            blue = b;
        }

        void print() const {
            cout << "Red: " << red
                 << "Green: " << green
                 << "Blue: " << blue << endl;
        }
};

int main() {

    return 0;
}