#include<iostream>
#include<queue>
using namespace std;

int main(){

    // creation
    priority_queue<int> pq;
    // max heap -> max valu -> highest priority
    pq.push(10);
    pq.push(25);
    pq.push(2);

    cout << pq.top() << endl;

    pq.pop();
    cout << pq.top() << endl;

    if(pq.empty()){
        cout<< "PQ is empty" << endl;
    }else{
        cout<< "PQ is not empty" << endl;
    }
    
    
    // min-heap
    priority_queue<int, vector<int>, greater<int>> pq2;
    pq2.push(10);
    pq2.push(25);
    pq2.push(2);
    
    cout << pq2.top() << endl;
    
    
    return 0;
}