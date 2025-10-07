// You assign an int to a double, and a double to a float.
// Print out all values and their sizeof(...).
// Observe if any values changed.
#include <iostream>
#include <iomanip>

int main() {
    int n =45;       // int
    double d =n;     // int → double (implicit conversion)
    float f =d;      // double → float (implicit conversion)
    float f2=55553.3343766;
    int a = f2;
    double d2= 5432.6853565555553232;

    std::cout << "n (int) = " << n << ", size = " << sizeof(n) << " bytes\n";
    std::cout << "d (double) = " << d << ", size = " << sizeof(d) << " bytes\n";
    std::cout << "f (float) = " << f << ", size = " << sizeof(f) << " bytes\n";
    std::cout << "f2 (float) = " << f2 << ", size = " << sizeof(f2) << " bytes\n";
    std::cout << "a (int) = " << a << ", size = " << sizeof(a) << " bytes\n";
    std::cout << std::fixed << std::setprecision(30);
    std::cout << "With precision(15): " << d2 << '\n';
    return 0;
}