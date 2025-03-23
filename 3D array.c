//3D array
#include <stdio.h>
int main()
{
  int i,j,k;
  //declaration and initialization
  int marks[2][2][3]={
    {
      {2,4,3},
      {1,3,2}
    },
    {
      {5,8,4},
      {6,3,7}
    }
  };
  //for loop
  for(i=0; i<2; i++){
    for(j=0; j<2; j++){
      for(k=0; k<3; k++){
        printf("%d /t", marks[i][j][k]);
      }
      printf("\n");
    }
    printf("\n");
  }
  return 0;
}
