#include <iostream>
using namespace std;

//step 1: Declare variables
int quantity, rounded_total;    //int used for integers
float price, total;     //float used for fractions (single presicion)
double temp;     //double is also used for fractions (double precision) 
char letter;     //char is for single character
string bottle;   //string is for multiple characters
//Above statements declarative statements, as they are declaring variables


int main() {
//step 2: Assign values to the variables using '='
    quantity = 11;
    price = 0.25;
    temp = 40;
    letter = 'a';
    bottle = "bo'oh'wa'er";
//Above statements are assignment statement, as they are assigning values to the variables
    total = price * quantity; //this a expression statement
    rounded_total = (int)total; //this is called type casting, in this process we can convert integer to string, float, double, long, etc. and vice versa
//to do type casting first we have to declare a variable in which we want to convert our variable, like here it is int.
//We have to put the datatype in which we want to convert inside the paranthesis, like here it is - (int).
//Then we have to write the variable which we want to convert, like here it is total.
    cout << "Give me " << quantity << " candies please." << endl; 
    cout << "And your total is $" << price << ", said the shopkeeper." << endl;
    cout << "Also add " << letter << " " << bottle << ", it's " << temp << " degrees today."<< endl;
    cout << "Your your total is " << rounded_total <<", said the shopkeeper";
//we can print the values of the variables directly.
}