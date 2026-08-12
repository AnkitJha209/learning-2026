// list
// doubly-linked list.
// Allows fast insertions and removals anywhere in the list
// no random access like vector

#include<iostream>
#include<list>
using namespace std;


int main(){


    // creation
    list<int> myList;


    // insertion 
    myList.push_back(10);
    myList.push_back(20);
    myList.push_back(30);
    myList.push_back(40);

    myList.push_front(5);


    myList.pop_back();
    myList.pop_front();

    // size
    cout << myList.size()<< endl;
    myList.clear();
    cout << myList.size()<< endl;

    if(myList.empty() == true){
        cout << "List is empty" << endl;
    }

    myList.push_back(10);
    myList.push_back(10);
    myList.push_back(20);
    cout << myList.front() << endl;
    cout << myList.back() << endl;



    for(auto ele : myList){
        cout << ele << " ";
    }
    cout << endl;

    myList.remove(10);

    for(auto ele : myList){
        cout << ele << " ";
    }
    cout << endl;

    myList.insert(myList.begin(), 15);

    for(auto ele : myList){
        cout << ele << " ";
    }
    return 0;
}