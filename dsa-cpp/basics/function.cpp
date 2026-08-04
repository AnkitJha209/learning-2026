#include<iostream>
using namespace std;

// void printCount(){
//     for(int i=1; i<=5; i++){
//         cout << i << " ";
//     }
// }

// int sum(int a, int b){
//     // we can not declare and define these function after main function

//     // hack we can declare it above and can define the function after main function
//     int totalSum = a+b;
//     return totalSum;
// }

// declaration 
// void printName();

// void print100no(){
//     for(int i=1; i<=100; i++){
//         cout << i << " ";
//     }
//     return;
// }

float simple_interest(int p, float r, int t){
    float si = (p * r * t)/100;
    return si;
}

int main(){

    // for(int i=1; i<=5; i++){
    //     cout << i << " ";
    // }
    // repeating the loop to print 1 to 5 again
    // cout << endl;
    // for(int i=1; i<=5; i++){
    //     cout << i << " ";
    // }

    // function usage to reduce repetition, simplfy complex task and make the code reusable

    // printCount();
    
    // cout << endl;
    
    // cout << printCount();
    
    // cout << endl;

    // int ans = sum(14, 1);
    // cout << ans << endl;
    // cout << sum(4,5) << endl;
    // printName();

    // print100no();


    cout << simple_interest(1000, 5.0, 2) << endl;

    return 0;
}


// definition of a functoin 
// void printName(){
//     cout << "Ankit" << endl;
// }



/*
    function can be void or non-void 
    non void means it can return something like int string array etc 
    
    syntax 
    return_type function name (input parameters) {
        // function body
    }

    ex:-
    int sum(int a, int b){
        return a+b;
    }
*/