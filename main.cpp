#include <cmath>
#include <iostream>
using namespace std;
// End header inclusions
// Start Global Variables
float lowerBound;
float upperBound;
float sum;
float integral;
float coefficient;
int power;
int option;
float input;
float switch1;
float switch2;
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
        cout << (((input * lowerBound) + (input * upperBound)) / 2) * (upperBound - lowerBound) << endl;
    }
    /*End function for 2 and start function for 3*/
    if (option == 3){
        /*Goal is to ask for accuracy amount, then depending on accuracy needs divide the (upperbound-lowerbound) into thousands of small sections and get a riemann summation. These sums can be dynamically adjusted since i can use the upperbound-lowerbound as the baseline*/
        cin >> power;
        cout << pow(lowerBound, power);

        
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

