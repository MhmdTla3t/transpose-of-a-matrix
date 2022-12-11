// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>
int main() {
int matrix[10][10], transMatrix[10][10], row, col;
 printf("Enter the number of rows: ");
 //  cout<<"Enter the number of rows: ";
//   cin>>row;
  scanf("%d",&row); 
//   cout<<"Enter the number of columns: ";
 printf("Enter the number of columns: ");
 //  cin>>col;
  scanf("%d",&col); 
   /* Asking the user to input the elements of matrix
    * and storing them in the matrix array
    */
     printf("Enter elements of matrix: ");
       printf("\n");
//   cout<<"Enter elements of matrix: "<<endl;
   for(int i =0;i<row;i++) {
     for(int j=0;j<col;j++) {
      // cin>>matrix[i][j];
       scanf("%d",&matrix[i][j]);
     }
   }
   // Finding the transpose matrix.
  for(int i=0;i<row;i++) {
    for(int j=0;j<col;j++) {
      transMatrix[j][i] = matrix[i][j];
    }
  }
  //Displaying the transpose matrix
 // cout<<"Transpose of Matrix: "<<endl;
       printf("Transpose of Matrix: ");
         printf("\n");
     
  for(int i=0;i<col;i++) {
    for(int j=0;j<row;j++) {
     // cout<<transMatrix[i][j]<<" ";
      printf("%d\t",transMatrix[i][j]);
      /* This is just to format the output
       * so you can see the matrix format
       * in the output transpose matrix.
       */
      if(j==row-1)
    //    cout<<endl;
    printf("\n");
    }
  }
  return 0;
}

