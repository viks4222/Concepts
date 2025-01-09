#include <stdio.h> 
#include <string.h>

void QuestionsMarks(char * str) {
  int flag = 0;
  int que_counter = 0;
  int size = strlen(str);
  int start, end = 0;
  int first, second = 0; 

  // for(int i=0; i < size-1; i++)
  // {
  //   if(str[i] == '?')
  //   {
  //     que_counter ++;
  //   }
  // }

  for(int i=0; i < size-1; i++)
  {
    if(str[i] == '?')
    {
      que_counter ++;
    }

    if(str[i] >= '1' && str[i] <= '9')
    {
      if(start == 0)
      {
        //printf("%c\n", str[i]);
        first = str[i] - '0';
        start = 1;
        end = 0;
        que_counter = 0;
      }
      else
      {
        second = str[i] - '0';
        end = 1;
        start = 0;
      }

      //printf("%d : %d : %d\n", que_counter, first, second);
      if(end == 1)
      {
        if(first + second == 10 && que_counter == 3)
        {
          flag = 1;
        }
        else
        {
          end = 0;
          que_counter = 0;
          first = second;

        }
      }
    }
  }


  if(flag == 0)
  {
    printf("false");
  }
  else
  {
    printf("true");
  }

}

int main(void) { 
   
  // keep this function call here
  QuestionsMarks(coderbyteInternalStdinFunction(stdin));
  return 0;
    
}