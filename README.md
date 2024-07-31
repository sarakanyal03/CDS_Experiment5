# Experiment5

AIM: To study and implement C++ decision making statements. <br>

THEORY: <br>
Based on certain conditions decision making statments in C++ allow you ti control the flow of execution. Some decision making statements in C++ are: <br>
1) if statement : It evaluates a condition. If the condition is true, the block inside the 'if' statement is executed. <br>
2) if-else statement : It provides alternative path of execution if the condition under 'if' statement is false. <br>
3) if-else-if ladder : It helps in checking multiple consitions. The control will go down until a condition which is true is found. <br>
4) nested if : It is an 'if' statement which consists of one or more 'if' statement inside it. Used for creating complex decision making structures. <br>
5) switch statement : The 'switch' statement is the control statement which changes the control of execution based on option or cases provided.

CODE: <BR>
1) CODE A:<BR>
```
#include <iostream>
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
```

2) CODE B: <BR>
```
#include <iostream>
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
```


3) CODE C: <BR>
```
#include <iostream>
using namespace std;

int main() {
    int choice;
    cout<<"1. Monday"<<endl<<"2. Tuesday"<<endl<<"3. Wednesday"<<endl<<"4. Thursday"<<endl<<"5. Friday"<<endl
    <<"6. Saturday"<<endl<<"7. Sunday"<<endl;
    
    cout <<"Enter your choice: ";
    cin>>choice;
    switch(choice) {
        case 1:
        cout<<"Monday";
        break;
        case 2:
        cout<<"Tuesday";
        break;
        case 3:
        cout<<"Wednesday";
        break;
        case 4:
        cout<<"Thursday";
        break;
        case 5:
        cout<<"Friday";
        break;
        case 6:
        cout<<"Saturday";
        break;
        case 7:
        cout<<"Sunday";
        break;
        default:
        cout<<"Wrong Input";
    }
}
```


4) CODE D:  <BR>
```
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
```


5) CODE E:<BR>
```
#include <iostream>
using namespace std;

int main() {
int day = 1;
  switch (day) {
    case 6:
cout<< "Today is Saturday";
      break;
    case 7:
cout<< "Today is Sunday";
      break;
    default:
cout<< "Looking forward to the Weekend";
  }
  return 0;
}
```
<br>

OUTPUT: <BR>

5A : <BR>
![5A](https://github.com/sarakanyal03/CDS_Experiment5/blob/main/a.png)
5B : <BR>
![5B](https://github.com/sarakanyal03/CDS_Experiment5/blob/main/b.png)
5C : <BR>
![5C](https://github.com/sarakanyal03/CDS_Experiment5/blob/main/c.png)
5D : <BR>
![5D](https://github.com/sarakanyal03/CDS_Experiment5/blob/main/d.png)
5E : <BR>
![5E](https://github.com/sarakanyal03/CDS_Experiment5/blob/main/e.png)

CONCLUSION :  <BR>
This experiment has provided practical implementation of decision-making statements in C++. 
