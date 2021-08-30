/* Program to check whether the give linked list is palindrome or not.
 *
 * @Sahil Bhatiwal (1910990683)
 *
 * Assignment 6 (Ques 4)
 */

bool recur(struct ListNode **start, struct ListNode *end){
    if(end == NULL)
        return true;
    
    bool isEqual;
    int num = end -> val;
    
    isEqual = recur(start, end -> next);
    
    if(isEqual == false)
        return false;
    if((*start) -> val == num){
        *start = (*start) -> next;
        return true;
    }else{
        return false;
    }
}
bool isPalindrome(struct ListNode* head){
    return recur(&head, head);
}

