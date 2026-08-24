// Two sum
// Given an array of integers nums and an integer target, return the indices i and j and sucht num[i] + nums[j] == target and i != j

// ex 
// input - nums = [3,4,5,6], target = 7
// output - [0,1]

// nested loops 
// intuition 
// we can just traverse the array and if we found element which is target - nums[i] == current then we should return their index and we need to mind to firstly return the smaller index first 

// vector<int> twoSum(vector<int>& nums, int target){
//     for(int i=0; i<nums.size(); i++){
//         for(int j=i+1; j<nums.size(); j++){
//             if(nums[j] == target - nums[i]){
//                 return {i, j};
//             }
//         }
//     }
//     return {};
// }

// time complexity will be O(n^2) 
// space complexity O(1) we are not using any extra space to solve this problem

// hashmap
// intuition
// we can use a hash map to store the value with their index and if we found a key which is equal to the target - num[i] we will return the value of that element and the ith value of current num

// vector<int> twoSum(vector<int>& nums, int target){
//     unordered_map<int, int> mp;
//     for(int i=0; i<nums.size(); i++){
//         if(mp.contains(target - nums[i])){
//             return {mp[target - nums[i]]};
//         }
//         mp[nums[i]] = i;
//     }
//     return {};
// }

// time complexity will be O(n) because we are inserting n element in into the hash map in the worse condition and inserting an element in the map will be O(1) ultimately giving us O(n * 1) => O(n)
// space complexity will be O(n) because of the map 