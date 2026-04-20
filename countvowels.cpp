#include <iostream>
using namespace std;
int main(){
   int n;
   cin>>n;
   char a[n];
   for(int i= 0;i<n;i++){
       cin>>a[i];
   }
   //making prefix
   int p[n];
   int sum = 0;
   for(int i = 0;i<n;i++){
       if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'){
           sum+=1;
           p[i]=sum;
   }
   int q;
   cin>>q;
   for(int i = 0;i<q;i++){
       int l,r;
       cin>>l>>r;
       l--;
       r--;
       if(l==0){
           cout<<p[r];
           
       }else{
           cout<<p[r]-p[l-1];
       }
       
   }
}
