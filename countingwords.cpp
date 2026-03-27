// using 2 pointer
// ham string ki space ko tackle karnege 
#include <iostream>
#include <vector>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int n = s.size();
    int i = 0;
    int bete = 0;
    vector<int>arr;
    while(i<n){
        int j = i;
        int count = 0;
        while(j<n && s[j]!=' '){
            j++;
            count++;
        }
        while(j<n && s[j]==' '){
            j++;
        }
        bete = count;
        if(bete> 0){
            arr.push_back(bete);
            
        }
        i = j;
        
    }
    int variable = arr[0];
    for(int i = 0; i<arr.size();i++){
        if(arr[i]>= variable){
            variable = arr[i];
        }
        
    }
    cout<<variable;
    
}
// 👉 Your solution is:

// ✅ Logically correct
// ✅ Efficient (O(n))
// ✅ Clean two-pointer approach
// this is something chat gpt have to say about my solution
