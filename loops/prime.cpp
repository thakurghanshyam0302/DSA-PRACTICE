#include<iostream>
using namespace std;
int main(){
    int n,i;
    bool isPrime = true;
    cout<<"enter anumber: ";
    cin>>n;
    for(i=2; i<n; i++){
        if(n % i == 0){
            isPrime = false;
        cout<<n<<" not prime"<<endl;
        break;
        }
    } if(isPrime== true){
        cout<<n<<" is prime "<<endl;

    }
    return 0;
}