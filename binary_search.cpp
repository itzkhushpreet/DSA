#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include<cmath>
#include<algorithm>
#include<array>
#include<string>
using namespace std;
class lowerboundfinder{
    public:
int lowerbound(vector<int>arr, int x){
    int n=arr.size();
    int low=0;
    int high=n-1;
    int ans=n;
while(low<=high){
    int mid=(low+high)/2;
    if(arr[mid]>=x){
        ans=mid;
        high=mid -1;
     }
     else{
        low=mid+1;

     }

}
return ans;
}
};
int main(){
    vector<int>arr={3,5,8,15,19};
     int n=arr.size();
    int x=9;
    lowerboundfinder finder;
    int id=finder.lowerbound(arr,x);
    cout<<"the lower bound of the the index is"<< id <<endl;
    return 0;

}