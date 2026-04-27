void removeDuplicates(Node* head) {
    Node* current = head;

    while (current != NULL) {
        Node* prev = current;
        Node* temp = current->next;

        while (temp != NULL) {
            if (temp->data == current->data) {
                prev->next = temp->next;
                delete temp;
                temp = prev->next;
            } else {
                prev = temp;
                temp = temp->next;
            }
        }

        current = current->next;
    }
}