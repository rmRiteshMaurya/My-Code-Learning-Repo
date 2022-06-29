//STATEMENT-1 : 
// A girl have permission to go out every odd days of months not even days.
// She got only Rs.3000 to invest for her outs,  if she invest Rs.300 per
// outs then terminate the loop when it money goes Rs.0

#include<iostream>
using namespace std;

int main(){

    int pocketMoney=3000;

    for (int dates=1; dates<=30; dates++){
        if (dates%2==0){
            continue;
        }
        if (pocketMoney==0){
            cout<<"Running out pocketMoney"<<endl;
            break;
        }
        cout<<"Dates= "<<dates<<" Go out today"<<endl;
        pocketMoney=pocketMoney-300;
    }
}