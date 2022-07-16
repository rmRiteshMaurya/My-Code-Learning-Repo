#include<iostream>
using namespace std;

int main(){

    float num1, num2;
    cout<<"Enter two numbers to perform an operation"<<endl;
    cin>>num1>>num2;

    char operation;
    cout<<"Enter an operation to do.."<<endl;
    cin>>operation;

    switch (operation)
    {
    case '+':
        cout<<num1 + num2<<endl;
        break;
    case '-':
        cout<<num1 - num2<<endl;
        break;
    case '*':
        cout<<num1 * num2<<endl;
        break;
    case '/':
        cout<<num1 / num2<<endl;
        break;
    default:
        cout<<"Still learning"<<endl;
        break;
    }
    return 0;
}