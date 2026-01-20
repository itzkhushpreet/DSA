// from arrays #include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include<array>
#include<algorithm>
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
// int main(){
//     // cout<<"hello world";
//     int rev;
//     int num;
//     cout<<"enter the value for which you want reverse"<<endl;
//     cin>>num;
//     while(num>0){
//         int ld=num%10;
        
//         rev=ld+rev*10;
//         num=num/10;

//     }
//     cout<<rev<<endl;
// }
//calculating the hcf of two number
// int main(){
//     int n1;
//     int n2;
//     cout<<"enter the value of n1 "<<endl;
//     cin>>n1;
//     cout<<"enter the vlaue of n2"<<endl;
//     cin>>n2;
//     // cout<<n1<<n2;
//     if ( n1<n2){
//         n1=n1+n2;
//         n2=n1-n2;
//         n1=n1-n2;
//     }
//     else{
//         n1=n1;
//         n2=n2;
//     }
//     cout<<"the value of n1 is "<<n1<<endl;
//     cout<<"the value of n2 is "<<n2<<endl;
//     // return 0;
//     while(n2!=0){
//         int rem=n1%n2;
//         n1=n2;
//         n2=rem;
//     }
//     cout<<"the hcf of n1 and n2 will be"<<n1<<endl;
//     return 0;
// }
// calculating hte armstrong number
// int main(){
//     int num;
//     cout<<"enterr the number for which you want to know if it is armstrong"<<endl;
//     cin>>num;
//     int temp= num;
//     int original=num;
//     int sum=0;
//     // int digit;
//     int power=0;
//     while(temp>0){
//         power++;
//         temp=temp/10;
//     }
//     temp=num;
//     while(temp>0){
//        int  digit=temp%10;
//         sum=sum+pow(digit,power);
//         temp=temp/10;
//     }
//     if (sum==original){
//         cout<<"it is an armstrong number";
//     }
//     else{
//         cout<<"it is not an armstrong number";
//     }
//     return 0;
// }
// to print all the divisors of number
// int main(){
//     int num;
//     cout<<"enter teh value"<<endl;
//     cin>>num;
//     for (int i=1;i<num;i++){
//         if(num%i==0){
//             cout<<i<<" ";
//         }
        
//     }
//     return 0;
// }
// void printNumbers(int n) {
//    if (n == 0)
//         return;
//     cout << n << " ";//for n to 1 numbers
//     printNumbers(n - 1);
//     // cout << n << " ";//for 1 to n number
     
// }

// int main() {
//     int n;
//     cout << "Enter n: ";
//     cin >> n;

//     printNumbers(n);
//     return 0;
// // }
// void sum(int n){
//     if(n==0)
//     return;
//     return n+sum(n-1)
// }
// int main() {
//     int n;
//     cin >> n;
//     cout << sum(n);
//     return 0;
// }
// int main(){
//     int n;
//     cout<<"enter the size of the array"<<endl;
//     cin>>n;
//     int arr[n];
//     for (int i=0; i<n;i++){
//         cout<<"enter the value of elements"<<endl;
//         cin>>arr[i];
//     }
//     //precomputation phase
//     int hash[13]={0};
//     for(int i=0;i<n;i++){
//         hash[arr[i]]+=1;
//     }
//     int q;
//     cout<<"enter the number of quesries"<<endl;
//     cin>>q;
//     while(q--){
//         int number;
//         cout<<"enter the values of number"<<endl;
//         cin>>number;
//         // cout<<hash[number]<<endl;
//     }
//     // cout<<hash[number]<<endl;//it is not supposed to be here

//     return 0;

