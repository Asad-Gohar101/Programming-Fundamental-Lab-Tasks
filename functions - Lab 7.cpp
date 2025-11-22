#include <iostream> //As it is a long program so I have added comments for my better understandiong 
using namespace std;

// showing the menu options
void menu() {
    cout << "\n1) Even or Odd";
    cout << "\n2) Count Digits";
    cout << "\n3) Sum of Digits";
    cout << "\n4) Check Prime";
    cout << "\n5) Exit";
    cout << "\nEnter choice: ";
}
// to get number from user (just to avoid repeating code)
int getNum() {
    int x;
    cout << "Enter a number: ";
    cin >> x;
    return x;
}
void evenOdd(int n) {
    if (n % 2 == 0)
        cout << n << " is Even\n";
    else
        cout << n << " is Odd\n";
}
void countDig(int n) {
    int c = 0;

    // special case for 0
    if (n == 0) c = 1;
    else {
        // counting by dividing by 10 each time
        while (n != 0) {
            n /= 10;
            c++;
        }
    }
    cout << "Digits = " << c << endl;  // printing here only
}
// function to sum digits and print result
void sumDig(int n) {
    int s = 0;
    if (n < 0) n = -n; // handling negative numbers

    // adding digits one by one
    while (n > 0) {
        s += n % 10;
        n /= 10;
    }
   cout << "Sum of digits = " << s << endl;
}
bool isPrime(int n) {
    if (n <= 1) return false; // primes only start from 2
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
   return true;
}
int main() {
    int choice;

    do {
        menu(); // show menu
        cin >> choice;

        if (choice == 1) {
            int n = getNum();
            evenOdd(n);

        } else if (choice == 2) {
            int n = getNum();
            countDig(n);

        } else if (choice == 3) {
            int n = getNum();
            sumDig(n);

        } else if (choice == 4) {
            int n = getNum();

            // printing result inside main because return type is bool
            if (isPrime(n))
                cout << n << " is Prime\n";
            else
                cout << n << " is NOT Prime\n";
        }
    } while (choice != 5); // loop until user selects exit
    cout << "Program Ended.\n";
    return 0;
}
