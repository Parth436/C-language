//array is collection of similar datatype elements
//All elements are stored on consecutive memory locations
//all elements can be accessed by using set of indexes

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
 