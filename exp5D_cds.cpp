//23070123115
//Sara Kanyal
//Experiment-5 D

#include <iostream>
using namespace std;

int main(){
char oper;
float n1, n2;
cout<<"Enter an operator (+, -, *, /): ";
cin>>oper;
cout<<"Enter two numbers: "<<endl;
cin>> n1 >> n2;

switch (oper) {
case '+':
cout<< n1 <<" + "<< n2 <<" = "<< n1 + n2;
break;
case '-':
break;
case '*':
cout<< n1 <<" * "<< n2 <<" = "<< n1 * n2;
break;
case '/':
cout<< n1 <<" / "<< n2 <<" = "<< n1 / n2;
break;
default:
//operator is doesn't match any case constant (+, -, *, /)
cout<<"Error! The operator is not correct";
break;
    }

return 0;
}

