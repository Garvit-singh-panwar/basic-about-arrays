#include<iostream>
using namespace std;
int main(){
    int array[]={1,2,3,4,5,6,7};
    int size = sizeof(array)/sizeof(array[0]);
    for(int indx = 0 ; indx < size ; indx++){
        cout<< array[indx]<< endl ;

    }
    // using for each loop 
    // in this we dont have the flexiblity to chose element it traverse through every element
    cout << " traverse through for each loop"<< endl;
    for(int element : array){
        cout << element << endl;
    }
    cout << "traverse through while loop : "<< endl;
    int index=0;
    while(index < size){
        cout<< array[index]<< endl;
        index++;
    }
    return 0;

}