// Group Anagrams
// Given an array of strings strs, group all anagrams together into sublists. You may return the output in any order

// ex
// input - strs = ["act", "cat", "tops", "stop", "pots"]
// output - [["hat"], ["act", "cat"], ["stop", "tops", "pots"]]

// sort and hash maps
// intuition
// We can sort the string and check it is already present in the map if it is already then we append string as the value for the sorted string as the key 
// for ex take string "act" sort it 
// it will "act" -> ["act"]
// then "cat" sort it "act"
// it will append "act" -> ["act", "cat"]

// vector<vector<string>> groupAnagrams(vector<string>& strs){
//     unordered_map<string, vector<string>> mp;
//     for(auto str: strs){
//         string cpy = str;
//         sort(cpy.begin(), cpy.end());

//         mp[cpy].push_back(str);
//     }
//     vector<vector<string>> res;
//     for(auto val: mp){
//         res.push_back(val.second);
//     }
//     return res;
// }

// time complexity for this will be O(n mlogm) where n are the no. of strings and m is the longest string among them
// space complexity will be O(n*m) for creating a map.


// the problem in the above solution is we are sorting the string which is taking a hell lot of time 
// what we can do to improve this approach is build something unique for the key which will be same for all the anagrams

// making a unique key
// intuition
// so in the question in constraints it is specified that strs[i] is made up of lowercase english letters only
// what we can do is we can take the string and for every character out there they will give us so we will create a vector of 26 letter every time we will get a string and create unique string like this for cat it will be 101000000001... but this will not suffice there is one edge problem here what if the character in a string will repeat 10 times suposse the string is something like this "aaaaaaaaaab" -> the unique for this would 101 but notice it is changing the sequence because it is giving us 10 so we will use , in between like this 10,1,0,0, etc etc

// vector<vector<string>> groupAnagrams(vector<string>& strs){
//     unordered_map<string, vector<string>> mp;
//     for(auto str : strs){
//         vector<int> count(26, 0);
//         for(char ch: str){
//             count[ch - 'a'];
//         }
//         string key = to_string(count[0])
//         for(int i=1; i<count.size(); i++){
//             key += ',' + count[i];
//         }
//         mp[key].push_back(str);
//     }
//     vector<vector<string>> res;
//     for(auto val: mp){
//         res.push_back(val.second);
//     }
//     return res;
// }

// time complexity will be O(n*m) where n is the no. strings and m is length of string
// space complexity O(n) because of the unordered map
