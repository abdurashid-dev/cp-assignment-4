//
//  main.cpp
//  assignment 4
//
//  Created by Abdurashid Abdumominov on 29/10/23.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
//    //Problem 1
//    int n;
//    cout << "Enter a number (n): ";
//    cin >> n;
//
//    cout << "Odd numbers: ";
//    for (int i = 1; i <= n; i++) {
//        if (i % 2 != 0) {
//            cout << i <<' ';
//        }
//    }
//
//    cout << "\nEven numbers: ";
//    for (int i = 1; i <= n; i++) {
//        if (i % 2 == 0) {
//            cout << i <<' ';
//        }
//    }
    
    //Problem 2
//    int n;
//    cout << "Enter a number (n): ";
//    cin >> n;
//
//    int sumOdd = 0;
//    int sumEven = 0;
//
//    for (int i = 1; i <= n; i++) {
//        if (i % 2 != 0) {
//            sumOdd += i;
//        } else {
//            sumEven += i;
//        }
//    }
//
//    cout << "Sum of odd numbers: " << sumOdd << endl;
//    cout << "Sum of even numbers: " << sumEven << endl;
    
//    //Problem 3
//    int n;
//    cout << "Enter the number of Fibonacci numbers to generate (N):";
//    cin >> n;
//
//    int first = 0;
//    int second = 1;
//    int sum = 0;
//
//    cout << "Fibonacci sequence: ";
//    for (int i = 0; i < n; i++) {
//        cout << first << " ";
//        sum += first;
//        int next = first + second;
//        first = second;
//        second = next;
//    }
//
//    cout << "\nSum of Fibonacci numbers: " << sum;
    
//    //Problem 4
//    int number;
//    cout << "Enter an integer: ";
//    cin >> number;
//
//    int sum = 0;
//
//    while (number != 0) {
//        sum += number % 10;
//        number /= 10;
//    }
//
//    cout << "Sum of digits: " << sum << endl;
//
//    if (sum % 5 == 0) {
//        cout << "Yes";
//    } else {
//        cout << "No";
//    }
    
    //Problem 5
    int n;
    cout << "Enter the number of rows for the pyramid: ";
    cin >> n;
    
    for (int i = 1; i <= n; i++) {
        // Print spaces for alignment
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }

        // Print asterisks in an odd sequence
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "*";
        }

        cout << endl;
    }
    return 0;
}
