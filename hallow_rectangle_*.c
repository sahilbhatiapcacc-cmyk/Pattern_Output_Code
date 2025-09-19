#include <stdio.h>
int main(){
  int i,n,j;
  scanf("%d %d",&i,&j);
  for(int k=1;k<=i;k++){
    for(int m=1;m<=j;m++){
      if(m==1 || m==j || k==1 || k==i){  //if rows or columns have first or last term then only astrik otherwise space
        printf("*");
      }                         //if we add space in (*) we have to write 2 space 
      else{
        printf(" ");
      }
    }
    printf("\n");
  }
  return 0;
}
