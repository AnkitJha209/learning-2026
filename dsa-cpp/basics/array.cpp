#include<iostream>
using namespace std;

int main(){

    // declaration
    int min[101];
    cout << min[0] << endl; // if it is only declared then garbage value is present there
    

    // initialization
    int arr[5] = {10,20,30,40,50};
    cout << arr[4] << endl;

    int brr[] = {10,20,30,40};
    cout << brr[1] << endl;
    return 0;
}