#include<stdio.h>
void main(){
    //If else
    // int num;
    // scanf("%d",&num);
    // if(num>5){
    //     printf("Greater");
    // }
    // else{
    //     printf("Smaller");
    // }
    //------------------------------------------------------------------
    //Nested If Else
    //if(num>10){
    //if(num%15==0)
    //}
    //OR
    //if((num>10)&&(num%15==0))
    //-------------------------------------------------------------------

    //If else ladder
    //if(cgpa>10){
    //printf("Invalid")
    //}
    //else if(cgpa==10){
    //printf("A+")
    //}else if(cgpa==9){
    //printf("A")
    //}and so on.....
    //-------------------------------------------------------------------

    //goto 
    //int x=5;
    //goto Label; 
    //x=6;
    //Label:printf("%d",x);
    //----------------------------------------------------------------


    //switch case
    int cgpa;
    scanf("%d",&cgpa);
    switch (cgpa)
    {
    case 10:
        printf("A+");
        break;
    case 9:
        printf("A");
        break;
    
    default:
        printf("Invalid cgpa");
        break;
    }
}


