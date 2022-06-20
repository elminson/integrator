#include <cmath>
#include <iostream>
#include <iomanip>
using namespace std;
// End header inclusions
// Start Global Variables
long double lowerBound;
long double upperBound;
long double sum;
long double integral;
long double coefficient;
long double power;
long double option;
long double input;
long double switch1;
long double switch2;
long double accuracy;
long double currentposition;
long double currentvalue;
long double total;
long double increment;
long double accuracyOption;
// End Global Variables
//Functions
void calculateIntegral() {
	/*List of options*/
    cout << "Option 1: Constant" << endl;
    cout << "Option 2: Linear Function" << endl;
    cout << "Option 3: Exponential Function" << endl;
    cout << "Option 4: Logarithmic Function" << endl;
    cout << "Option 5: Trigonometric Function/Reciprocal" << endl;
    cout << "Option 6: Inverse Trigonometric Function" << endl;
    cout << "Option 7: Finish" << endl;
    cout << "After all others, absolute value functions will be added" << endl;
    cin >> option;
    /*Function for selected option 1*/
    if (option == 1){
        cin >> input;
        cout << input * (upperBound - lowerBound) << endl;
    }
    /*End funtion for 1 and start function for 2*/
    if (option == 2){
        cout << "Slope: ";
        cin >> input;
        cout << (((input * lowerBound) + (input * upperBound)) / 2.0) * (upperBound - lowerBound) << endl;
    }
    /*End function for 2 and start function for 3*/
    if (option == 3){
        cout << "Choose accuracy 1-10: ";
        cin >> accuracy;
        accuracyOption = accuracy * 10.0;
        cout << "Exponent: ";
        cin >> power;
        increment = (upperBound - lowerBound) / accuracyOption;
        currentposition = lowerBound + ((upperBound - lowerBound) / (accuracyOption * 2));
        for (int i = 0; i < accuracyOption; i++){
            currentvalue = increment * pow(currentposition, power);
            total += currentvalue;
            currentposition += increment;
        }
        cout << setprecision(10) << total;
        
/*        cout << pow(lowerBound, power);*/
    }
}
// Main Function
int main() {
	cout << "Lower bound: "; cin >> lowerBound;
    cout << "Upper bound: "; cin >> upperBound;
    if (upperBound < lowerBound){
        switch1 = lowerBound;
        switch2 = upperBound;
        upperBound = switch1;
        lowerBound = switch2;
    }
    calculateIntegral();
    
    return 0;
}

