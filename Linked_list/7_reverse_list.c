/*
 * Reverse link list leet code ques 
 *
 * @Sahil Bhatiwal (1910990683)
 *
 * Assignment 6 (Ques 7)
 */
struct ListNode* reverseBetween(struct ListNode* head, int left, int right){
    struct ListNode *start = head, *end = head;

    if(right - left <= 0)
        return head;

    while(--left){
        start = start -> next;
    }

    while(right--){
        end = end -> next;
    }
    
    struct ListNode *temp = head;
    
    if(start == head)
        temp = start;
    else{
        while(temp -> next != start){
            temp = temp -> next;
        }
    }
    
    struct ListNode *prev = start;
    struct ListNode *curr = start -> next;
    
    while(curr != end){
        struct ListNode *a = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = a;
    }

    if(start == head){
        temp = prev;
        head = temp;
    }

    else
        temp -> next = prev;

    start -> next = curr;

    return head;
}

