#include <stdio.h>
#include<string.h>
#include <limits.h>


int min(int a, int b){return a<b ? a:b;}

int findMinRec(char str[],int l,int h)
{
    if(l>h) return INT_MAX;
    if(l==h) return 0;
    if(l==h-1) return (str[l]==str[h])? 0:1;
    
    return (str[l]==str[h])? findMinRec(str,l+1,h-1):(min(findMinRec(str,l+1,h),findMinRec
    (str,l,h-1))+1);
    return 0;
}
int main() {
    int a,b;
    char str[]= "v";
	findMinRec(str,0,strlen(str)+1);
	return 0;
}	