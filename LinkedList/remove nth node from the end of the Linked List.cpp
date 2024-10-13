class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        int count =0; 
        ListNode*temp= head;
        // calculated total no of nodes
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
        // subtracting total nodes from nodes to be deleted mujhe kon sa node pe jana hai
        count=count-n;
       
       // if we have to delete first node
        if(count==0){
            temp = head;
            head = head->next;
            delete(temp);
            return head;
        }

        ListNode*curr=head;
        ListNode*prev = NULL;
        while(count--){
            prev=curr;
            curr=curr->next;
        }

        // now curr will be standing on the nodes to be deleted and prev pointeing one step behind from curr
        prev->next = curr->next;
        delete(curr);

        return head;
    }
};