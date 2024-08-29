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
    void insert_tail(ListNode *&head, ListNode *&tail, int val){
        ListNode *newNode = new ListNode (val);
        if(head==NULL){
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = newNode;
    }
    void print_node(ListNode *head){
        ListNode *temp = head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp= temp->next;
        }
    }
    void reverse(ListNode*&head,ListNode*current){
        if(current->next == NULL){
            head = current;
            return;
        }
        reverse(head,current->next);
        current->next->next = current;
        current->next = NULL;
    }
    bool isPalindrome(ListNode* head) {
        if(head == NULL) return head;
        ListNode *newHead = NULL;
        ListNode *tail = NULL;
        
        ListNode *temp = head;
        while(temp!=NULL){
            insert_tail(newHead,tail,temp->val);
            temp= temp->next;
        }
        // print_node(newNode);
        reverse(newHead,newHead);
        temp = head;
        ListNode* temp2 = newHead;
        while(temp!=NULL){
            if(temp->val != temp2->val){
                return false;
            }
            temp = temp->next;
            temp2 = temp2->next;
        }
        return true;

    }
};