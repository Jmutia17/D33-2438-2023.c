//2D array
#include <stdio.h>
int main()
{
  int i,j;
  //declaration and initialization
  int marks[3][2]={
    {2,4},
    {1,3},
    {2,1},
  };
  //for loop
  for(i=0; i<3; i++){
    for(j=0; j<2; j++){
      printf("%d \n", marks[i][j]);
    }
    printf("\n");
    return 0;
  }
