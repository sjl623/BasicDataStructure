#define NULL 0

struct Node{
    struct Node* last;
    struct Node* next;
    int num;

};

class ListQueue{
    public:
        ListQueue();
        ~ListQueue();

        bool IsEmpty();
        unsigned int GetNowLength();

        void Push(int num);
        int Pop();
    
    private:
        unsigned int NowLength;
        struct Node* FirstNode;
        struct Node* InputNode;
        struct Node* OuputNode;
        
};

ListQueue::ListQueue(){
    FirstNode=new struct Node;
    InputNode=FirstNode;
    OuputNode=FirstNode;
    FirstNode->last=NULL;
    FirstNode->next=NULL;
    NowLength=0;
}

ListQueue::~ListQueue(){
    struct Node* TmpNow=FirstNode;
    while(!TmpNow){
        struct Node* TmpNext=TmpNow->next;
        delete TmpNow;
        TmpNow=TmpNext;
    }
}

bool ListQueue::IsEmpty(){
    if(NowLength==0) return true;
    else return false;
}

unsigned int ListQueue::GetNowLength(){
    return NowLength;
}

void ListQueue::Push(int num){
    InputNode->num=num;
    struct Node* TmpNextNode=new struct Node;
    TmpNextNode->next=NULL;
    TmpNextNode->last=InputNode;
    InputNode->next=TmpNextNode;
    InputNode=TmpNextNode;
    NowLength++;

}

int ListQueue::Pop(){
    int res=OuputNode->num;
    struct Node* TmpNode=OuputNode;
    OuputNode=TmpNode->next;
    OuputNode->last=NULL;
    delete TmpNode;
    FirstNode=OuputNode;
    NowLength--;
    return res;
}


