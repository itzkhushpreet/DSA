#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include<cmath>
#include<algorithm>
#include<array>
#include<string>
using namespace std;
// class lowerboundfinder{
//     public:
// int lowerbound(vector<int>arr, int x){
//     int n=arr.size();
//     int low=0;
//     int high=n-1;
//     int ans=n;
// while(low<=high){
//     int mid=(low+high)/2;
//     if(arr[mid]>=x){
//         ans=mid;
//         high=mid -1;
//      }
//      else{
//         low=mid+1;

//      }

// }
// int upperbound(vector<int>arr;int x){
//     int n=arr.size();
//     int low=0;
//     int high=n-1;
//     while(low<=high){
//         if(arr[mid]>x){
//             ans=mid;
//              high=mid-1;
           
//         }
//         else{
//             low=mid+1;
//         }
//     }
// }
// return ans;
// }
// };
// int main(){
//     vector<int>arr={3,5,8,15,19};
//      int n=arr.size();
//     int x=9;
//     lowerboundfinder finder;
//     int id=finder.lowerbound(arr,x);
//     cout<<"the lower bound of the the index is"<< id <<endl;
//     return 0;

// }
// to find the number of rotations in an sorrted array
// int rotation(vector<int>&arr){
//     // vector<int>arr;
//     int low=0;
//     int high=arr.size()-1;
//     while(low<high){
//         int mid=(low+high)/2;
//         if(arr[mid]<arr[high]){
//             high=mid-1;
//         }
//         else{
//             low=mid+1;
//         }

//     }
//     return low;
// }
// int main(){
//     vector<int>arr={3,4,5,1,2};
//     int rotate_no=rotation(arr);
//     cout<<rotate_no<<endl;
//     return 0;
// }
// to search the single element that is preseent in a sorted array using O{log n}
// int single_element(vector<int>&arr){
//     int n=arr.size();
//     if(n==1)return arr[0];
//     if(arr[0]!=arr[1])return arr[0];
//     if(arr[n-1]!=arr[n-2]) return arr[n-1];
//     int low=1;
//     int high=n-2;
//     while(low<=high){
//         int mid=(low+high)/2;
//         if( arr[mid]!=arr[mid-1]&& arr[mid]!=arr[mid+1]){
//             return arr[mid] ;
//         }
//         if((mid%2==1 && arr[mid-1]==arr[mid]) || 
//         (mid%2==0 && arr[mid]==arr[mid+1])){
//             low=mid+1;
//         }
//         else{
//             high=mid-1;
//         }

//     }
//     return -1;
// }
// int main(){
//     vector <int>arr={1,1,2,2,3,3,4,5,5,6,6};
//     int ans=single_element(arr);
//     cout<<ans<<endl;
// }
// simple square root problem

// int sqrt(int n){
//     int low=0;
//     int high=n;
//     while(low<=high){
//         int mid=(low+high)/2;
//         if(mid*mid==n)return mid;
//         if(mid*mid<n){
//             low=mid+1;
//         }
//         else{
//             high=mid-1;
//         }
//     }
//     return -1;
// }
// int main(){
//     int n=145;
//     int ans=sqrt(n);
//     cout<<ans<<endl;
// }
// bit complicating the same problem for 145 like number
int sqrt(int n){
    int low=0;
    int high=n;
    int ans=0;
    while(low<=high){
        int mid=(low+high)/2;
        if(mid*mid==n)return mid;
        if(mid*mid<n){
            ans=mid;
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return ans;
}
int main(){
    int n=145;
    int ans=sqrt(n);
    cout<<ans<<endl;
}