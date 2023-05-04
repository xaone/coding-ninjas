// Code : Triangle of Numbers
// Send Feedback
// Print the following pattern for the given number of rows.
// Pattern for N = 4



// The dots represent spaces.



// Input format :
// Integer N (Total no. of rows)
// Output format :
// Pattern in N lines
// Constraints :
// 0 <= N <= 50
// Sample Input 1:
// 5
// Sample Output 1:
//            1
//          232
//        34543
//      4567654
//    567898765
// Sample Input 2:
// 4
// Sample Output 2:
//            1
//          232
//        34543
//      4567654


#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int i=1;
    // int k=1;
    while(i<=n){
        int spaces=1;
        while(spaces<= n-i){
            cout<<" ";
            spaces++;
        }
        int j=1;
        int k=i;
        while(j<=i){
            cout<<k++;
            // k++;
            j++;
        }

        int l=i-1;
        int m=k-2;
        // k--;
        // int m=i;
        while(l>=1){
            cout<<m;
            m--;
            l--;
        }
        cout<<endl;
        i++;
    }
    /*  Read input as specified in the question.
     * Print output as specified in the question.
     */
    
}
