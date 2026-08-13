#include<iostream>
#include<set>
#include<unordered_set>
using namespace std;

int main(){

    set<int> st;
    unordered_set<int> st2;

    st.insert(10);
    st.insert(20);
    st.insert(30);
    st.insert(30);

    set<int>::iterator it = st.begin();
    while(it != st.end()){
        cout << *it << " ";
        it++;
    }

    cout << endl << st.size() << endl;

    if(st.empty()){
        cout << "Set is empty" << endl;
    }else{
        cout << "Set is not empty" << endl;
    } 
    
    if(st.count(10) == 1){
        cout << "Found" << endl;
    }else{
        cout << "Not Found" << endl;
    }

    return 0;
}