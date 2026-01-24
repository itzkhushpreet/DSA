// from arrays//
#include<iostream>
#include<cmath>
#include<algorithm>
#include<array>
#include<vector>
#include<string>
using namespace std;
// // int main(){
// //    cout<<"hello world"<<endl; 
// // }
// // to find the largest element in an array
// // int main(){
// //    vector<int> arr={1,4,7,9};
// //    int largest=arr[0];
// //    for(int i=1;i<arr.size();i++){
      
// //       if(arr[i]>largest){
// //          largest=arr[i];
// //       }
// //    }
// //    cout<<largest<<endl;
// //    return 0;
   
// // }
// // to find the second largest element in an arrya
// // int main(){
// //    vector<int> arr={1,4,7,9};
// //    int largest=arr[0];
// //    int largest=arr[0];
// //    int slargest=-1;//here it should have INT_MIN in casee of negative numbers

// //    for(int i=1;i<arr.size();i++){
// //       if(arr[i]>largest){
// //          slargest=largest;
// //          largest=arr[i];
// //       }
// //       else if(arr[i]<largest && arr[i]>slargest){
// //          slargest=arr[i];
// //       }

// //    }
// //    if (slargest == INT_MIN) {
// //         cout << "Second largest element does not exist";
// //     } else {
// //         cout << slargest;
// //     }

// //     return 0;
// // }
// int main(){
//    vector<int>arr={1,21,3,4,5,6};
//    bool is_sorted=true;
//    for(int i=0;i<arr.size()-1;i++){
//       if(arr[i]>arr[i+1]){
//          // cout<<"it is an unsorted array";
//          is_sorted=false;
//          break;
//       }
//       // else{
//       //    // // cout<<"it is an unsorted array";
//       //    // return false;

//       // }
//       }
//       if(is_sorted==true){
//          cout<<"it is an sorted array";
//       }
//       else{
//          cout<<"it is an unsorted array";
//       }
//    return 0 ;
// }
// // to check if an an array is sorted or not;also rotated
// class Solution {
// public:
//     bool check(vector<int>& nums) {
//         bool is_true = true;
//         int countbreaks = 0;
//         for (int i = 0; i < nums.size() - 1; i++) {
//             if (nums[i] > nums[i + 1]) {
//                 // is_true=false;
//                 countbreaks++;
//                 // is_true=;
//             }
//         }
//         if (nums[nums.size() - 1] > nums[0]) {
//             countbreaks++;
//             // is_true=true;
//         }
//         if (countbreaks <= 1) {
//             is_true == true;
//         } else {
//             is_true = false;
//         }
//         // if (is_true){
//         //     cou
//         // }
//         return is_true;
//     }
// };
// // to remove the elements from an sorted array

// class Solution {
// public:
//     int removeDuplicates(vector<int>& nums) {
//         int i=0;
//         for(int j=0;j<nums.size();j++){
//             if(nums[j]!=nums[i]){
//                 nums[i+1]=nums[j];
//                 i++;
//              }
//         }
//         return i+1;
//     }
// };
// to rotate an array to one place in left
// int main(){
//    vector<int>arr={1,2,3,4,5,6};
//    // int n=arr.size();
//    // int n;
//    // int arr[n];
//    int temp=arr[0];
//    for(int i=1;i<arr.size();i++){
//       arr[i-1]=arr[i];
//    }
//    arr[arr.size()-1]=temp;
//    for (int x:arr){
//       cout <<x <<" ";
//    }
//    return 0;
// }
// for roatiatin it right onnly one place
// int main(){
//    vector<int>arr={1,2,3,4,5,6};
//    int temp=arr[arr.size()-1];
//    // for(int i=1;i<arr.size()-2;i++){
//    //    arr[i]=arr[i+1];
//    // }
//    for(int i=arr.size()-1;i>0;i--){
//       arr[i]=arr[i-1];
//    }
//    arr[0]=temp;
//    for(int x:arr){
//       cout<<x<<" ";
      
