#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main(){

    // creation
    unordered_map<string, string> table;
    
    // insertion
    table["in"] = "India"; 
    table.insert(make_pair("en", "England"));

    pair<string, string> p;
    p.first = "br";
    p.second= "Brazil";
    table.insert(p);


    cout << table.size() << endl;
    // table.clear();
    // cout << table.size() << endl;

    // if(table.empty()){
    //     cout << "Map is empty" << endl;
    // }else{
    //     cout << "Map is not empty" << endl;
    // }

    cout << table.at("in") << endl;
    table.at("in") = "Indonesia";
    cout << table.at("in") << endl;
    table["in"] = "India";
    cout << table.at("in") << endl;

    unordered_map<string, string>::iterator it = table.begin();
    // while(it != table.end()){
    //     cout << (*it).first << " " << (*it).second << endl; 
    //     it++;
    // }
    while(it !=table.end()){
        pair<string, string> pt = *it;
        cout << pt.first << " " << pt.second << endl; 
        it++;
    }

    if(table.find("in") != table.end()){
        cout << "Key found " << endl;
    }else{
        cout << "Key not found" << endl;
    }

    if(table.count("in") == 0){
        cout << "Key not found" << endl;
    }else{
        cout << "Key found" << endl;
    }


    return 0;
} 