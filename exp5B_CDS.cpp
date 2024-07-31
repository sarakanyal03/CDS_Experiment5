//23070123115
//Sara Kanyal
//Experiment-5 b

#include<iostream>
using namespace std;

int main() {
    int  n1, n2, n3;
    cout<<"Enter number1:";
    cin>>n1;
    cout<<"Enter number2:";
    cin>>n2;
    cout<<"Enter number3:";
    cin>>n3;

    if(n1>n2) {
        if(n1>n3) {
            cout<<n1<<" is the greatest number"<<endl;
        }
        else {
            cout<<n3<<" is the greatest number"<<endl;
        }
    }
    else if(n2>n1) {
        if(n2>n3) {
            cout<<n2<<" is the greatest number"<<endl;
        }
        else {
            cout<<n3<<" is the greatest number"<<endl;
        }
    }
    else {
        cout<<"All numbers are equal";
    }
}