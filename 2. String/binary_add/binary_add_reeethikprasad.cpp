/*
 * Description
 * binary_add_reeethikprasad.cpp
 * We have to find the addition of two binary
 * First take the number of test cases "t"
 * Take two binary bt1 and bt2
 * Obtain the remainders of both the binary numbers.
 * Obtain the quotients of both the binary numbers.
 * (0+0)=0,
 * (1+0)=1,
 * (1+1)=0 and 1 
 * 
 * Time Complexity-O(n) Space Complexity-O(1)
 * @author [reethikprasad](https://github.com/reethikprasad)
 * 
 * **/

#include <iostream>
#include <math.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--){
	long bn1,bn2;
	int i=0, r=0;
	int sum[20]; 
	cin>> bn1;
	cin>> bn2;
  while (bn1 != 0 || bn2 != 0) 
  {
   sum[i++] = ((bn1 % 10 + bn2 % 10 + r) % 2);
   r = ((bn1 % 10 + bn2 % 10 + r) / 2);
   bn1 = bn1 / 10;
   bn2 = bn2 / 10;
  }
  if (r != 0) {
   sum[i++] = r;
  }
  --i;

  while (i >= 0) {
   cout<<(sum[i--]);
  }
   cout<<("\n"); 
    } 
 }  