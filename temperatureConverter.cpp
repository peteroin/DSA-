#include <iostream>
using namespace std;

// Function to convert Celsius to Kelvin
double celsiusToKelvin(double celsius) {
    return celsius + 273.15;
}

// Function to convert Celsius to Fahrenheit
double celsiusToFahrenheit(double celsius) {
    return (celsius * 9 / 5) + 32;
}

int main() {
    double celsius;
    
    // Get input from user
    cout << "Enter temperature in Celsius: ";
    cin >> celsius;
    
    // Perform conversions
    double kelvin = celsiusToKelvin(celsius);
    double fahrenheit = celsiusToFahrenheit(celsius);
    
    // Display results
    cout << "Temperature in Kelvin: " << kelvin << " K" << endl;
    cout << "Temperature in Fahrenheit: " << fahrenheit << " °F" << endl;
    
    return 0;
}
