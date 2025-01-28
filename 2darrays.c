//Collection of 1 dimensional arrays
//Declaration:
//datatype name[size1][size2];
//size1=no. of 1d arrays(no.of rows)
//size2=no. of elements in 1d array(no.of columns)
//element accessed : name[row no.][column no.]
//total no. of elements = size1* size2
//space = total no. of elements * size of element
//Initialization:

#include<stdio.h>
void main(){
    int i,j;
    int B[3][3]={{1,2,3},{4,5,6},{7,8,9}};
//Row wise access:
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",B[i][j]);
        }
        printf("\n");
    }
//column wise access:
//     for(j=0;j<7;j++){
//         for(i=0;i<4;i++){
//             printf("%d",B[i][j]);
//         }
//     }
}
//int A[3][3]={{1,2,3},{4,5,6},{7,8,9}} : initialization looks like a 3 cross 
//if we initialize like int A[3][]={1,2,3} then error comes like except first bracket other dimensions must be declared
//but we can initialize it as A[][3]={1,2,3} this will print first row with the elemetns 1,2,3 and rest elemetns will be printed at random
//if we initialize like int A[3][3]={1,2,3,4,5,6,7,8,9} it will print normally a 3 cross 3 matrix
//if we initiate int A[3][3]={{1,2,3},{4,5,6}} we get automatically the 3rd row as 0,0,0
//if we initializee like int A[3][3]={{1,2},{4,5}} we get 1,2,0 4,5,0 0,0,0

//Storage Scheme:
//memory is sequential but 2d array is 2 dimentional
//row major order : stores first row then 2nd row and so on sequentially
//column major order : stores first column elements then 2nd and so on sequentially
//if we have no. of rows m and no. of columns n
//address of (A[i][j])=base + size of each element*(i*n+j) in row major order
//in column major order = base + size of each elemetn(j*m+i)

//A : address of first element
//A+1 : addition by size of row
//if we assume base address to be 500 and 12 elements like int A[3][4]
//then A + 1 will give us 508 size of row is 4 elements into 2 size of each element 
//A+0 will give 500
//A[0]: address of first element
//A[0]+1:addition by size of row
//printf("%u",A[0]) : 500
//printf("%u",A[0]+1) : 508
//printf("%u",A[0]+2) : 516
//printf("%u",A[1]+1) : address of first row 508 + size of row 1 time that is 8 = 508+8= 516
//&A : address of array
//&A +1 : addition by size of array
//printf("%u",&A) : 500
//printf("%u",&A+1) : 524
//printf("%u",&A+2) : 548
//&A[2][3] : address of an element
//&A[2][3]+1 : addition by size of an element
//*(A+i): base address of ith row or address of the first element of the row
