//BY SHASHANK
// TWO SUM, 1-09-26
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        ListNode* l3 = new ListNode(0);
        ListNode* ptr = l3;

        int carry = 0;

        while (l1 != nullptr || l2 != nullptr || carry != 0) {

            int sum = carry;

            if (l1 != nullptr) {
                sum += l1->val;
                l1 = l1->next;
            }

            if (l2 != nullptr) {
                sum += l2->val;
                l2 = l2->next;
            }

            ptr->next = new ListNode(sum % 10);
            carry = sum / 10;

            ptr = ptr->next;
        }

        return l3->next;
    }
};
