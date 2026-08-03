#include<iostream>
#include <cmath>
using namespace std;

int main(){
    // int age = 25;
//  datatype varibaleName = value
    // cout << "The age is " << age << endl;
    // cout << sizeof(age) << endl;

    // int x;
    // cin >> x;
    // cout << x+age << endl;

    


    // int count = 5;
    // float share = 3.14;
    // char alphabet = 'A'; // only single quote should be there
    // double weight = 55.69887;
    // bool isMale = true;
    // bool isChild = 1;

    // cout << weight << endl;

    // // 2. Tell cout to fix the decimal and show 5 decimal places
    // cout << fixed << setprecision(5) << weight << "\n"; 


    // decimal to binary
    // int number = 10;
    // int res = 0;
    // int place = 1;
    // while(number > 0){
    //     int remainder = number % 2;
    //     res += remainder * place; 
    //     place *= 10;            
    //     number /= 2;
    // }
    // cout << res;


    int binary = 1111;
    double  res2 = 0;
    int rem;
    int count = 0;
    while(binary > 0){
        rem = binary % 2;
        if(rem == 1){
            res2 += pow(2, count);
        }
        count++;
        binary /= 10;
    }
    cout << res2;
    return 0;
}