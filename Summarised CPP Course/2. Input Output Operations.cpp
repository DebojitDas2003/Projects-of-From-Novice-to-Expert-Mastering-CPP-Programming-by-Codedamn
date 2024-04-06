#include <iostream>
//iostream is made of istream and ostream classes. istream and ostream class contains input and output related objects respectively.
using namespace std;

int main() {
    string name;
    cout << "What is Your Name?: ";
//cout is an object from ostream class with << operator is used to display information on the screen
    cin >> name;
//cin is an object from istream class with >> operator is used to take input from the user
    cout << "Fuck You " << name;
    return 0;
}