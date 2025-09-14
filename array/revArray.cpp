#include<iostream>
#include<climits>
using namespace std;
int main(){
    int size, start=0;
    cout<<"enter size of array : ";
    cin>>size;
    int arr[size];// INSRT ELEMENT
    for(int i=0; i<size; i++){
         cout<<"enter element to insert : ";
        cin>>arr[i];}
   int end=size-1; 
while(start<end){
    swap(arr[start],arr[end]);
    start++; 
    end--;
}for(int i=0; i<size; i++){
    cout<<arr[i]<<" ";
}
    return 0;
}