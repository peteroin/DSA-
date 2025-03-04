#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, target;
    
    // Taking input for the number of elements
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> arr(n);

    // Taking input for the array elements
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Taking input for the target sum
    cout << "Enter the target sum: ";
    cin >> target;

    bool found = false;

    // Finding the pair with the given sum
    for (size_t i = 0; i < arr.size(); i++) {
        for (size_t j = i + 1; j < arr.size(); j++) {
            if (arr[i] + arr[j] == target) {
                cout << "Pair found: (" << arr[i] << ", " << arr[j] << ")\n";
                found = true;
                break; // Stop after finding the first pair
            }
        }
        if (found) break; // Exit outer loop if pair is found
    }

    if (!found) {
        cout << "No pair found\n";
    }

    return 0;
}
