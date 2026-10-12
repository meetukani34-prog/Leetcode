class LRUCache {
public:
    class Node{
        public:
            int key,val;
            Node* next;
            Node* pre;
            Node(int k ,int v){
                key=k;
                val=v;
                next=pre=NULL;
            }
    };
    Node* head =new Node(-1,-1);
    Node* tail =new Node(-1,-1);

    unordered_map<int, Node*> m;
    int limit;

    void addNode(Node* newnode){
        Node* oldnext=head->next;
        head->next=newnode;
        oldnext->pre=newnode;
        newnode->next=oldnext;
        newnode->pre=head;
    }

    void delNode(Node* oldnode){
        Node* oldpre=oldnode->pre;
        Node* oldnext=oldnode->next;
        oldpre->next=oldnext;
        oldnext->pre=oldpre;
    }

    LRUCache(int capacity) {
        limit=capacity;
        head->next = tail;
        tail->pre = head;
    }
    
    int get(int key) {
        if(m.find(key)==m.end()){
            return -1;
        }
        Node* ansnode=m[key];
        int ans=ansnode->val;
        m.erase(key);
        delNode(ansnode);
        addNode(ansnode);
        m[key]=ansnode;

        return ans;
    }
    
    void put(int key, int val) {
        if(m.find(key) != m.end()){
            Node* oldnode=m[key];
            delNode(oldnode);
            m.erase(key);
        }
        if(m.size()==limit){
            m.erase(tail->pre->key);
            delNode(tail->pre);
        }
        Node* newnode= new Node(key,val);
        addNode(newnode);
        m[key]=newnode;
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */