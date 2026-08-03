#include<iostream>
using namespace std;

int main(){
    // int num1 = 10;
    // float num2 = 5.5;
    // float result = num1 + num2;
    // int result2 = num1 + num2;
    // cout << "Result : " << result << endl; // Implicit conversion of num1 from int to float -- it is giving me 15.5

    // cout << "Result2 : " << result2 << endl; // this is giving 15 because it truncates the value from 15.5 to 15 because int can not store decimal values | Here two times implicit casting is there 



    // char to int
    // char ch = 'A';
    // int a = ch + 1; // it converts the char into int A -> 65
    // char b = a; // then it automatically converts the 66 into char which B
    // cout << a << endl;
    // cout << b << endl;



    // Explicit Type Casting
    // Manual Type Conversion
    // Allows you to explicitly specify the desired data type during an assignment or operation

    int num1 = 10;
    float num2 = 5.5;
    float result = num1 + (int) num2; // expilicitly told him to convert num2 to int before addition operation 
    cout << result << endl;

    // double to int
    double pi = 3.14159265;
    int intPI = (int)pi;
    cout << intPI << endl;

    // float to char
    float number = 65.75;
    char charValue = (char)number;
    cout << "Char : " << charValue << endl;

    // int to float 
    // int/int = int | float/int = float | int/float = float
    int a = 10;
    int  b = 3.0;
    float c = a/((float)b);
    cout << c << endl;
    return 0;
}