// }
// int main(){
//     int n;
//     cout<<"enter the size of the array"<<endl;
//     cin>>n;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cout<<"enter the"<<i+1<<" value of the array"<<endl;
//         cin>>arr[i];
//     }
//     int hash[13]={0};
//     for(int i=0; i<n; i++){
//         hash[arr[i]]+=1;
//     }
//     int q;
//     cout<<"enter how many queries you want"<<endl;
//     cin>>q;
//     while(q--){
//         int number;
//         cout<<"enter the value of query"<<endl;
//         cin>>number;
//         cout<<hash[number]<<endl;
//     }
//     return 0;
// // }
// int main(){
//     string s;
//     cout<<"enter the string here"<<endl;
//     cin>>s;
// //precomputation phase
// int hash[26]={0};
// for(int i=0;i<s.size();i++){
//     hash[s[i]-'a']++;
// }



//     int q;
//     cout<<"enter the number of queries"<<endl;
//     cin>>q;
//     while(q--){
//         char c;
//         cout<<"enter the value of char"<<endl;
//         cin>>c;
//         cout<<hash[c-'a']<<endl;
//     }
//     return 0;
// // }
// int main(){
//     int nums[]={3,2,1};
//     for(int i=0; i<2;i++){
//         if(nums[i]>nums[i+1]){
//             int temp=nums[i];
//             nums[i]=nums[i+1];
//             nums[i+1]=temp;
//         }
       
//     }
//     for(int i=0;i<3you;i++){
//         cout<<nums[i]<<" ";
//     }
//     return 0;
// }
// trying the seledtion sort 
// void swap(){
    
// }
// void selection_sort(int arr[],int n){
//     // for(int i=0;i<n-2;i++){
//     //     int mini=i;
//     //     for(int j=i;j<n-1;j++){
//     //         if(arr[j]<arr[mini]){
//     //             mini=j;
//     //         }
//     //     }
//       for(int i=0;i<n-1;i++){
//         int mini=i;
//         for(int j=i+1;j<n;j++){
//             if(arr[j]<arr[mini]){
//                 mini=j;
//             }
//         }
//         int temp;
//         temp=arr[mini];
//         arr[mini]=arr[i];
//         arr[i]=temp;
//     }
// }
// void bubble_sort(int arr[],int n){
//     for(int i=0;i<n-1;i++){
//         for(int j=0;j<n-i-1;j++){
//             if (arr[j]>arr[j+1]){
//                 swap(arr[j],arr[j+1]);
//             }
//         }
//     }
// }
// void insertion_sort(int arr[],int n){
//     for(int i=1;i<n;i++){
//         int curr=arr[i];
//         int prev=i-1;
//         while(prev>=0 && arr[prev]>curr){
//             arr[prev+1]=arr[prev];
//             prev--;
//         }
//         arr[prev+1]=curr;
//     }
// }
// void recursive_bubble(int arr[],int n){
//     if(n==1){
//         return;
//     }
//     for(int i=0;i<n-1;i++){
//         if(arr[i]>arr[i+1]){
//             swap(arr[i],arr[i+1]);
//         }
//     }

// }
// void recursive_insertion(int arr[],int n){
//     if(n==1){
//         return;
//     }
//     for(int i=1;i<n;i++){
//         int curr=arr[i];
//         int prev=i-1;
//         while(prev>=0 && arr[prev]>curr){
//             arr[prev+1]=arr[prev];
//             prev--;
//         }
//         arr[prev+1]=curr;
//     }

// }

