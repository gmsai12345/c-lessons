#include <iostream>
using namespace std;
int main() {
    int principle,interest,rate,timee;
    cout << "enter principle";
    cin >> principle;
    cout << "enter rate";
    cin >> rate;
    cout << "enter time";
    cin >> timee;
    interest = (principle*rate*timee)/100;
    cout << interest;
    return 0;
    
}
