class MyLinkedList {
public:

    class Node {
    public:
        int val;
        Node* next;

        Node(int value) {
            val = value;
            next = NULL;
        }
    };

    Node* head;
    Node* tail;
    int length;

    MyLinkedList() {
        head = NULL;
        tail = NULL;
        length = 0;
    }

    void addAtHead(int val) {

        Node* newNode = new Node(val);

        if (length == 0) {
            head = newNode;
            tail = newNode;
        }
        else {
            newNode->next = head;
            head = newNode;
        }

        length++;
    }

    void addAtTail(int val) {

        Node* newNode = new Node(val);

        if (length == 0) {
            head = newNode;
            tail = newNode;
        }
        else {
            tail->next = newNode;
            tail = newNode;
        }

        length++;
    }

    int get(int index) {

        if (index < 0 || index >= length) {
            return -1;
        }

        Node* temp = head;

        for (int i = 0; i < index; i++) {
            temp = temp->next;
        }

        return temp->val;
    }

    void addAtIndex(int index, int val) {

        if (index < 0 || index > length) {
            return;
        }

        if (index == 0) {
            addAtHead(val);
            return;
        }

        if (index == length) {
            addAtTail(val);
            return;
        }

        Node* newNode = new Node(val);

        Node* temp = head;

        for (int i = 1; i < index; i++) {
            temp = temp->next;
        }

        newNode->next = temp->next;
        temp->next = newNode;

        length++;
    }

    void deleteAtIndex(int index) {

        if (index < 0 || index >= length) {
            return;
        }

        if (index == 0) {

            Node* deleteNode = head;

            head = head->next;

            delete deleteNode;

            length--;

            if (length == 0) {
                tail = NULL;
            }

            return;
        }

        Node* temp = head;

        for (int i = 1; i < index; i++) {
            temp = temp->next;
        }

        Node* deleteNode = temp->next;

        temp->next = deleteNode->next;

        if (index == length - 1) {
            tail = temp;
        }

        delete deleteNode;

        length--;
    }
};