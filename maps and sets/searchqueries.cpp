/*B. Search Queries - III
time limit per test1 second
memory limit per test256 megabytes
You are given an array 𝐴
 of 𝑁
 distinct integers and 𝑄
 queries. In each query, an integer 𝑥
 is given.

For every query, output the 1-based index of 𝑥
 in the array. If 𝑥
 does not occur in 𝐴
, output −1
.

Input
The first line contains two integers 𝑁
 and 𝑄
 (1≤𝑁≤105
, 1≤𝑄≤105
).

The second line contains 𝑁
 distinct integers 𝐴1,𝐴2,…,𝐴𝑁
 (−109≤𝐴𝑖≤109
).

The next 𝑄
 lines each contain one integer 𝑥
 (−109≤𝑥≤109
).

Output
Print 𝑄
 lines. For each query, print the 1-based index of 𝑥
 in 𝐴
, or −1
 if it is absent.*/
//solutionnn
#include <iostream>
#include <unordered_map>
using namespace std;
int main(){
    int n;
    int q;
    cin>>n>>q;
    unordered_map<int,int> mp;
    for(int i = 0;i<n;i++){
        int number;
        cin>>number;
        mp[number] = i+1;
        
    }
    for(int i = 0;i<q;i++){
        int x;
        cin>>x;
         if(mp.count(x) > 0) {
        cout << mp[x] << "\n";
    } else {
        cout << "-1\n";
    }

    }
   
    
    
}
