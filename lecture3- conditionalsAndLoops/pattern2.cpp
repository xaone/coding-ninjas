// Number Pattern 2
// Send Feedback
// Print the following pattern
// Pattern for N = 4


// The dots represent spaces.



// Input Format :
// N (Total no. of rows)
// Output Format :
// Pattern in N lines
// Sample Input :
// 5
// Sample Output :


// The dots represent spaces.


#include<iostream>
using namespace std;


int main(){
	int n;
	cin>>n;
	int i=1;
	
	while(i<=n){
		int k=i;
		int l=1;
                int j = 1;
                while(l<=n-i){
			cout<<" ";
			l++;
		}

		while(j<=i){
			cout<<k;
			k++;
			j++;
		}
		cout<<endl;
		i++;
	}

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
  
}