// int main(){
//     int n;
//     cout<<"enter the number of elements in an array"<<endl;
//     cin>>n;
//     int arr[n];
//     for(int i =0; i<n;i++){
//         // int value;
//         cout<<"enter the value of the arrays"<<endl;
//         cin>>arr[i];
//     }
//     // selection_sort(arr,n);
//     // bubble_sort(arr,n);
//     // insertion_sort(arr,n);
//     // recursive_bubble(arr,n);
//     recursive_insertion(arr,n);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
    
    
// }
// merge sort algorithum
// void merge(vector<int>&arr,int st,int mid,int end){
//     vector<int>temp;
//     int i=st;
//     int j=mid+1;
//     while(i<=mid && j<=end){
//         if(arr[i]<=arr[j]){
//             temp.push_back(arr[i]);
//             i++;
//         }else{
//             temp.push_back(arr[j]);
//             j++;
//         }
//     }
//     while(i<=mid){
//          temp.push_back(arr[i]);
//             i++;
//     }
//     while(j<=end){
//          temp.push_back(arr[j]);
//          j++;//till this loop (like starting from the first loop of if else  till this loop) it has time complexity of O(n)
//     }
//     for(int idx=0;idx<temp.size();idx++){
//         arr[idx+st]=temp[idx];//while this loop will  have n time operation so the overall complexity rfor this one would be O(n)
//     }
// }
// void mergeSort(vector<int>&arr,int st,int end){
//     if (st<end){
//         int mid=st+(end-st)/2;
//         mergeSort(arr,st,mid);
//         mergeSort(arr,mid+1,end);
//         merge(arr,st,mid,end);
//     }
// }
// int main(){
//     vector<int>arr={12,21,35,8,32,17};
//     mergeSort(arr,0,arr.size()-1);//this last thing will be the index of the array and not the size of the array
//     for(int val:arr){
//         cout<<val<<" ";

//     }
//     cout<<endl;
//     return 0;
// }
// in the end one can say that the time complexity for this algorithum will be 0(nlogn)and this is because merge sort works with a recursion function and the total 
// calls will be TC=total call* work done in each call
// and with that the time complexity come 0{nlogn} and the space complexity will be 0(n)
// lets do the practice of merge sort
// void merge(vector<int>&arr,int st,int mid,int end){
//     vector<int>temp;
//     int i=st;
//     int j=mid+1;
//     while(i<=mid && j<=end){
//         if(arr[i]<arr[j]){
//             temp.push_back(arr[i]);
//             i++;
//         }
//         else{
//             temp.push_back(arr[j]);
//             j++;
//         }
//     }
//     while(i<=mid){
//         temp.push_back(arr[i]);
//             i++;
//     }
//     while(j<=end){
//           temp.push_back(arr[j]);
//             j++;
//     }
//     for(int idx=0;idx<temp.size();idx++){
//         arr[idx+st]=temp[idx];
//     }
    
// }

// void mergeSort(vector<int>&arr,int st,int end){
//     if(st<end){
//         int mid=st+(end-st)/2;
//         mergeSort(arr,st,mid);
//         mergeSort(arr,mid+1,end);
//         merge(arr,st,mid,end);
//     }
// }
// int main(){
//     // vector<int>arr={1,23,54,34,89,54,34,56,12,3};
//     // vector<int>arr;
//     int n;
    
//     cout<<"enter the number of elements in an array"<<endl;
//     cin>>n;
//     vector<int>arr(n);
//     for(int i=0;i<n;i++){
        
//         cout<<"enter the value of array"<<endl;
//         cin>>arr[i];
//     }
//     // mergeSort(arr,0,arr.size()-1);
//     mergeSort(arr,0,n-1);

//     for(int val:arr){
//         cout<<val<<" ";
//     }
//     cout<<endl;
//     return 0;
// }
// quick sort algorithum
int partition(vector<int>&arr,int st,int end){
    int idx=st-1;
    int piv=arr[end];
    for(int j=st;j<end;j++){
        // if(arr[j]<=arr[piv]){
        if(arr[j]<=piv){
            idx++;
            swap(arr[j],arr[idx]);
        }
    }
    idx++;
    swap(arr[end],arr[idx]);
    return idx;
}
void quickSort(vector<int>&arr,int st,int end){
    if(st<end){
        int pivIdx=partition(arr,st,end);
        quickSort(arr,st,pivIdx-1);
        quickSort(arr,pivIdx+1,end);

    }
}
int main(){
    // vector<int>arr={1,23,54,34,89,54,34,56,12,3};
    // vector<int>arr;
    int n;
    
    cout<<"enter the number of elements in an array"<<endl;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        
        cout<<"enter the value of array"<<endl;
        cin>>arr[i];
    }
    // mergeSort(arr,0,arr.size()-1);
    quickSort(arr,0,n-1);

    for(int val:arr){
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}