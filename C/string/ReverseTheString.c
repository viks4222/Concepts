#include <stdio.h> 
#include <string.h>
#include <stdlib.h>

void FirstReverse(char * str) {
  int size = strlen(str);
  char temp = ' ';
  char *resStr = (char *)malloc(sizeof(char)*(size + 1));

  for(int i = 0; i < size; i++)
  {
    resStr[i] = str[size - 1- i];
  }
  // code goes here  
  printf("%s", resStr);

}


int main(void) { 
   
  // keep this function call here
  FirstReverse(coderbyteInternalStdinFunction(stdin));
  return 0;
    
}