// functionExample.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//function prototype
int sumOfNumbers(int x, int y);
void differenceOfNumbers(int x, int y);



int main()
{
    int a, b, c;
    cout << "Enter two values: ";
    cin >> a >> b;
    cout << "The sum of numbers = " << sumOfNumbers(a, b) << endl; //calling the function
    differenceOfNumbers(a,b); //calling with parameter
    return 0; //code exits
}

/*
//function definition - no return value and no parameter
void sumOfNumbers() {
    int a, b, c;
    cout << "Enter two values: ";
    cin >> a >> b;
    c = a + b;
    cout << "c= " << c << endl;
}
*/

//function has parameters
//void sumOfNumbers(int x, int y) {
//
//    cout << "a + b = " << x + y << endl;
//
//}

//function with return value and parameters
int sumOfNumbers(int x, int y) {
    return (x + y);
}



/*
//void means nothing , this function returns no value to the main function. Main function is not passing any value to this function
void differenceOfNumbers() {
    int a, b, c;
    cout << "Enter two values: ";
    cin >> a >> b;
    c = a - b;
    cout << "c= " << c << endl;

}
*/

//function with parameters
void differenceOfNumbers(int x, int y) {
    cout << "a - b = " << x - y << endl;
}