//    }
//    return 0;
// }
// for rotating the array to left d times
// void leftrotate(int arr[],int n,int d){
//    d=d%n;
//    int temp[d];
//    for(int i=0;i<d;i++){//pushing the elements that will be shifted into a temp array
//       temp[i]=arr[i];
//    }
//    for(int i=d;i<n;i++){//this looop is for moving the other elements into their right positions basically shifting the elements towards forward so that there is enough space for temp to adjust in the end
//       arr[i-d]=arr[i];
//    }
//    for(int i=n-d;i<n;i++){
//       arr[i]=temp[i-(n-d)];
//    }

// }
// int main(){
//    // vector<int>arr={1,2,3,4,5,6}
//    // int n;
//    // int arr[n];
//      int arr[] = {1,2,3,4,5,6};
//     int n = sizeof(arr) / sizeof(arr[0]);
//    leftrotate(arr,n,3);
//    for(int i=0;i<n;i++){
//       cout<<arr[i]<<" ";
//    }
//    return 0;
// }
// void rightrotate(int arr[],int n,int d){
//    d=d%n;
//    int temp[d];
//    for(int i=n;i>0;i--){//pushing the elements that will be shifted into a temp array
//       temp[i+d]=arr[i];
//    }
//    for(int i=n+d;i>0;i--){//this looop is for moving the other elements into their right positions basically shifting the elements towards forward so that there is enough space for temp to adjust in the end
//       arr[i+d]=arr[i];
//    }
//    for(int i=n-d;i<n;i++){
//       arr[i]=temp[i-(n-d)];
//    }

// }
// int main(){
//    // vector<int>arr={1,2,3,4,5,6}
//    // int n;
//    // int arr[n];
//      int arr[] = {1,2,3,4,5,6};
//     int n = sizeof(arr) / sizeof(arr[0]);
//    rightrotate(arr,n,3);
//    for(int i=0;i<n;i++){
//       cout<<arr[i]<<" ";
//    }
//    return 0;
// }
// int main(){
//    vector<int>arr={1,4,8,13};
//    int n = sizeof(arr) / sizeof(arr[0]);
//    int count;
//    for(int i=0;i<n;i++){
//       while(k>0){
//          int temp=arr[i]+=1;
//          k--;
//       }
//       for(int idx=1;i<n;idx++){
// //          if (temp==arr[idx]){
// //             count++;
// //          }

// //       }
   
// //    }
// //    return count;

// // }
// // int main(){
// //    vector<int> arr={1,4,8,13};
// //    int k=5;
// //    int n = arr.size();
// //    int l=0;
// //    int r=0;
// //    int total=0;
// //    int freq=0;
// // // hun bnona shuru krna va sliding window
// //    while(r<n){
// //       int windowlen=r-l+1;
// //        total+=arr[r];
   
// //       while(arr[r]*windowlen>total+k){
// //       // nums[r].windowlen<total+k;
//       total-=arr[l];
//       l++;

//    }
//    freq=max(freq,windowlen);
//    r++;
// }
// // return freq;
// // }
// int maxfreq(vector<int>arr, int k){
//    // int k=5;

//    int n = arr.size();
//    int l=0;
//    int r=0;
//    long long total=0;
//    int freq=0;
// // hun bnona shuru krna va sliding window
//    while(r<n){
//       // int windowlen=r-l+1;
//        total+=arr[r];
   
//       while((long long)arr[r]*(r-l+1)>total+k){
//       // nums[r].windowlen<total+k;
//       total-=arr[l];
//       l++;

//       }
//       freq=max(freq,r-l+1);
//       r++;
//    }
// return freq;
// }
// using sliding winndow
// int main(){
//    vector<int>nums={1,4,8,13};
//    int k=5;
//    // maxfreq(arr);
//    // cout<<maxfreq(arr, 5)<<endl;
//    sort(nums.begin(), nums.end());
    
//     long long total = 0; 
//     int l = 0, freq = 0;

//     for (int r = 0; r < nums.size(); r++) {
//         total += nums[r];

