/*
Power wisdon courage
*/

#include <iostream>
#include <vector>
using namespace std;

class TriangleNumberCalculator 
{
    
public:

// void setInt (int integer){
//     if (integer <= 0){
//         h_Int = 0;
//     }
//     else h_Int = integer;
// }

// int getInt () const{
//     return h_Int;
// }

int value(int n_in){
    
    if (n_in <= 0){
        return 0;
    }

    return n_in + value(n_in - 1);
}

int add(int n, int m){
    return value(n) + value(m);
}

int subtract (int n, int m){
    return value(n) - value(m);
}

private:

};

int main()
{
    ////// Driver program //////

    TriangleNumberCalculator tn;
    cout << "\nTriangle numbers for 1, 2, 3, 4, 5\n";

    cout << tn.value(1) << endl;
    cout << tn.value(2) << endl;
    cout << tn.value(3) << endl;
    cout << tn.value(4) << endl;
    cout << tn.value(5) << endl;

    /////// Edge case check ///////

    cout << "\nTesting 0 and -1 (should return zero for all numbers 0 or below):\n";
    
    cout << tn.value(0) << endl;
    cout << tn.value(-1) << endl;

    //////// Test of add /////////
    cout << "\nAdding the triangle numbers  4 and 5, should be 25.\n";

    cout << tn.add(4, 5);

    //////// Test of subtraction /////////
    cout << "\nAdding the triangle numbers  4 and 5, should be -5.\n";

    cout << tn.subtract(4, 5);

    cout << "\nEnd of program. Good bye!";

}
