#include <iostream> // Import a file to read text and read keyboard
using namespace std;

int main() {
    int a = -10; // encoded on 32 bits
    double pi = 3.14159; // 64 bits
    bool ok = true;
    char letter = 'E'; // '' means 1 letter, "" means a string (several letters)
    string text = "HELLO";
    long long big = 10000000000LL; // integer on 64 bits | add literal at the end in order not to overflow
    float x = 3.14f; // 32 bits version of double

    auto auto_int = 42;
    auto auto_double = 2.5;

    cout << "int a = " << a << "\n";
    cout << "double pi = " << pi << "\n";
    cout << "bool ok = " << ok << "\n";
    cout << "char letter = " << letter << "\n";
    cout << "string text = " << text << "\n";
    cout << "long long big = " << big << "\n";
    cout << "float x = " << x << "\n";
    cout << "auto_int = " << auto_int << "\n";
    cout << "auto_double = " << auto_double << "\n";


    cout << "Type of auto_double variable: " << typeid(auto_double).name() << "\n"; // C++ returns
    // abbreviation for the types

    cout << "Text of int: " << typeid(a).name() << "\n";
    cout << "Text of double: " << typeid(pi).name() << "\n";
    cout << "Text of bool: " << typeid(ok).name() << "\n";
    cout << "Text of char: " << typeid(letter).name() << "\n";
    cout << "Text of string: " << typeid(text).name() << "\n";
    cout << "Text of float: " << typeid(x).name() << "\n";
    cout << "Text of long: " << typeid(big).name() << "\n";

    return 0;
}