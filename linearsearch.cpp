#include <iostream>
using namespace std;
int main(){
   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }
   int find;
   cin>>find;
   bool flag = false;
   for(int i = 0;i<n;i++){
       if(arr[i]==find){
           flag = true;
           break;
       }
      
   }
   if(flag==true){
       cout<<"YES";
   }else{
       cout<<"NO";
   }
    
    
}
