/*Created by Michel Brochu - 5/2/2023
Statements and Operators Challenge*/

#include <iostream>

using namespace std;

int main() {
    
    int amount {};
    int rest {};
    const int dollars {100};
    const int quarters {25};
    const int dimes {10};
    const int nickels {5};
    
    cout << "Enter an amount in cents: ";
    cin >> amount;
    
    if (amount >= 0){
        cout << "You can provide this change as follows: " << endl;
        
        cout << "dollars  : " << amount / dollars << endl;
        rest = amount % dollars;
        
        cout << "quarters : " << rest / quarters << endl;
        rest = rest % quarters;
        
        cout << "dimes    : " << rest / dimes << endl;
        rest = rest % dimes;
        
        cout << "nickels  : " << rest / nickels << endl;
        rest = rest % nickels;
        
        cout << "pennies  : " << rest << endl;
    }else{
        cout << "You have to enter a number above zero. " << endl;
    }
    
    return 0;
}