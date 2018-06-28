#ifndef NODE_H
#define NODE_H


class Node
{
    public:
        Node(int number, Node* next) {
            this->number = number;
            this->next = next;
        }
        int number;
        Node* next;
};

#endif // NODE_H
