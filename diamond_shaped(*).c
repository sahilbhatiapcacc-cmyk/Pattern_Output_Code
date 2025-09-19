#include<stdio.h>
int main(){
  int h;
  scanf("%d",&h);
    for(int i=1;i<=h;i++){
      for(int space=1;space<=(h-i);space++){
        printf(" ");
      }
      for(int j=1;j<=2*i-1;j++){
      printf("*"); 
      }
 
      printf("\n");
    } 
    // printf("\n");
    
    for(int i=h-1;i>=1;i--){
      for(int space=(h-i);space>=1;space--){
        printf(" ");
      }
      for(int j=2*i-1;j>=1;j--){
      printf("*"); 
      }
 
      printf("\n");
    }
    
    return 0;
}
