#include <iostream>
using namespace std;

int main() {

    cout << "===== FOR LOOP =====\n";

    // Classic for loop: start → condition → increment
    for (int i = 0; i < 5; i++) {
        cout << "i = " << i << "\n";
    }

    cout << "\n===== WHILE LOOP =====\n";

    int a = 5;
    while (a > 0) {
        cout << "a = " << a << "\n";
        a--;  // decrement
    }

    cout << "\n===== DO WHILE LOOP =====\n";

    int b = 0;
    do {
        cout << "This prints at least once. b = " << b << "\n";
        b++;
    } while (b < 3);

    cout << "\n===== BREAK AND CONTINUE =====\n";

    for (int x = 0; x < 10; x++) {
        if (x == 2) {
            cout << "Skipping x = 2\n";
            continue;  // skip the rest of this loop iteration
        }
        if (x == 7) {
            cout << "Stopping at x = 7\n";
            break;     // exit the loop completely
        }
        cout << "x = " << x << "\n";
    }

    cout << "\n===== SUM OF FIRST N INTEGERS =====\n";

    int N = 10;
    int sum = 0;

    for (int i = 1; i <= N; i++) {
        sum += i;  // accumulate
    }

    cout << "Sum of 1 to " << N << " = " << sum << "\n";

    cout << "\n===== FACTORIAL EXAMPLE =====\n";

    int num = 5;
    long long fact = 1;

    for (int i = 1; i <= num; i++) {
        fact *= i;
    }

    cout << num << "! = " << fact << "\n";

    cout << "\n===== SEARCH IN AN ARRAY =====\n";

    int arr[6] = {3, 8, 1, 7, 2, 9};
    int target = 7;
    bool found = false;

    for (int i = 0; i < 6; i++) {
        if (arr[i] == target) {
            cout << "Found " << target << " at index " << i << "\n";
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Not found.\n";
    }

    return 0;
}
