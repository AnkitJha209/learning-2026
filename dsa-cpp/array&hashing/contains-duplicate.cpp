// Contains Duplicate
// Given an integer array nums, return true if any value appears more than once in the array, otherwise return false

// ex - 
// input - nums = [1,2,3,3];
// output - true

// Brute force approach would be to start the loop and in that check every element if it is equal to that element means we will use two loops nested in each other 


// bool hasDuplicate(vector<int>& nums){
//     for(int i = 0; i < nums.size()-1; i++){
//         for(int j = i+1; j<nums.size(); j++){
//             if(nums[i] == nums[j]){
//                 return true;
//             }
//         }
//     }
//     return false;
// }

// the time complexity for this solution will be O(n^2) where n are the elements in the array 
// space complexity will be O(1)


// there is better solution to it which is just the sort the element and check if the adjacent elements are equal or not 

// bool hasDuplicates(vector<int>& nums){
//     sort(nums.begin(), nums.end());
//     for(int i=1; i<nums.size(); i++){
//         if(nums[i] == nums[i-1]){
//             return true;
//         }
//     }
//     return false;
// }

// the time complexity will be O(nlog n) where n is the no. of elements in the vector 
// space complexity will be O(1) or O(n) based on the sorting algo.


// So the intiution for the optimal approach will be to use a set and check if the element is already present in the set if not then push and continue and if we found the element then return true

// bool hasDuplicate(vector<int>& nums){
//     unordered_set<int> st;
//     for(auto num : nums){
//         if(st.contains(num)){
//             return true;
//         }
//         st.insert(num);
//     }
//     return false;
// }

// the time complexity for this will be O(n) because we are traversing the vector and inserting an element in the set takes O(1) so O(n * 1) => O(n)
// space complexity is O(m) where m are the distinct elements present in the vector
// we can also assume the space complexity in the worst case will be O(n) where m == n


// Another approach for this would be just dump the whole vector into the set and check the size if they are equal or not if they are equal then no element is repeated and if there are elements 

// bool hasDuplicates(vector<int>& nums){
//     unordered_set<int> st(nums.begin(), nums.end())
//     return st.size() != nums.size();
// }

// the time complexity will be the same as the above one O(n) for dumping into the set 
// space complexity will also be same O(n)