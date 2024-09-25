#include <stdio.h>

int main(void) {
  int num;
  printf("Enter a whole number: ");
    scanf("%d",&num);
  if (num > 10){ 
    printf("Greater than 10");
  }
  else if (num < 10){
    printf("Less than 10");
  }
  else{
    printf("Equal to 10");
  }
  return 0;
}
