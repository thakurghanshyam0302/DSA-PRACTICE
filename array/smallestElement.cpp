#include<iostream>
#include<climits>
using namespace std;
int main(){
    int size,S_index=0,L_index=0;
    int smallest=INT_MAX;
    int largest= INT_MIN;
    cout<<"enter size of array : ";
    cin>>size;
    int arr[size];// INSRT ELEMENT
    for(int i=0; i<size; i++){
    cout<<"enter element to insert : ";
    cin>>arr[i];//PRINT ELEMENT
}for(int i=0; i<size; i++){
    cout<<"array elements are : "<<arr[i]<<endl;
}//FIND SMALLEST
for(int i=0; i<size; i++){
    if(arr[i]<smallest){
        smallest=arr[i];
        S_index=i;
    }if(arr[i]>largest){
        largest=arr[i];
        L_index=i;
    }
}cout<<"smallest element is : "<<smallest<<" at index : "<<S_index<<endl;
cout<<"largest element is : "<<largest<<" at index : "<<L_index<<endl;
    return 0;
}