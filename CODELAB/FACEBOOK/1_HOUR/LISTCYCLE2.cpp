#include <unordered_map>;
#include <map>;

/*
Detect a cycle in a linked list. Note that the head pointer may be 'NULL' if the list is empty.

A Node is defined as: 
    struct Node {
        int data;
        struct Node* next;
    }
*/

bool has_cycle(Node* head) { // probably the most elegant solution but is not constant additional space time
    unordered_map<Node*, int> nodes;
    
    if (head == NULL) {
        return false;
    }
    
    while (head -> next != NULL) {
        nodes[head]++;
        if (nodes[head] > 1) {
            return true;
        }
        head = head -> next;
    }

    return false;
}
