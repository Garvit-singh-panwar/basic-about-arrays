// searching if a given element value is present in a array or not if it is not present then return (-1) else return the index 
#include<iostream>
using namespace std;
int main(){
    int array[]={1,34,65,23,45,68};
    // we give the element value which we want to check
    int element_Value=45;
    //  we make a variable present if the value is not present in the array then we print -1 so we give the initial value =-1 
    //  if the value is present in the array then we print the index no
    int present=-1;
    // we make a size varible to give the length of array in loop
    int size=sizeof(array)/sizeof(array[0]);
    //  here we traversing the the array 
    for(int indx=0; indx < size; indx++ ){
        //  we are now checking that the elementvlement value is present or not 
        //  if the value is present then we put the index value in the present 
        //  if not then the -1 is already present in it
        if (array[indx]==element_Value){
            present=indx;
            break;
        }
        
    }
    //  then we print present if the value is present it will give us the index no
    //  if not it will give us -1
    cout << present;

 return 0;
    
}