#include<iostream>
using namespace std;
int main(){
    int array[]={1,2,3,4,5};
    // size of array = size of int X no of elements in a array 
    cout << "size of array : "<< sizeof(array)<< endl ;
    // so if I want to fint length of array i have to do : size of array / size of datatype
    // so i have to divide size of array from size of array[0] beacause size of array[0] is a single element which is  = int  
      
    cout<< " length of array : "<< sizeof(array)/sizeof(array[0]);
    return 0;
}