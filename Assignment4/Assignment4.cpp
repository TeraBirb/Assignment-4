#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <string>

using namespace std;

int main()
{
    // Activity 1: Multiplication

    /*
    * 
    double multiplicand = 0;
    double multiplier = 0;
    double product = 0;

    cout << "Enter the first number to be multiplied: ";
    cin >> multiplicand;
    cout << "Enter the second number to multiply by: ";
    cin >> multiplier;

    for (int i = 0; i < multiplier; i++) {
        product += multiplicand;
    }

    cout << multiplicand << " * " << multiplier <<  " = " << product << endl; // Result!

    

    // Activity 2: Reversing a number

    int numberInput = 0;

    while (numberInput <= 0) {
        cout << "Enter a number to be reversed: ";
        cin >> numberInput;
    }

    string numberInputStr = to_string(numberInput);
    int numberOutput = 0;

    for (int i = 1; i <= numberInputStr.length(); i++) {
        int digit = numberInput / pow( 10, numberInputStr.length() - i ); // Splicing digits
        numberInput -= digit * pow( 10, numberInputStr.length() - i ); // Result after splicing
        numberOutput += digit * pow( 10, i - 1 ); // Adding up: Starting from the first digit of input / last digit of new result

        cout << "digit " << i << " = " << digit << endl;
    }

    cout << "The reverse is " << numberOutput << endl;
    */

    
    // Activity 3: Stars
    int counter;
    bool conditional;

    
    for (int cols = 0; cols < 7; cols++) {
        
        /*
        counter = 0;
        while (counter < pow(2, cols)) {
            cout << "*";
            counter++;
        }
        */
        
       
        counter = 7;        
        while (counter < pow(2, cols)) {
            cout << "*";
            counter--;
        }

        cout << endl;
    }

}