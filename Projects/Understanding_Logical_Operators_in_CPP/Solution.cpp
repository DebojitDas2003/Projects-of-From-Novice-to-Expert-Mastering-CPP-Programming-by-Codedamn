#include <iostream>
using namespace std;

int main() {
    //step 1:
    bool a,b;
    a=true;
    b=false;
    bool result;
    result = a && b;
    cout << "a && b = " << result << endl;
    result = a || b;
    cout << "a || b = " << result << endl;
    result = !a;
    cout << "!a = " << result << endl;


    //step 2:
    bool c = false;
    int x = 0;
    result = (c || (x = 42));
    cout << "x = " << x;
}