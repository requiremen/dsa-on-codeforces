// You are given two arrays of integers, both sorted in non-decreasing order.

// Merge the two arrays into a single sorted array.

// Input
// The first line contains two integers 𝑛
//  and 𝑚
//  (1≤𝑛,𝑚≤105
// ) — the sizes of the arrays.

// The second line contains 𝑛
//  integers 𝐴𝑖
//  (−109≤𝐴𝑖≤109
// ).

// The third line contains 𝑚
//  integers 𝐵𝑖
//  (−109≤𝐵𝑖≤109
// ).

// Both arrays are sorted in non-decreasing order.

// Output
// Print the merged sorted array.
//solution
#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    int x;
    cin>> x;
    int arr[n];
    int arr2[x];
    vector<int>a;
    for(int i = 0;i<n; i++){
        cin>>arr[i];
    }
     for(int j = 0;j<x; j++){
        cin>>arr2[j];
     }
     int i =0;
     int j =0;
     while(i<n && j<x){
         if(arr[i]<arr2[j]){
             a.push_back(arr[i]);
             i++;
         }else{
             a.push_back(arr2[j]);
             j++;
         }
     }
     while(i<n){
         a.push_back(arr[i]);
         i++;
         
     }
     while(j<x){
         a.push_back(arr2[j]);
         j++;
     }
     for(int i = 0;i<a.size();i++){
         cout<<a[i]<<" ";
     }
   
}
