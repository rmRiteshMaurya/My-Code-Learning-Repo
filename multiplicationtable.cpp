#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a positive number"<<endl;
    cin>>n;
    int i;
    while(n>0){
    for(i=1; i<=10; i++){
        cout<<n<<" * "<<i<<"= "<<n*i<<endl;
    }
    cout<<"Enter an another positive number"<<endl;
    cin>>n;
    }
    return 0;
}