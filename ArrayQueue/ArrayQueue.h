class ArrayQueue{
    public:
        ArrayQueue(int Length);
        ~ArrayQueue();

        bool IsEmpty();
        unsigned int GetTotalLength();
        unsigned int GetNowLength();

        bool Push(int num);
        int Pop();
    
    private:
        unsigned int TotalLength;
        unsigned int InputCustor;
        unsigned int OuputCustor;
        int* Queue;

};

ArrayQueue::ArrayQueue(int Length){
    Queue=new int[Length];
    TotalLength=Length;
    InputCustor=0;
    OuputCustor=0;
}

ArrayQueue::~ArrayQueue(){
    delete Queue;
}

bool ArrayQueue::IsEmpty(){
    if(InputCustor-OuputCustor==0) return true;
    else return false;
}

unsigned int ArrayQueue::GetTotalLength(){
    return TotalLength;
}

unsigned int ArrayQueue::GetNowLength(){
    return InputCustor-OuputCustor;
}

bool ArrayQueue::Push(int Num){
    if(InputCustor-OuputCustor<TotalLength){
        Queue[(InputCustor++)%TotalLength]=Num;
    }
    else{
        return false;
    }
}

//Called IsEmpyth() to avoid SIGSEV 
int ArrayQueue::Pop(){
    return Queue[(OuputCustor++)%TotalLength];
}

