#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap(const char **x, const char **y)
{
    const char *temp = *x;
    *x = *y;
    *y = temp;
}

int lexicographic_sort(const char** a, const char** b) {
    
  int len_a = strlen(*a);
  int len_b = strlen(*b);
  
  int min_len = (len_a < len_b) ? len_a : len_b;
  
  for(int i = 0; i< min_len; i++)
  {
      if((*a)[i] > (*b)[i])
      {
        swap(a, b);
        break;
      }
  }
  return 1;
}

int lexicographic_sort_reverse(const char** a, const char** b) {
  int len_a = strlen(*a);
  int len_b = strlen(*b);
  
  int min_len = (len_a < len_b) ? len_a : len_b;
  
  for(int i = 0; i< min_len; i++)
  {
      if((*a)[i] < (*b)[i])
      {
        swap(a, b);
        break;
      }
  }
  return 1;
}

int sort_by_number_of_distinct_characters(const char** a, const char** b) {
  int len_a = strlen(*a);
  int len_b = strlen(*b);
  int appear = 0;
  int a_count = 0;
  int b_count = 0;
  
  for(int i = 0; i< len_a; i++)
  {
    appear = 0;
    for(int j = 0; j< len_a; j++)
    {
      if((*a)[i] == (*a)[j])
      {
        appear = 1; 
        break; 
      }
      
      if(!appear)
      {
        a_count++;
      }
      printf("a count = %d\n", a_count); 
    }
  }

  for(int i = 0; i< len_b; i++)
  {
    appear = 0;
    for(int j = 0; j< len_b; j++)
    {
      if((*b)[i] == (*b)[j])
      {
        appear = 1;
        break;  
      } 
    }
    if(!appear)
    {
      b_count++;
    }
    printf("b count = %d\n", b_count);
  }
  
  if(a_count < b_count)
  {
    swap(a, b);   
  }
  
  return 1;  
}

int sort_by_length(const char** a, const char** b) {
  return 1;
}

void string_sort(char** arr,const int len,int (*cmp_func)(const char** a, const char** b)){
   
   for(int i=0; i<len; i++)
   {
       for(int j=i + 1; j <len; j++)
       {
         //printf("bef - %s : %s\n", arr[i], arr[j]);
         cmp_func(&arr[i], &arr[j]);
           //printf("aft - %s : %s\n", arr[i], arr[j]);
       }
   }
}


int main() 
{
    int n;
    scanf("%d", &n);
  
    char** arr;
	arr = (char**)malloc(n * sizeof(char*));
  
    for(int i = 0; i < n; i++){
        *(arr + i) = malloc(1024 * sizeof(char));
        scanf("%s", *(arr + i));
        *(arr + i) = realloc(*(arr + i), strlen(*(arr + i)) + 1);
    }
  
    string_sort(arr, n, lexicographic_sort);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
    printf("\n");

    string_sort(arr, n, lexicographic_sort_reverse);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]); 
    printf("\n");

    string_sort(arr, n, sort_by_length);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);    
    printf("\n");

    string_sort(arr, n, sort_by_number_of_distinct_characters);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]); 
    printf("\n");
}