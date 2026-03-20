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
int rotation(vector<int>&arr){
    // vector<int>arr;
    int low=0;
    int high=arr.size()-1;
    while(low<high){
        int mid=(low+high)/2;
        if(arr[mid]<arr[high]){
            high=mid-1;
        }
        else{
            low=mid+1;
        }

    }
    return low;
}
int main(){
    vector<int>arr={3,4,5,1,2};
    int rotate_no=rotation(arr);
    cout<<rotate_no<<endl;
}