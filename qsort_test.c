#include <stdio.h>
#include <stdlib.h>

int comp_int(const void* a, const void*b);

int main(){
  int i, a[3];
  printf("input 3 numbers\n");
  for(i=0; i < 3; i++){
    printf("number a[%d]:", i);
    scanf("%d", &a[i]);
  }
  qsort(a,(sizeof(a)/sizeof(a[0])), sizeof(int), comp_int); 
  if(a[0] == a[1]){
    if(a[1] == a[2]){
      printf("3numbers matched.\n");
    } else {
      printf("2numbers matched.\n");
    }
  } else {
    if(a[1] == a[2]){
      printf("2numbers matched.\n");
    } else {
      printf("no matched.\n");
    }
  }
  return 0;
}

int comp_int(const void* a, const void* b){
  return (*(int*)a - *(int*)b);
}
