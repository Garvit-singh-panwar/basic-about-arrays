// inserting value using for each loop
#include<iostream>
using namespace std;
int main(){
    char vowels[5];
    cout << "Enter vowels \n " ;
    for(char &element:vowels){
        cin>> element;
    }
    for(int indx=0;indx<5;indx++){
        cout<< vowels[indx]<< " ";
    }
    return 0;
}