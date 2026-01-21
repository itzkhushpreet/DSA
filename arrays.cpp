// from arrays//
#include<iostream>
#include<cmath>
#include<algorithm>
#include<array>
#include<vector>
#include<string>
using namespace std;
// int main(){
//    cout<<"hello world"<<endl; 
// }
// to find the largest element in an array
int main(){
   vector<int> arr={1,4,7,9};
   int largest=arr[0];
   for(int i=1;i<arr.size();i++){
      
      if(arr[i]>largest){
         largest=arr[i];
      }
   }
   cout<<largest<<endl;
   return 0;
   
}
