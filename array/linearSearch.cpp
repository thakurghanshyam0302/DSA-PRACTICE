#include<iostream>
#include<climits>
using namespace std;
int main(){
    int size,target,key=-1;
    cout<<"enter size of array : ";
    cin>>size;
    int arr[size];// INSRT ELEMENT
    for(int i=0; i<size; i++){
    cout<<"enter element to insert : ";
    cin>>arr[i];
    }cout<<"eter element which has to search in array : ";
    cin>>target;
    for(int i=0; i<size; i++){
        if(arr[i]==target){
            key=i;
            break;
        }

        }
        if(key>=0){
        cout<<target <<" is present in aary at index "<<key<<endl;
    } else {cout<<target <<" is not present in array"<<endl;

    }
    return 0;
}