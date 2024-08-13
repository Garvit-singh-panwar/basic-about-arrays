#include<iostream>
using namespace std;
int main()
{
    int arr1[5],arr2[5],arr3[5];
    cout<< "enter elements in arr1" << endl;
    for(int i=0 ; i < 5 ; i++)
    {
        cin >> arr1[i];
    }
     cout<< "enter elements in arr2" << endl;
    for(int i=0 ; i < 5 ; i++)
    {
        cin >> arr2[i];
    }
    for(int i=0 ; i < 5 ; i++)
    {
         arr3[i] =arr1[i]+arr2[i];
    }
    cout << "Sum of elemens of arr1 and arr2 : ";
    for(int i : arr3){
        cout << i << " ";
    }
    return 0;
}