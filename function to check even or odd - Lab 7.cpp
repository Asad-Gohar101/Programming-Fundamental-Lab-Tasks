#include<iostream>
using namespace std;
int evenOrOdd(int number) {
    if (number % 2 == 0) {
        cout<<"even number"<<endl;
    } else {
        cout<<"odd number"<<endl;
    }
    return 0;
}
int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;
    evenOrOdd(num);
}