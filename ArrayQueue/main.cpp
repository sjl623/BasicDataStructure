#include <iostream>

#include "ArrayQueue.h"

using namespace std;

int main(){
    int length;
    cout<<"Please Input the length of Queue:";
    cin>>length;
    ArrayQueue Queue1=ArrayQueue(length);

    int Operator;
    while(true){
        cout<<"What are you going to do?(Input the id before the description):"<<endl;
        cout<<"1.Check whether the queue is empty."<<endl;
        cout<<"2.Get the length of queue"<<endl;
        cout<<"3.Push a new integer into the queue"<<endl;
        cout<<"4.Pop a integer from the queue"<<endl;
        cout<<"5.Quit"<<endl;

        cin>>Operator;

        switch(Operator){
            case 1:
                if(Queue1.IsEmpty()){
                    cout<<"Don't pop again before push a new element.The queue is empty now."<<endl;
                }
                else{
                    cout<<"The queue is not empty now.Enjoy it."<<endl;
                }
                break;
            case 2:
                cout<<"The length of stack is "<<Queue1.GetNowLength()<<"/"<<Queue1.GetTotalLength()<<endl;
                break;
            case 3:
                cout<<"Input the new integer please:";
                int NowInteger;
                cin>>NowInteger;
                if(Queue1.Push(NowInteger)){
                    cout<<"Done~The length of stack is "<<Queue1.GetNowLength()<<"/"<<Queue1.GetTotalLength()<<endl;
                }
                else{
                    cout<<"The queue is full,pop something first."<<endl;
                }
                break;
            case 4:
                if(Queue1.IsEmpty()){
                    cout<<"Don't pop again before push a new element.The queue is empty now."<<endl;                    
                }
                else{
                     cout<<"The top element of the queue is "<<Queue1.Pop()<<endl;
                     cout<<"The length of queue is "<<Queue1.GetNowLength()<<"/"<<Queue1.GetTotalLength()<<endl;
                }
               
                break;
            case 5:
                cout<<"GoodBye~"<<endl;
                return 0;
            case 1014:
                cout<<"xcy"<<endl;
                break;
            default:
                cout<<"Check your input then try again!"<<endl;
                break;
        }

    }
    
}