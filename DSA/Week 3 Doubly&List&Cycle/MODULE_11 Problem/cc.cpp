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
    long long int reverse_sum(ListNode *n,ListNode *l1){
        if(n==NULL) return 0;
        long long int mat = reverse_sum(n->next,l1);
        mat = mat*10 + n->val;
        return mat;
    }

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if(l1 == NULL && l2 == NULL) return l1;

        long long int fast = reverse_sum(l1,l1);
        long long int second = reverse_sum(l2,l2);
        long long int adder = fast+ second;
        
        ListNode *newHead = NULL;
        ListNode *newTail = NULL;

        if(adder == 0){
            return l1;
        }
        while(adder != NULL){

            insert_tail(newHead,newTail,adder%10);
            adder/=10;
        }

        return newHead;
    }
};