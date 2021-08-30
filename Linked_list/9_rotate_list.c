/* Program to rotate a linked list by k in c.
 * 
 * @Sahil Bhatiwal (1910990683)
 *
 * Assignment 6 (ques 9)
 *
 */

struct ListNode* rotateRight(struct ListNode* head, int k){

    if(head == NULL || head -> next == NULL)
        return head;

    int size = 0;

    struct ListNode *iter = head;

    while(iter != NULL){
        size++;
        iter = iter -> next;
    }

    int n = size - (k%size);
    
    if(n == 0 || n == size)
        return head;
    
    iter = head;
    while(--n){
        iter = iter -> next;
    }

    struct ListNode *temp = iter -> next;
    struct ListNode *temp1 = iter -> next;
    
    iter -> next = NULL;

    while(temp1 -> next != NULL){
        temp1 = temp1 -> next;
    }
    
    temp1 -> next = head;
    head = temp;
    
    return head;
}

