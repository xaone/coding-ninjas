// Code : Reverse Number Pattern
// Send Feedback
// Print the following pattern for the given N number of rows.
// Pattern for N = 4
// 1
// 21
// 321
// 4321
// Input format :
// Integer N (Total no. of rows)
// Output format :
// Pattern in N lines
// Constraints
// 0 <= N <= 50
// Sample Input 1:
// 5
// Sample Output 1:
// 1
// 21
// 321
// 4321
// 54321
// Sample Input 2:
// 6
// Sample Output 2:
// 1
// 21
// 321
// 4321
// 54321
// 654321

#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int i = 1;
  while (i <= n) {
    int j = 1;
    int k = i;
    while (j <= i) {
      cout << k--;
      j++;
    }
    cout << endl;
    i++;
  }

  /*  Read input as specified in the question.
   * Print output as specified in the question.
   */
}
