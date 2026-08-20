class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if (head == nullptr)
            return nullptr;
        int size = 0;
        ListNode* temp = head;
        while (temp != nullptr) {
            size++;
            temp = temp->next;
        }
        int target = size - n;
        if (target == 0)
            return head->next;
        temp = head;
        ListNode* prev = nullptr;
        int cnt = 0;
        while (cnt < target) {
            prev = temp;
            temp = temp->next;
            cnt++;
        }
        prev->next = temp->next;
        return head;
    }
};