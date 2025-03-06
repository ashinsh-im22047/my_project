// addition.cpp

#include <iostream>
using namespace std;

// Function to add two numbers
int add(int a, int b) {
    return a + b;
}
//Add a new feature
int mul(int x,int y){
    return x*y ;
}

int main() {
    int num1, num2;

    // Taking input from the user
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;
    
    int k=num1+num2;

    // Displaying the result of the addition
    cout << "The sum of " << num1 << " and " << num2 << " is: " << add(num1, num2) << endl;
    cout << "The sum of " << num1 << " and " << num2 << " is: " << mul(num1, num2) << endl;

    return 0;
}
