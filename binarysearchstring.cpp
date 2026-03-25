// You are given a guest list containing names in sorted lexicographical order.

// Given the name of a guest, determine whether the name exists in the list.

// Important: The list is sorted. Your solution is expected to use binary search.

// Input
// The first line contains an integer 𝑛
//  (1≤𝑛≤105
// ) — the number of names.

// The next 𝑛
//  lines each contain a name 𝑆𝑖
// .

// Each name:

// consists only of lowercase English letters,
// has length between 1 and 20.
// The names are given in non-decreasing lexicographical order.

// The last line contains a name 𝑋
//  — the guest to search for.

// Output
// Print YES if the name exists in the list, otherwise print NO.

//SOLUTION
#include <iostream>
using namespace std;
int main(){
   int n;
   cin>>n;
   string arr[n];
   for(int i =0; i<n;i++){
       cin>>arr[i];
   }
   string target;
   cin>>target;
   int l =0;
   int x =n-1;
   bool flag = false;
   while(l<=x){
       int mid = (l+x)/2;
       if(arr[mid]==target){
           cout<<"YES";
           flag = true;
           break;
           
       }
       else if(arr[mid]<target){
           l = mid + 1;
       }
       else{
           x = mid -1;
       }
   }
   if(flag==false){
       cout<<"NO";
   }
   
   
}
