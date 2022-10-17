SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* head, int position) {
if (position == 0) {
        SinglyLinkedListNode* newhead = head->next;
        delete head;
        head = newhead;
        return head;
    }
    else {
        SinglyLinkedListNode* temp = head;
        for (int i=0; i<position-1; i++) {
            temp= temp->next;
        }
        SinglyLinkedListNode* del = temp->next;
        temp->next = del->next;
        delete del;
        return head;
    }
}
