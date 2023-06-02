/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* findMid(struct ListNode* head){ 
    struct ListNode* turtle = head;
    struct ListNode* hare = head;
    
    while (hare && hare->next){
        turtle = turtle->next;
        hare = hare->next->next;
    }

    return turtle;
}

struct ListNode* reverse(struct ListNode* head){
    struct ListNode* current = head;
    struct ListNode* previous = NULL;
    struct ListNode* next = NULL;

    while (current){
        next = current->next;
        current->next = previous;
        previous = current;
        current = next; 
    }
    
    return previous;
}

bool isPalindrome(struct ListNode* head){
    if (!head || !head->next)
        return true;

    struct ListNode* mid = findMid(head);
    struct ListNode* tail = reverse(mid);
    struct ListNode* current = head;

    while (current && tail) {
        if (current->val != tail->val)
            return false;
        
        current = current->next;
        tail = tail->next;
    }

    return true;
}

