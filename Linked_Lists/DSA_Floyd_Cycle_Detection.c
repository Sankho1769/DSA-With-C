/*
 * DSA Interview Programs - Linked Lists
 * Floyd's Cycle Detection (Tortoise and Hare)
 * Reusable function: returns 1 when a loop exists, otherwise 0.
 */

int detectLoop(struct Node* head)  {
    struct Node *slow = head, *fast = head;
    while (fast && fast->next)  {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast) return 1;
    }
    return 0;
}
