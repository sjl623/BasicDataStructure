#define NULL 0

struct Node{
    struct Node* last;
    struct Node* next;
    int num;

};

class ListStack{
    public:
        ListStack();
        ~ListStack();

        bool IsEmpty();
        unsigned int GetNowLength();

        void Push(int num);
        int Pop();
    
    private:
        unsigned int NowLength;
        struct Node* FirstNode;
        struct Node* NowNode;
        
};

ListStack::ListStack(){
    FirstNode=new struct Node;
    NowNode=FirstNode;
    FirstNode->last=NULL;
    FirstNode->next=NULL;
    NowLength=0;
}

ListStack::~ListStack(){
    struct Node* TmpNow=FirstNode;
    while(!TmpNow){
        struct Node* TmpNext=TmpNow->next;
        delete TmpNow;
        TmpNow=TmpNext;
    }
}

bool ListStack::IsEmpty(){
    if(NowLength==0) return true;
    else return false;
}

unsigned int ListStack::GetNowLength(){
    return NowLength;
}

void ListStack::Push(int num){
    struct Node* TmpNow=new struct Node;
    TmpNow->num=num;
    TmpNow->next=NULL;
    TmpNow->last=NowNode;
    NowNode->next=TmpNow;
    NowNode=TmpNow;
    NowLength++;
}

int ListStack::Pop(){
    int res=NowNode->num;
    struct Node* TmpNode=NowNode;
    NowNode=TmpNode->last;
    NowNode->next=NULL;
    delete TmpNode;
    NowLength--;
    return res;
}


