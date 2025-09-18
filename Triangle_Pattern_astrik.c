#include <stdio.h>
int main(){
  int r,i,j,space;
  scanf("%d",&r);
  for(i=1;i<=r;i++){ //for rows 
    for(space=1;space<=(r-i);space++){
      printf(" "); //for space (decreasing every lines)
    }
    for(j=1;j<=(2*i-1);j++){ //for columns
      printf("*");
    }
    printf("\n");
  }
  return 0; 
}
