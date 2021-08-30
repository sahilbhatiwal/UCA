/* Program to find the position/ index in the list where cycle starts or return NULL if no cycle detected.
 *
 * @Sahil Bhatiwal (1910990683)
 *
 * Assignmnet 6 (Ques 10)
 *
 */


struct ListNode *detectCycle(struct ListNode *head) {

    if(head == NULL || head -> next == NULL)
        return NULL;

    struct ListNode *slow = head -> next;
    struct ListNode *fast = head -> next -> next;

    while(slow != fast){

        if(slow -> next == NULL || fast -> next == NULL || fast -> next -> next == NULL)
            return NULL;
        slow = slow -> next;
        fast = fast -> next -> next;
    }

    fast = head;

    while(fast != slow){
        fast = fast -> next;
        slow = slow -> next;
    }

    return slow;
}

