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

    // Reverse a Linked List---
    ListNode* Reverse(ListNode* curr, ListNode* prev){
        if(curr == NULL){
            return prev;
        }

        ListNode* front = curr->next;
        curr->next = prev;
        return Reverse(front, curr);
    }
    ListNode* addTwoNumbers(ListNode* first, ListNode* second) {
        
        first = Reverse(first, NULL);
        second = Reverse(second, NULL);

        ListNode* curr1 = first;
        ListNode* curr2 = second;
        ListNode* head = new ListNode(0);
        ListNode* tail = head;

        // addition 
        int sum, carry = 0;
        while(curr1 && curr2){
            // jab tak curr1 and curr2 exists karte hai tab tak add karo
            sum = curr1->val + curr2->val + carry;
            tail->next = new ListNode(sum%10);
            curr1 = curr1->next;
            curr2 = curr2->next;
            tail = tail->next;
            carry = sum/10;
        }

        // jab tak curr1 exist karta hai tab tak 
        while(curr1){
            sum = curr1->val + carry;
            tail ->next = new ListNode(sum%10);
            curr1 = curr1->next;
            tail = tail->next;
            carry = sum/10;
        }

        // curr2 exist to nhi  karta 

         while(curr2){
            sum = curr2->val + carry;
            tail ->next = new ListNode(sum%10);
            curr1 = curr2->next;
            tail = tail->next;
            carry = sum/10;
         }

         // last me carry abhi v bacha hua hai to usko tackle kar lo alag se
         while(carry){

            tail->next = new ListNode(carry%10);
            tail= tail->next;
            carry/=10;
         }
         // dummy node v present jisko hummlog 0 se intialise kiya tha
        //  head = Reverse(head->next, NULL); // matlab head ke next se jab tak null n ho jaye tab tak reverse karte raho

         return head->next;
    }
};