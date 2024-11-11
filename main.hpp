#include <iostream>
using namespace std;

void getTwoValues(int& begin, int& end) {
    do {
        cout << "Enter two integer values (begin end): ";
        cin >> begin >> end;
        
        if (begin >= end) {
            cout << "Error: The first value must be less than the second value. Please try again.\n";
        }
    } while (begin >= end);
}

int getNextPrime(int begin) {
    int num = begin + 1;
    while (true) {
        int divisor = 2;
        while (divisor * divisor <= num && num % divisor != 0) {
            divisor++;
        }
        if (divisor * divisor > num) {
            return num;
        }
        num++;
    }
}

int getPrevPrime(int end) {
    int num = end - 1;
    while (num > 1) {
        int divisor = 2;
        while (divisor * divisor <= num && num % divisor != 0) {
            divisor++;
        }
        if (divisor * divisor > num) {
            return num;
        }
        num--;
    }
    return 2; // Smallest prime number
}