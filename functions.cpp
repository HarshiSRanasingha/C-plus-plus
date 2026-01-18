#include <iostream>
using namespace std;

// Function to calculate factorial
int factorial(int n) {
    int fact = 1;
    for(int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

// Function to check if a number is prime
bool isPrime(int n) {
    if(n <= 1) return false;
    for(int i = 2; i * i <= n; i++) {
        if(n % i == 0)
            return false;
    }
    return true;
}

// Function to calculate sum of elements in an array
int arraySum(int arr[], int size) {
    int sum = 0;
    for(int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int choice;

    do {
        cout << "\n=== Function Demo Menu ===\n";
        cout << "1. Calculate Factorial\n";
        cout << "2. Check Prime Number\n";
        cout << "3. Sum of Array Elements\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1: {
                int num;
                cout << "Enter a number: ";
                cin >> num;
                cout << "Factorial of " << num << " is " << factorial(num) << endl;
                break;
            }
            case 2: {
                int num;
                cout << "Enter a number: ";
                cin >> num;
                if(isPrime(num))
                    cout << num << " is a prime number.\n";
                else
                    cout << num << " is not a prime number.\n";
                break;
            }
            case 3: {
                int size;
                cout << "Enter number of elements: ";
                cin >> size;
                int arr[size];
                cout << "Enter " << size << " elements:\n";
                for(int i = 0; i < size; i++)
                    cin >> arr[i];
                cout << "Sum of array elements: " << arraySum(arr, size) << endl;
                break;
            }
            case 4:
                cout << "Exiting program...\n";
                break;
            default:
                cout << "Invalid choice! Try again.\n";
        }
    } while(choice != 4);

    return 0;
}