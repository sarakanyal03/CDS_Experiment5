//23070123115
//Sara Kanyal
//Experiment-5 a

#include<iostream>
using namespace std;

int main() {
    int  a;
    cout<<"Enter positive number: ";
    cin>>a;
    if(a==0) {
        cout<<a<<" is zero"<<endl;
    }
    else if(a%2!=0){
        cout<<a<<" is odd"<<endl;
    }
    else {
        cout<<a<<" is even"<<endl;
    }
}
