#include<iostream>
#include<queue>
using namespace std;

int main(){
    deque<int> dq;

    dq.push_back(100);
    dq.push_back(200);

    dq.push_front(10);
    dq.push_front(20);

    cout << dq.size() << endl;
    
    dq.pop_back();
    dq.pop_front();
    
    cout << dq.size() << endl;
    cout << dq.front() << endl;
    cout << dq.back() << endl;

    if(dq.empty()){
        cout << "Deque is empty" << endl;
    }else{
        cout << "Deque is not empty" << endl;
    }

    for(auto num : dq){
        cout << num << " ";
    } 
    cout << endl;


    cout << dq[0] << endl;

    cout << dq.at(1) << endl;

    dq.clear(); 


    return 0;
}