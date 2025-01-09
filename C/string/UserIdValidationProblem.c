#include <stdio.h> 
#include <string.h>

void CodelandUsernameValidation(char * str) {
  
  int isValid = 1;

  if(strlen(str) >= 4 && strlen(str) <= 25)
  {
    isValid = isValid & 1;
  }
  else
  {
    isValid = 0;    
  }

  if((str[0] >= 'a' && str[0] <= 'z') || (str[0] >= 'A' && str[0] <= 'Z'))
  {
    isValid &= 1;
  }
  else
  {
    isValid = 0; 
  }

  for(int i = 0; i< strlen(str); i++)
  {
    if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') 
        || (str[i] >= '0' && str[i] <= '9') || str[i] == '_')
    {
      isValid &= 1;
    }
    else
    {
      isValid = 0; 
    }
  }

  if(str[strlen(str)-1] == '_')
  {
    isValid = 0;
  }

  if(isValid == 1)
  {
    printf("true");
  }
  else
  {
    printf("false");
  }

}

int main(void) { 
   
  // keep this function call here
  CodelandUsernameValidation(coderbyteInternalStdinFunction(stdin));
  return 0;
    
}