// code to get the the sum of all elements in a array
#include<iostream>
using namespace std;
int main(){
    int ary[]={5,6,7,12,34,12,89 };
    int size,sum;
    sum=0;
    size=sizeof(ary)/sizeof(ary[0]);
    // we are just using another variable sum initilise it with zero and then add all elements of a array 
    for(int indx=0 ; indx<size ; indx++){
        sum=sum+ary[indx];
    }
    cout<<" Value of sum of all elements in a array : " << sum << endl;
    return 0;
}
