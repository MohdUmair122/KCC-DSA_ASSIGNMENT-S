bool has_cycle(SinglyLinkedListNode* head) {
SinglyLinkedListNode *slow = head;
    SinglyLinkedListNode *fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
        if (fast == slow)
        {
            return true;
        }
    }
    return false;
}
