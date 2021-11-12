//hiányoztak a this-> -ek a konstruktorból.

#include <string>

using namespace std;

class Monitor {
    string gyarto;
    double pixel_x;
    double pixel_y;

public:
    Monitor(string& gyarto, double pixel_x, double pixel_y) {
        this->gyarto = gyarto;
        this->pixel_x = pixel_x;
        this->pixel_y = pixel_y;
    }

    const string& get_gyarto() const {
        return gyarto;
    }

    double get_pixel_x() const {
        return pixel_x;
    }

    double get_pixel_y() const {
        return pixel_y;
    }

};
