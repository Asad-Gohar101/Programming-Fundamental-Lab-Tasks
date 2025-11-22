#include <iostream>
using namespace std;

int main() {
int totalBooks;
    cout << "How many books? ";
    cin >> totalBooks;

    int b = 1; 

    while (b <= totalBooks) {

        cout << "\nBook " << b << endl;
        int fine = 5;  
        int day = 1;   
        
        // loop to double fine until it crosses 1000
        while (fine <= 1000) {
            cout << "Day " << day << " Fine: " << fine << endl;
            fine *= 2;   // doubling fine
            day++;       // next day
        }

        b++;  // move to next book
    }

    cout << "All books processed." << endl;
    return 0;
}
