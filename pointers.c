//pre and post increment
//++a incremented value of a is used
//a++ value of a is used and then it is incremented
//ex:- int a=5; printf("%d",++a);output=6
//ex:- int a=5; printf("%d",a++);output=5 and then a = 6.
//--------------------------------------------------------------------
#include<stdio.h>
void main(){
//Pointers:-Its a type of variable but it doesnt store a value instead it stores address of another variable
//Pointer declaration
//while declaring pointer the type of pointer is the same as the type of variable whose address the pointer is storing
//type *name;it is a pointer declaration
//ex:- int *p; the * shows that this variable doesnt store value but an address
//meaning of the above example is the pointer p stores address of an integer 
    int a =5;
// int *p;
// p = &a;//value of p is the address value of a
//suppose a is stored in memory at address 200 and p is stored at 300 the the value stored at 200 is 5 and value stored at 300 is 200
    int *p= &a;//declaration and initialization
    printf("%d\n",a);
    printf("%d\n",p);
    printf("%d\n",&a);
    printf("%d\n",&p);
    printf("%d\n",*p);//Value at address p
    //(*p)++; the value of a will be updated
    //-----------------------------------------------------------------
//Pointer Arithmetics
    //Operations allowed in pointer arithmetics :
    //1.Increment/decrement of a pointer
        //Increment/decrement is done by size of element pointed and not by 1
        //for example pointer to a character is incremented/decremented by 1 byte and float by 4 bytes
    //2.Addition of integer to a pointer
        //p(pointer)+i(innteger)=p+(size of value pointed by p * i)
        //int p=200; p+3 = 200 + (3*size of int so 2)=200+6=206
        //float q=300; q+2=q+(2*4)=q+8=308
    //3.Subtracting of integer to a pointer
        //similar to addition
    //4.Subtracting two pointers of the same type 
        //p-q=(p-q)/size of pointer
        //ex:- int *p,*q; p=350 q=356; q-p=356-350/2=6/2=3
    //5.Comparison of two pointers of the same type
        //p>q , p<q , p>=q , p<=q etc

    //sizeof function returns size of input in bytes
    //ex:-  sizeof(int)= 2;
    //int x; char y; float z;
    //sizeof(x)=2;sizeof(y)=1;sizeof(z)=4
    //sizeof() function
    //ex:- int *p; char *q; float *t;
    //sizeof(p)=2;sizeof(q)=2;sizeof(t)=2; because all are pointers and pointers stores addresses and address is an unsigned integer
    //sizeof(*t)=4;
    
    //Char constants and ASCII
    //ASCII is a 7 bit character set containing 128 characters
    //a character is stored in memory in binary form so to encode a character into a binary form ASCII code is used
    //char ch ='A'-> 1000001 binar, 65 decimal for capital A
    //1.Printable Characters
    //2.Device Control Characters :- \n,\t etc
    //ASCII values:-
    //a-z = 97-122
    //A-Z = 65-90
    //Null('\0') = 0
    //Tab('\t') = 9
    //Enter('\n') = 10

}