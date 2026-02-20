#include <iostream>
using namespace std;
int main()

{
    int i;

    int n;
    cout<<"enter the value of n";
    cin>>n;
    int arr[n];
    
    for( i = 0; i<n;i++){
        cout<<"enter the elements";
        cin>>arr[i];

    }
    
   
    int max = arr[0];
    for(i =0;i<n;i++){
    
        if(max<arr[i]) max= arr[i];
    
    }
    cout<<max;

    

}
   
    
   
