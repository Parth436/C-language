//array is collection of similar datatype elements
//All elements are stored on consecutive memory locations
//all elements can be accessed by using set of indexes
#include<stdio.h>;
void main(){
//declaration:
//datatype name[size]
    int A[50];
//motive is to store similar datatype elements under a single name
    char cha[10];
//indexes from 0 to n-1
//address of first element is address of array and is calledd base address of the array
//location or address of an element in an array equal to = base adress + size of each element*i
// int *A[10] = array A which shows 10 pointers to integer
//so it stores pointers wich points to some integer
    int A[5];
    int i;
    for(i=0;i<5;i++){
    printf("%d\n",A[i]);//but we didnt assign any values so some garbage values will be printed
    }
//to get some values we have to add a loop before this loop
    for(i=0;i<5;i++){
    scanf("%d",&A[i]);
    }

//Array  initialization:
    int A[i]={6,2,4,8,9};
//if we have size 5 and initialised less than size then the uninitialised values are filled with zeroes internally
//if we give more values than size then it will give error
//if we initialised without size then it automatically sets the size to the no. of initialised elements
    char ch[]={'v' ,'g' ,'d', 'r','s','t'};
    printf("%c",ch[2]);//prints g
    printf("%c",4[ch]);//prints s
//A[i] and i[A] are same
    printf("%c",ch[2+1]);//prints r

//Address of first element is base address of array
    int A[5]={6,3,5,1,9};
    printf("%u",&A[0]);
//if wee write just A or &A[0] it represents base address of array or address of first elemetn of an array
//if we write just &A then it means address of an array
//if we increment pointer then it doesnt simply increase by 1 but it increses in a fashion :
// p+i=p+Size*i
// A+i = A + size of element * i
//A[i]=i[A]=*(A+i)=*(i+A)
//but if we do &A +1 it will be address of array + size of array * i


}