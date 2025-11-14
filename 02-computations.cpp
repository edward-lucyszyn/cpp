#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int b = 3;

    cout << "===== ARITHMETIC OPERATORS =====\n";

    cout << "a + b = " << (a + b) << "\n"; // addition
    cout << "a - b = " << (a - b) << "\n"; // subtraction
    cout << "a * b = " << (a * b) << "\n"; // multiplication
    cout << "a / b = " << (a / b) << "\n"; // integer division
    cout << "a % b = " << (a % b) << "\n"; // modulo (remainder)

    double x = 10.0, y = 3.0;
    cout << "x / y = " << (x / y) << "\n"; // floating point division

    cout << "\n===== INCREMENT / DECREMENT =====\n";

    int c = 5;
    cout << "c = " << c << "\n";
    cout << "c++ = " << (c++) << " (post-increment)\n"; // prints old value
    cout << "Now c = " << c << "\n";
    cout << "++c = " << (++c) << " (pre-increment)\n"; // prints new value
    cout << "Now c = " << c << "\n";

    cout << "\n===== COMPARISON OPERATORS =====\n";

    cout << "a == b: " << (a == b) << "\n";
    cout << "a != b: " << (a != b) << "\n";
    cout << "a <  b: " << (a < b) << "\n";
    cout << "a <= b: " << (a <= b) << "\n";
    cout << "a >  b: " << (a > b) << "\n";
    cout << "a >= b: " << (a >= b) << "\n";

    cout << "\n===== LOGICAL OPERATORS =====\n";

    bool t = true, f = false;
    cout << "t && f: " << (t && f) << "\n"; // AND
    cout << "t || f: " << (t || f) << "\n"; // OR
    cout << "!t: " << (!t) << "\n"; // NOT

    cout << "\n===== BITWISE OPERATORS =====\n";

    int A = 6; // 110
    int B = 3; // 011

    cout << "A & B = " << (A & B) << "\n"; // bitwise AND (010 → 2)
    cout << "A | B = " << (A | B) << "\n"; // bitwise OR  (111 → 7)
    cout << "A ^ B = " << (A ^ B) << "\n"; // bitwise XOR (101 → 5)
    cout << "~A    = " << (~A) << "\n"; // bitwise NOT
    cout << "A << 1 = " << (A << 1) << "\n"; // left shift  (1100 → 12)
    cout << "A >> 1 = " << (A >> 1) << "\n"; // right shift (011 → 3)

    cout << "\n===== ASSIGNMENT OPERATORS =====\n";

    int z = 10;
    cout << "z = " << z << "\n";

    z += 5;
    cout << "z += 5 → " << z << "\n";

    z -= 3;
    cout << "z -= 3 → " << z << "\n";

    z *= 2;
    cout << "z *= 2 → " << z << "\n";

    z /= 4;
    cout << "z /= 4 → " << z << "\n";

    z %= 3;
    cout << "z %= 3 → " << z << "\n";

    cout << "\n===== BITWISE ASSIGNMENTS =====\n";

    int m = 5; // 101
    m &= 3; // m = m & 3  → 101 & 011 = 001 = 1
    cout << "m &= 3 → " << m << "\n";

    m |= 6; // m = m | 110 = 111 = 7
    cout << "m |= 6 → " << m << "\n";

    m ^= 2; // m = m ^ 010 = 111 ^ 010 = 101 = 5
    cout << "m ^= 2 → " << m << "\n";

    cout << "\n===== TERNARY OPERATOR =====\n";

    int age = 20;
    string result = (age >= 18) ? "Adult" : "Minor";
    cout << "Age check: " << result << "\n";

    return 0;
}
