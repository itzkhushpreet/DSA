// from basics-basic maths used,sorting, hashing, few leetcode problems
#include <iostream>
#include <vector>

using namespace std;

// int main(){
//     //this one is for running sum in 1d array 
    
// class Solution {
// public:
//     vector<int> runningSum(vector<int>& nums) {
//         for (int i =1;i<nums.size();i++){
//             nums[i]=nums[i]+nums[i-1];

//         }
//         return nums;
//     }
// };
// //Given a binary array nums, return the maximum number of consecutive 1's in the array.

 

// // Example 1:

// // Input: nums = [1,1,0,1,1,1]
// // Output: 3
// // Explanation: The first two digits or the last three digits are consecutive 1s. The maximum number of consecutive 1s is 3.
// // Example 2:

// // Input: nums = [1,0,1,1,0,1]
// // Output: 2
// }
// class Solution {
// public:
//     int findMaxConsecutiveOnes(vector<int>& nums) {
//         int currentcount=0;
//         int maxcount=0;
//         for (int i=0; i< nums.size();i++){
//             if (nums[i] == 1){
//                 currentcount++;
//                 maxcount=max(maxcount,currentcount);
            
//             }
//             else{
//                 currentcount=0;
//             }
//         }
//         return maxcount;
//     }
// };
// class Solution {
// public:
//     int findNumbers(vector<int>& nums) {
//         int count = 0;

//         // for (int i =0; i<nums.size();i++){
//         //     for(int j in nums[i]){
//         //         if
//         //     }
//         // }
//         for (int i = 0; i < nums.size(); i++) {
//             int x = nums[i];
//             int digitcount=0;
//             if (x == 0) {
//                 digitcount = 1;
//             } else {
//                 while (x > 0) {
//                     x = x / 10;
//                     digitcount++;
//                 }
//             }
//             if (digitcount % 2 == 0) {
//                 count++;
//             }
//         }
//         return count;
//     }
// };
// int main(){
//     int prices=[7,6,4,3,1]
//     int minprice=0;
//     int maxprince=0;
//     for (int i =0; i<prices.size();i++){
//         minprice=min(prices[i]);
//         maxprice=max(prices[i]);


//     }
//     return minprice;
//     return maxprice;
// };
int main(){
    // cout<<"hello world";
    int rev;
    int num;
    cout<<"enter the value for which you want reverse"<<endl;
    cin>>num;
    while(num>0){
        int ld=num%10;
        
        rev=ld+rev*10;
        num=num/10;

    }
    cout<<rev<<endl;
}

// till sorting 