/* Program to remove nth node from last of a linked list.
 *
 * @Sahil Bhatiwal (1910990683)
 *
 * Assignment 6 (ques 6)
 *
 */

struct ListNode* removeNthFromEnd(struct ListNode* head, int n){
    int size = 0;
    struct ListNode* temp = head;
    while(temp != NULL){
        size++;
        temp = temp->next;
    }
    printf("%d\n", size);
    temp = head;
    if(size == 1 && n == 1)
        return NULL;
    if(size == n)
        return head = head -> next;
    int i = 0;
    int k = size - n;
    while(++i < k){
        temp = temp -> next;
    }
    temp->next = temp -> next -> next;
    return head;
}

