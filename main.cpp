#include <iostream>
#include <fstream>
#include "include/MergeSort.h"

using namespace std;

int main()
{
    int number = -100;
    Node* root = NULL;
    Node* tail;
    ifstream myfile("input.txt");
    myfile >> number;
    for (; myfile != NULL; myfile >> number){
        if (!root){
            root = new Node(number, NULL);
            tail = root;
        }
        else{
            tail->next = new Node(number, NULL);
            tail = tail->next;
        }
    }

    MergeSort m;

    for (Node* runner = root; runner != NULL; runner = runner->next){
        cout << runner->number << " ";
    }
    cout << endl;

    root = m.sorter(root);
    for (Node* runner = root; runner != NULL; runner = runner->next){
        cout << runner->number << " ";
    }
    cout << endl;

    return 0;
}
