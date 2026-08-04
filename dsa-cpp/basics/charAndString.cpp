// char uppercase = ch - 'a' + 'A';
// char lowercase = ch - 'A' + 'a';

#include<iostream>
#include<string.h>
using namespace std;

// int getLength(char arr[]){
//     int count = 0;
//     int index = 0;
//     while(arr[index] != '\0'){
//         count++;
//         index++;
//     }
//     return count;
// }

// void concatString(char arr1[], char arr2[]){
//     // my approach
//     // int aLength = 0;
//     // int bLength = 0;
//     // int count = 0;
//     // char newArr[8];
//     // while(arr1[aLength] != '\0'){
//     //     newArr[count] = arr1[aLength];
//     //     count++;
//     //     aLength++;
//     // }
//     // while(arr2[bLength] != '\0'){
//     //     newArr[count] = arr2[bLength];
//     //     count++;
//     //     bLength++;
//     // }
//     // cout << newArr << endl;

//     int aIndex = getLength(arr1);
//     int bIndex = 0;
//     while(arr2[bIndex] != '\0'){
//         arr1[aIndex] = arr2[bIndex];
//         aIndex++;
//         bIndex++;
//     }
//     arr1[aIndex] = '\0';
//     cout << arr1;
// }


// void copyArray(char src[], char out[]){
//     int aIndex = 0;
//     int bIndex = 0;
//     while(src[aIndex] != '\0'){
//         out[bIndex] = src[aIndex];
//         aIndex++;
//         bIndex++;
//     }
//     out[bIndex] = '\0';
//     cout << out << endl;
// }

// bool comparison(char a[], char b[]){
//     int aIndex = 0;
//     int bIndex = 0;
//     int aLength = getLength(a);
//     while(a[aIndex] <= aLength){
//         if(a[aIndex] != b[bIndex]){
//             return false;
//         }else{
//             aIndex++;
//             bIndex++;
//         }
//     }
//     return true;
// }



void reverseString(string s){
    int i=0;
    int j=s.length()-1;
    while(i<j){
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        i++;
        j--;
    }
    cout << s << endl;
    return;
}

bool checkPalindrome(string s){
    int i=0;
    int j=s.length()-1;
    while(i<j){
        if(s[i] == s[j]){
            i++;
            j--;
            continue;
        }else{
            return false;
        }
    }
    return true;
}

int main(){
    // termination of char arr should be by '\0'

    // declare
    // char arr[10];

    // //cout << arr[3] << endl;

    // char brr[10] = "ankit";
    // cout << brr[1] << endl;

    // cout << brr[6] << endl;
    
    // int asciiValue = brr[6];
    // // the asciivalue should only give 0 if there is null character present there
    // cout << asciiValue << endl;

    // char arr[4];
    // arr[0] = 'a';
    // arr[1] = 'b';
    // arr[2] = '\0';

    // cout behaviour

    // int arr[] = {1,2,3,4};
    // cout << arr << endl;
    // // this will print the base address

    // char brr[] = {'a', 'n', 'k', 'i', 't'};
    // // it prints whole value of an array
    // cout << brr << endl;

    // // same as loop
    // for(int i=0; i<=5; i++){
    //     cout << brr[i] << " ";
    // }

    // common operation
    // char arr[] = "ankit";
    // cout << getLength(arr) << endl;


    // concatenation
    // char a[] = "ankit";
    // char b[] = "jha";
    // concatString(a, b);


    // copying
    // char a[] = "ankit";
    // char b[100];
    // copyArray(a, b);

    // comparison
    // char a[] = "Ankit";
    // char b[] = "Ankit";
    // bool result = comparison(a, b);
    // cout << result << endl;
    // return 0;

    // Library functions
    // strcpy()
    // strlen()
    // strcmp()
    // strcat()


    // strcpy
    // char actual[] = "ankit";
    // char ans[100];
    // strcpy(ans, actual);
    // cout << ans << endl;

    // // strlen()
    // cout << strlen(actual) << endl;

    // // strcmp()
    // // compare it with 0 if it is true
    // if(strcmp(actual, ans) == 0){
    //     cout << true;
    // }else{
    //     cout << false;
    // }

    // strcat(actual, ans);
    // cout << actual;
    // return 0;








    // string ---------------------------
    // dynamic in size
    // no need to put null character it is doing that on it's own

    // declaration
    // string name;
    // name.push_back('a');
    // name.push_back('b');
    // name.push_back('c');


    // // initialization
    // string surname = "Jha";

    // // update
    // surname = "singh";

    // library function

    // string str = "ankit";
    // cout << "length : " << str.length() << endl; 


    // str.append("jha");
    // cout << str << endl;
    
    // // str.insert(pos, temp); temp string
    // cout << str.insert(5, "123") << endl;

    // // str.substr(pos, len);
    // cout << str.substr(5,3) << endl;

    // str.compare(str1, str2) == 0 ? then they are equal

    // cout << (str.compare("ankit") == 0) << endl;

    // // str.find(str2)
    // string a = "My name is ankit jha";
    // string b = "ankit";

    // int ans = a.find(b);
    // // size_t ans = a.find(b);
    // // size_t instead of int because size_t is an unsigned integral type

    // // if(ans == string::npos)
    // if(ans == -1 ){
    //     cout << "B string not found in a string";
    // }else{
    //     cout << "Found" << endl;
    // }



    reverseString("Ankit");

    cout << checkPalindrome("NamaN") << endl;

    return 0; 


}