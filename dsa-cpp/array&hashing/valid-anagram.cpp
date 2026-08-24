// Valid Anagram
// Given two strings s and t, return true if the two strings are anagrams of each other, otherwise return false;

// ex - 
// input - s = "racecar", t= "carrace"
// output - ture

// sorting 
// intuition 
// so what we will do is we will sort the both of the strings and check if they are equal or not if they are then they are anagrams of each other
// the base case can we firstly check if they have equal size if not then we will return false there only we do not need to check if they are equal or not because they will never be equal

// bool isAnagram(string s, string t){
//     if(s.length() != t.length()){
//         return false;
//     }

//     sort(s.begin(), s.end());
//     sort(t.begin(), t.end());

//     return s == t;
// }

// time complexity will be O(nlog n + mlog m) due to sorting of the character in the string where m is length of string t and n is length of string s
// space complexity will be O(1) or O(n+m)  based on the sorting algo.

// Hash set array or vector
// so we know from the constraints that s and t consist of only lowercase english letters
// intuition 
// so what we can do is we can create a vector of 26 size filled with zeroes and we can iterate over both the strings one by one and from the first string we will increment the index of the letter by one and from other string we will decrement by one and at last we will traverse the vector we have created and if we encounter a number different than zero that means the one of the string is different from other. Otherwise it will be always zero if the strings are anagrams of each other

// bool isAnagram(string s, string t){
//     if(s.length() != t.length()){
//         return false;
//     }
//     vector<int> v(26, 0);

//     for(char ch : s){
//         v[ch - 'a']++;
//     }
//     for(char ch : t){
//         v[ch - 'a']--;
//     }
//     for(auto num : nums){
//         if(num != 0){
//             return false;
//         }
//     }
//     return true;
// }

// the time complexity for these will be O(n+m) where n will be the length of the string s and m will be the length of string t
// space complexity will be O(26) which will be neglected and it will be O(1) ultimately 
