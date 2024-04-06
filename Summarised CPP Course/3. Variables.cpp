#include <iostream>
using namespace std;

//step 1: Declare variables
int quantity;    //int used for integers
float price;     //float used for fractions (single presicion)
double temp;     //double is also used for fractions (double precision)
double pi;     
char letter;     //char is for single character
string bottle;   //string is for multiple characters


int main() {
//step 2: Assign values to the variables using '='
    quantity = 10;
    price = 0.5;
    temp = 40;
    pi = 3.14159;
    letter = 'a';
    bottle = "bo'oh'wa'er";
    cout << "Give me " << quantity << " candies please." << endl;
    cout << "And your total is $" << quantity * price << ", said the shopkeeper." << endl;
    cout << "Also add a " << bottle << ", it's " << temp << " degrees today.";
}