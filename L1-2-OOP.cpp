#include <iostream>
#include <cmath>
#include <cstdlib>
#include <iomanip>  


using namespace std;


class Funcs {
public:
    double a(double x, double y, double z, double b) {
        return pow(x + y, 2) + (x + pow(z, 3) / pow(pow(b, 2) + y, 2)) / (1 + exp(-(x - y)) + pow(abs(z), 0.34));
    }
    double b(double x, double y, double z) {
        return 1 + pow(abs(y - x), 2) / pow(abs(z - 1), 1.34) + pow(z - x, 2) / pow(sin(z), 2) + pow(abs(y - z), 3) / (cos(pow(y, 2)));
    }
};


int main() {
    double y = 0.47 * 3;
    double z = -1.32 * 3;
    double x_start = -1.0;
    double x_end = 1.0;
    double delta_x = 0.2;


    Funcs f;


    cout << setw(10) << "x"
        << setw(20) << "b[x, y, z]"
        << setw(20) << "a[x, y, z, b]" << endl;


    for (double x = x_start; x <= x_end; x += delta_x) {
        if (abs(x) < pow(10, -10)) {
            x = 0;
        }
        double b_val = f.b(x, y, z);
        double a_val = f.a(x, y, z, b_val);

        cout << setw(10) << x
            << setw(20) << b_val
            << setw(20) << a_val << endl;
    }



    return 0;
}
