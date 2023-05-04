// Start Pattern
// Send Feedback
// Print the following pattern
// Pattern for N = 4



// The dots represent spaces.



// Input Format :
// N (Total no. of rows)
// Output Format :
// Pattern in N lines
// Constraints :
// 0 <= N <= 50
// Sample Input 1 :
// 3
// Sample Output 1 :
//    *
//   *** 
//  *****
// Sample Input 2 :
// 4
// Sample Output 2 :
//     *
//    *** 
//   *****
//  *******

#include<iostream>
using namespace std;


int main(){
	int n;
	cin>>n;
	int i=1;
	
	int k=1;
	
	
	while(i<=n){
          int j = 1;
          int val = 1;

		  while(val<=n-i){
			  cout<<" ";
			  val++;
		  }
                  int l = 1;
                  while(l<=k){
			  cout<<"*";
			  l++;
		  }
		  k+=2;
		  i++;
		  cout<<endl;
        }

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
  
}


