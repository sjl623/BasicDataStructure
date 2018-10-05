class ArrayStack{
    public:
        ArrayStack(int Length);
        ~ArrayStack();

        bool IsEmpty();
        unsigned int GetTotalLength();
        unsigned int GetNowLength();
        
        bool Push(int Num);
        int Pop();

    private:
        unsigned int TotalLength;
        unsigned int NowLength;
        int* Stack;
};

ArrayStack::ArrayStack(int Length){
    Stack=new int[Length];
    TotalLength=Length;
    NowLength=0;
}

ArrayStack::~ArrayStack(){
    delete(Stack);
}

bool ArrayStack::IsEmpty(){
    if(NowLength==0) return true;
    else return false;
}

unsigned int ArrayStack::GetTotalLength(){
    return TotalLength;
}

unsigned int ArrayStack::GetNowLength(){
    return NowLength;
}

bool ArrayStack::Push(int Num){
    if(NowLength<TotalLength){
        Stack[NowLength++]=Num;
    }
    else{
        return false;
    }
}

//Called IsEmpyth() to avoid SIGSEV 
int ArrayStack::Pop(){
    NowLength--;
    return Stack[NowLength];
}