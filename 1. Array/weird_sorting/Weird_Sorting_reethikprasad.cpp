/**
 * WeirdSortingreethikprasad.cpp
 * Given an array with 7 21 7 7 7 21 14 14 21 7 sort them in increasing order
 *
 * Description-
 * First take the number of test cases "t"
 * Then take the number as an array input with size n
 * Store them in an array a[n]
 * Now using the STL sort them in increasing order i.e sort(a,a+n)
 * Print out the number from array
 * Lets say t=1  n=10 
 * so array becomes a[10]
 * now after taking the input "7 21 7 7 7 21 14 14 21 7"
 * sort them using STL sort "7 7 7 7 7 14 14 21 21 21"
 * Print out the array 
 
 * Time Complexity-O(n) Space Complexity-O(1)
 * @author [reethhikprasad](https://github.com/reethikprasad)
 */

#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
    }
}

/*
input-
1
10 
7 21 7 7 7 21 14 14 21 7
output-
7 7 7 7 7 14 14 21 21 21 
*/
