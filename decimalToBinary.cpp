#include <iostream>
using namespace std;

void decimalToBinary(int num) {
    int binary[32]; // Array to store binary digits
    int i = 0;
    
    if (num == 0) {
        cout << "Binary: 0" << endl;
        return;
    }

    while (num > 0) {
        binary[i] = num % 2;  // Store remainder
        num = num / 2;
        i++;
    }

    cout << "Binary: ";
    for (int j = i - 1; j >= 0; j--) {
        cout << binary[j];  // Print in reverse order
    }
    cout << endl;
}

int main() {
    int num;
    cout << "Enter a decimal number: ";
    cin >> num;
    
    decimalToBinary(num);
    
    return 0;
}
