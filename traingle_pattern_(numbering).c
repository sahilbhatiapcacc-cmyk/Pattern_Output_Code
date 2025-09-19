#include <stdio.h>
int main(){
  int r,i;
  scanf("%d",&r);
  for(int n=1;n<=r;n++){ //rows from 1 to n
    for(i=1;i<=n;i++){ // inside each row, from 1 to n
    printf("%d ",i);
    }
    printf("\n");
  }
  return 0;  
}
