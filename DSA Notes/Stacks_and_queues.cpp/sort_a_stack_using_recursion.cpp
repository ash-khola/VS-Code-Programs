// You are given an array of k linked-lists lists, each linked-list is sorted in ascending order.
// Merge all the linked-lists into one sorted linked-list and return it.

ListNode* mergeKLists(vector<ListNode*>& lists) {
    if(lists.size() == 0) {
        return NULL;
    }
    
    ListNode *first = lists[lists.size() - 1];
    lists.pop_back();
    
    ListNode *second = mergeKLists(lists);
    
    if(first == NULL) {
        return second;
    }
    else if(second == NULL) {
        return first;
    }
    
    ListNode *head, *sorted;
    if(first->val <= second->val){
        sorted = first;
        first = first->next;
    }
    else {
        sorted = second;
        second = second->next;
    }
    head = sorted;
    
    while(first != NULL and second != NULL) {
        if(first->val <= second->val) {
            sorted->next = first;
            first = first->next;
        }
        else {
            sorted->next = second;
            second = second->next;
        }
        
        sorted = sorted->next;
    }
    
    if(first != NULL) {
        sorted->next = first;
    }
    
    if(second != NULL) {
        sorted->next = second;
    }
    
    return head;
}