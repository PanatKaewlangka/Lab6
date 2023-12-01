#include<iostream>
using namespace std;

int main(){
    int number;
    int even = 0;
    int odd = 0;
    cout << "Enter an integer: ";
    cin >> number;
     while (number != 0)
     {
        if (number%2 == 0)
     {
        even++;
     }
     else
     {
        odd++;
     }
        cout << "Enter an integer: ";
         cin >> number;
     }
     cout << "#Even numbers = " << even <<"\n";
     cout << "#Odd numbers = " << odd;
    return 0;
}
