/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        // if either list is empty, return the other list
        if (!l1) return l2;
        if (!l2) return l1;
        
        // create a dummy head for the merged list
        ListNode* dummyHead = new ListNode(-1);
        ListNode* mergedList = dummyHead;
        
        // traverse both lists, adding the smaller element to the merged list
        while (l1 && l2) {
            if (l1->val < l2->val) {
                mergedList->next = l1;
                l1 = l1->next;
            }
            else {
                mergedList->next = l2;
                l2 = l2->next;
            }
            mergedList = mergedList->next;
        }
        
        // add any remaining elements from the non-empty list
        if (l1) mergedList->next = l1;
        if (l2) mergedList->next = l2;
        
        // get rid of the dummy head and return the merged list
        ListNode* head = dummyHead->next;
        delete dummyHead;
        return head;
    }
};