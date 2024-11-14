#include <bits/stdc++.h>
using namespace std;

int main()
{
  int arr[] = {1,2,3,4,5,6};
  cout << -5[arr];
  
  return 0;
}

/* Why this works?

In C++, array indexing a[b] is defined as *(a + b). This means that a[b] accesses the element at the memory address offset by 
b positions from the start of the array a.Since addition is commutative, a[b] is the same as b[a] because both expressions 
evaluate to *(a + b), which points to the same memory location. 
*/