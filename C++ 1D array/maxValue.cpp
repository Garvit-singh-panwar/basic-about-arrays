//  finding max value out of  all the elements in a array
#include<iostream>
using namespace std;
int main(){    
    int array[]{10,23,13,43,34,5,7,9};
    int max,size;
    //  we are initialising max equals to the first element of array
    // why we are not initialising max = 0
    // because what if all the elements in our array is negative 
    //  if it happens then at the end max = 0 and we print the maxvalue = 0 and this is wrong 
    max=array[0];
    //  using variable max we find int maximum value 
    size=sizeof(array)/sizeof(array[0]);
    for(int indx=0;indx<size ; indx++){
        //  we are comparing max with all the elements of a array
        // if the value is bigger than max then we give the value of element to max 
        // and if not we skip 
        if(max<array[indx]) {
            max=array[indx];
        }
        else{
            continue;
        }
    }
    //  after compelition of loop the maximam value of array is stored in max then we just print max 
    cout<<"Max value in a array :"<< max << endl;
    return 0;
}