#include<iostream>
using namespace std;
int main(){
    int n,sum=0,i=0;
    cout<<"enter a number : ";
    cin>>n;
    for(i=0;i<=n;i++){
        if(i%2!=0){
            sum+= i;
        }    }
    cout<<"odd sum = "<<sum;
    return 0;
}