//         // shrink window if cost > k
//         while ((long long)nums[r] * (r - l + 1) > total + k) {
//             total -= nums[l];
//             l++;
//         }

//         freq = max(freq, r - l + 1);
//     }

//     cout<<freq;

// }
// sort(nums.begin(), nums.end());
    
//     long long total = 0; 
//     int l = 0, freq = 0;

//     for (int r = 0; r < nums.size(); r++) {
//         total += nums[r];

//         // shrink window if cost > k
//         while ((long long)nums[r] * (r - l + 1) > total + k) {
//             total -= nums[l];
//             l++;
//         }

//         freq = max(freq, r - l + 1);
//     }

//     return freq;
// now coming back again to rotating the array
// arr=[1.2.3.4,5,6]
// rotated left array= [2,3,4,5,6,1]
// int main(){
//     vector<int>arr={1,2,3,4,5,6};
//     int temp=arr[0];
//     for(int i=1;i<arr.size();i++){
//         arr[i-1]=arr[i];
//      }
//     arr[arr.size()-1]=temp;
//     for(int x:arr){
//         cout<<x<<" ";
//     }
//     return 0;
// }
// rotatin an array to one place in rightdirection
// // array is same as above but hte rotated right array would be arr=[6,1,2,3,4,5]
// int main(){
//     vector<int>arr={1,2,3,4,5,6};
//     int temp=arr[arr.size()-1];
//     for(int i =arr.size()-1;i>0;i--){
//         arr[i]=arr[i-1];
//     }
//     arr[0]=temp;
//     for(int x:arr){
//         cout<<x<<" ";

//     }
//     return 0;
// }
// now rotating an array to d times to left ..originial=arr[1,2,3,4,5,6] and d=2
// rotated array would be=arr[3,4,5,6,1,2]
// int main(){
//     vector<int> arr={1,2,3,4,5,6};
//     vector<int> temp;
//     // pushing the first two elements in temp;
//     int d=2;
//     int n=arr.size();
//     for(int i=0;i<d;i++){
//         temp.push_back(arr[i]);
//     }
//     // shiftiing the elemests to their left
//     for(int i=d;i<n;i++){
//         arr[i-d]=arr[i];
//     }
//     // moving the temp elements to the end of the array
//     for(int i=n-d;i<n;i++){
//         arr[i]=temp[i-(n-d)];
//     }
//     for(int x:arr){
//         cout<<x<<" ";

//     }
//     return 0;
// }
// int main(){
//     vector<int> arr={1,2,3,4,5,6};
//     vector<int> temp;
//     // pushing the first two elements in temp;
//     int d=2;
//     int n=arr.size();
//     for(int i=n-d;i<n;i++){
//         temp.push_back(arr[i]);
//     }
//     for(int i=n-d-1;i>=0;i--){
//         arr[i+d]=arr[i];

//     }
//     for(int i=0;i<d;i++){
//         arr[i]=temp[i];
//     }
//     for(int x:arr){
//         cout<<x<<" ";
//     }
// return 0;

// // }
// int main(){
//     vector<int>arr={0,1,0,3,12};
//     int k=0;
//     for(int i=0;i<arr.size();i++){
//         if(arr[i]==0){
//             arr[i]=arr[k];
//         }

//     }
//     for(int x:arr){
//         cout<<x<<" ";
//     }
//     return 0;
// }
 
// for moving the non zero elements in front and all the zero elements at the end of the array
int main(){
    vector<int>arr={1,0,1,3,12};
    int n=arr.size();
    int j=-1;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            j=i;
            break;
        }
    }
    for(int i=j+1;i<n;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;
        }
    }
    for(int x:arr){
        cout<<x<<" ";

    }
    return 0;

}
// int main() {
//     vector<int> arr = {1,0,1,3,12};
//     int j = 0;

//     for (int i = 0; i < arr.size(); i++) {
//         if (arr[i] != 0) {
//             swap(arr[i], arr[j]);
//             j++;
//         }
//     }

//     for (int x : arr)
//         cout << x << " ";
// }

   







