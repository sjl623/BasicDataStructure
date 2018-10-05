#include <iostream>

#include "ListStack.h"

using namespace std;

int main(){
    ListStack Stack1=ListStack();
    int Operator;
    while(true){
        cout<<"What are you going to do?(Input the id before the description):"<<endl;
        cout<<"1.Check whether the stack is empty."<<endl;
        cout<<"2.Get the length of stack"<<endl;
        cout<<"3.Push a new integer into the stack"<<endl;
        cout<<"4.Pop a integer from the stack"<<endl;
        cout<<"5.Quit"<<endl;

        cin>>Operator;

        switch(Operator){
            case 1:
                if(Stack1.IsEmpty()){
                    cout<<"Don't pop again before push a new element.The stack is empty now."<<endl;
                }
                else{
                    cout<<"The stack is not empty now.Enjoy it."<<endl;
                }
                break;
            case 2:
                cout<<"The length of stack is "<<Stack1.GetNowLength()<<endl;
                break;
            case 3:
                cout<<"Input the new integer please:";
                int NowInteger;
                cin>>NowInteger;
                Stack1.Push(NowInteger);
                break;
            case 4:
                if(Stack1.IsEmpty()){
                    cout<<"Don't pop again before push a new element.The stack is empty now."<<endl;                    
                }
                else{
                     cout<<"The top element of the stack is "<<Stack1.Pop()<<endl;
                     cout<<"The length of stack is "<<Stack1.GetNowLength()<<endl;
                }
               
                break;
            case 5:
                cout<<"GoodBye~"<<endl;
                return 0;
            case 1014:
                cout<<"wait?"<<endl;
                break;
            default:
                cout<<"Check your input then try again!"<<endl;
                break;
        }

    }
    
}