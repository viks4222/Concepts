#include <stdio.h> 
#include <string.h>
#include <stdlib.h>

void LongestWord(char * sen) {
  
  int size = strlen(sen);
  int startIndex = 0; 
  int wordLen = 0;
  int maxLen = 0;
  int LongestWordIdx = 0;

  for(int i = 0; i < size; i++)
  {
    if(sen[i] == '!' || sen[i] == ' ' || sen[i] == '&' || sen[i] == '\0')
    {
      wordLen = 0;
      startIndex = i + 1;
    } 
    else
    {
      wordLen ++;
      if(wordLen > maxLen )
      {
        maxLen = wordLen;
        LongestWordIdx = startIndex;
      }
    }
  }
  char *resString = (char *)malloc(sizeof(char)*(maxLen));
  strncpy(resString, &sen[LongestWordIdx], maxLen);
  // code goes here  
  printf("%s", resString);

}

int main(void) { 
   
  // keep this function call here
  LongestWord(coderbyteInternalStdinFunction(stdin));
  return 0;