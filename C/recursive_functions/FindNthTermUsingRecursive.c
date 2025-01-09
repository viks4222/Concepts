#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

int find_nth_term(int n, int a, int b, int c) {
  //Write your code here.
  int term = 0;
  if(n == 1)
  {
      term = a;
  }
  else if (n == 2) 
  {
     term = b;
  }
  else if(n == 3)
  {
   term = c;   
  }
  else if(n > 3)
  {
    term = find_nth_term(n-1, a, b, c) + find_nth_term(n-2, a, b, c) + find_nth_term(n-3, a, b, c); 
  }
  
  return term;
}


int main() {
    int n, a, b, c;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);
 
    printf("%d", ans); 
    return 0;
}
