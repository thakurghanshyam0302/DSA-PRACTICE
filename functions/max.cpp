#include<iostream>
using namespace std;
int min (int x, int y){
    if(x<y){
        cout<<" max = ";
        return y;
    }else{
        cout<<" max= ";
        return x;    }

}
int main(){
    int a,b;
    cout<<"enter two numbers:";
    cin>>a>>b;
   cout<<min(a,b);
   
    return 0;
}