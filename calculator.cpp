#include<iostream>
using namespace std;

int main(){
    int num1, num2;
    char x;

    while(x!= 'X'){
    cout<<"Enter number one"<<endl;
    cin>>num1;
    cout<<"Enter number two"<<endl;
    cin>>num2;

    cout<<"Press A for Addition"<<endl;
    cout<<"Press B for Subtraction"<<endl;
    cout<<"Press C for Multiplication"<<endl;
    cout<<"Press D for Division"<<endl;
    cout<<"Press E for Modulo"<<endl;
    cout<<"Press X for exit"<<endl;

    cin>>x;

    
    if(x=='A' || x=='a'){
        cout<<"The sum is "<< num1+num2<<endl;
    }
    else if(x=='B' || x=='b'){
        cout<<"The difference is "<< num1-num2<<endl;
    }
    else if(x=='C' || x=='c'){
        cout<<"The product is "<< num1*num2<<endl;
    }
    else if(x=='D' || x=='d'){
        cout<<"The quotient is "<< num1/num2<<endl;
    }
    else if(x=='E' || x=='e'){
        cout<<"The remainder is "<< num1%num2<<endl;
    }
    else{
        cout<<"Invalid Operation!"<<endl;
    }
    }
    return 0;

}