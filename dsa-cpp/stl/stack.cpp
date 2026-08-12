#include<iostream>
#include<stack>
using namespace std;

int main(){


    stack<int> st;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    cout << st.size() << endl;

    st.pop(); // back se hoga

    cout << st.top() << endl;

    if(st.empty()){
        cout << "Stack is empty" << endl;
    }else{
        cout << "Stack is not empty" << endl;
    }

    // for(auto num : st){
    //     cout << num << endl;
    // }
    return 0;
}