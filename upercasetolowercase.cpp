#include <iostream>
using namespace std;

int main(){
    char ch1;
    cin >> ch1;
    if(ch1>='A'&& ch1<='Z'){
        ch1+=32;
        
    }
    cout<<ch1;

}
