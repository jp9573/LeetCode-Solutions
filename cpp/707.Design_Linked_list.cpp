class MyLinkedList {
public:
    /** Initialize your data structure here. */
    MyLinkedList() {
        
    }
    
    /** Get the value of the index-th node in the linked list. If the index is invalid, return -1. */
    int get(int index) {
        if(index < 0){
            return -1;
        } else if(index<len){
            auto tmp = head;
            for(int i = 0;i<index;i++){
                tmp = tmp->next;
            }
            return tmp->val;
        } else {
            return -1;
        }
    }
    
    /** Add a node of value val before the first element of the linked list. After the insertion, the new node will be the first node of the linked list. */
    void addAtHead(int val) {
        if(head == nullptr){
            head = tail = new Node(val);
        } else {
            auto t = new Node(val);
            t->next = head;
            head = t;
        }
        len++;
        
    }
    
    /** Append a node of value val to the last element of the linked list. */
    void addAtTail(int val) {
        if(tail == nullptr){
            head = tail = new Node(val);
        } else {
            auto t = new Node(val);
            tail->next = t;
            tail = tail->next;
        }
        len++;
    }
    
    /** Add a node of value val before the index-th node in the linked list. If index equals to the length of linked list, the node will be appended to the end of linked list. If index is greater than the length, the node will not be inserted. */
    void addAtIndex(int index, int val) {
        if(index < 0){
            addAtHead(val);
        } else if(len == index){
            addAtTail(val);
        } else if(index == 0) {
            addAtHead(val);
        } else if(index>len){
            return;
        } else {
            auto tmp = head;
            for(int i = 1;i<index;i++){
                tmp = tmp->next;
            }
            auto t = new Node(val);
            t->next = tmp->next;
            tmp->next = t;
            len++;
        }
    }
    
    /** Delete the index-th node in the linked list, if the index is valid. */
    void deleteAtIndex(int index) {
        if(index>=len) return;
        else if(index<0) return;
        if(index==0){
            auto tmp = head->next;
            delete head;
            head = tmp;
        }   
	else {
            auto tmp = head;
            for(int i = 1;i<index;i++){
                tmp = tmp->next;
            }
            auto t = tmp->next;
            tmp->next = t->next;
            delete t;
            if(index == len -1){
                tail = tmp;
            }
        }
        len--;
        if(len == 0){
            tail = nullptr;
        }
    }
private:
    class Node{
    public:
        Node* next;
        int val;
        Node(int v) : val(v){next = nullptr;}
    };
    Node* head = nullptr;
    Node* tail = nullptr;
    int len = 0;
};
