#include<iostream>
#include<vector>
using namespace std;

int main(){


    // creation
    vector<int> marks; // default size 

    vector<int> miles(10); // size is 10

    vector<int> distances(15, 0); // size is 15 and every block is filled with 0


    // iterator
    // -> it is used to traverse the vector simply
    // if i wanted to access the element at a particular iterator 
    // ex it = marks.begin()
    // element = *it
    // it++

    // begin()
    // marks.begin() is pointing towards the first element in the vector

    // end()
    // marks.end() is pointing towards the after the last element in the vector


    // cout << *marks.begin() << endl;


    // marks.push_back()
    // it will insert element in the marks vector
    // marks.pop_back()
    // it will pop the last element in the marks vector

    marks.push_back(10);
    marks.push_back(20);
    marks.push_back(30);
    marks.push_back(40);

    cout << *marks.begin() << endl;
    cout << *marks.end() << endl;

    cout << "SIZE : " << marks.size() << endl;
    
    marks.pop_back();
    
    cout << "SIZE : " << marks.size() << endl;


    // front and back are used to access the first and last element in vector
    cout << "FRONT : " << marks.front() << endl;
    cout << "BACK : " << marks.back() << endl;

    // marks.empty()
    // returns bool

    if(marks.empty() == true){
        cout << "VECTOR IS EMPTY" << endl;
    }else{
        cout << "VECTOR IS NOT EMPTY" << endl;
    }


    // index wise
    // u can access only the blocks that are assigned
    // cout << marks[0] << endl;
    // marks[0] = 100;
    // cout << marks[0] << endl;

    // vector<int> age;
    // // this throws an segmentation error
    // age[0] = 10;
    // cout << age[0] << endl;

    // u can also use the alternative for this that is .at()
    // cout << marks.at(0) << endl;



    // capacity() -> it tells us how much capacity of that particular vector
    // cout << marks.capacity() << endl;

    // reserve() -> we can reserve that much block with the help of this
    vector<int> newVector(20, 1);
    // cout << newVector.capacity() << endl; // it is giving zero
    // newVector.reserve(10);
    // cout << newVector.capacity() << endl; // it is giving ten

    // max_size() -> it will tell the max size of the vector we can have
    // cout << newVector.max_size() << endl;

    // clear() -> it is used to clear the vector and it's size 
    // cout << newVector.size() << endl;
    // newVector.clear();
    // cout << newVector.size() << endl;


    // insert(itr pos, value)
    // cout << marks.size() << endl;
    // marks.insert(marks.begin(), 57);
    // cout << marks.size() << endl;
    // cout << marks.at(0) << endl;


    // erase(itr postion) or erase(iterator first, iterator last)
    // cout << "Marks size: " << marks.size() << endl;
    // marks.erase(marks.begin(), marks.end());
    // cout << marks.size() << endl;


    // first.swap(second) -> then it will swap the content of those two vectors

    // for each loop
    // for(int i:marks){
    //     cout << i << " ";
    // }

    // traversing the vector using iterator

    // create an iterator
    // vector<int>::iterator it = marks.begin();
    // while(it != marks.end()){
    //     cout << *it << " ";
    //     it++;
    // }

    // 2d-vector
    vector<vector<int>> two_d_vector   (    4,         vector<int>(4,0));
    // 2d array         variable name   no. of rows    hr ek row me kya hoga

    // row count
    int totalRows = two_d_vector.size();
    cout << totalRows << endl;
    // column count
    int totalColumns = two_d_vector[0].size();
    cout << totalColumns << endl;


    // jagured/jagged array
    // means irregular columns
    vector<vector<int>> arr(4);
    arr[0] = vector<int> (4);
    arr[1] = vector<int> (2);
    arr[2] = vector<int> (5);
    arr[3] = vector<int> (3);

    return 0;
}