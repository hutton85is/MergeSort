#ifndef MERGESORT_H
#define MERGESORT_H

#include "Node.h"

using namespace std;

class MergeSort
{
public:

    Node* sorter(Node* head){
        if (head == NULL || head->next == NULL){
            return head;
        }
        return mergeList(sorter(head), sorter(splitList(head, head)));
    }

    Node* mergeList(Node* list1, Node* list2){
        if (list1 == NULL){
            return list2;
        }
        else if (list2 == NULL){
            return list1;
        }
        else if (list1->number <= list2->number){
            list1->next = mergeList(list1->next, list2);
            return list1;
        }
        list2->next = mergeList(list1, list2->next);
        return list2;
    }

    Node* splitList(Node* slow, Node* fast){
        if (fast->next == NULL || fast->next->next == NULL){
            Node* list2 = slow->next;
            slow->next = NULL;
            return list2;
        }
        return splitList(slow->next, fast->next->next);
    }
};

#endif // MERGESORT_H
