#include <bits/stdc++.h> 
class Node
{
    public:
        int val;
        Node *next;
        Node(int val){
            this->val = val;
            this->next = NULL;
        }
};
// Implement class for minStack.
class minStack
{
	// Write your code here.
	int sz = 0;
	Node *head = NULL;
	Node *tail = NULL;
	stack<int>q;

	
	public:
		
		// Constructor
		minStack() 
		{ 
			// Write your code here.
		}
		
		// Function to add another element equal to num at the top of stack.
		void push(int num)
		{
			// Write your code here.
			Node *newNode = new Node(num);
			if (head == NULL)
        	{
            	head = newNode;
            	tail = newNode;
				q.push(head);
            	return;
        	}
			tail->next = newNode;
			tail = newNode;
			if(q.top()<newNode){
				q.push(newNode);
			}

		}
		
		// Function to remove the top element of the stack.
		int pop()
		{
			// Write your code here.
        	if (head == NULL)
        	{
            	tail = NULL;
            	return -1;
        	}
        	sz--;
        	if(head==tail){
            	head = NULL;
            	tail = NULL;
           	 	delete head;
            	delete tail;
				delete q;
            	return;
        	}
       	 	Node *temp = head;
       	 	while (temp->next->next != NULL)
       	 	{
            	temp = temp->next;
        	}
        	tail = temp;
			if(temp->val == q.top()){
				q.pop();
			}
        	delete temp->next;
        	tail->next = NULL;

	

		}
		
		// Function to return the top element of stack if it is present. Otherwise return -1.
		int top()
		{
			// Write your code here.
			if (head == NULL)
        	{
            	return -1;
        	}

        	return tail->val;
		}
		
		// Function to return minimum element of stack if it is present. Otherwise return -1.
		int getMin()
		{
			// Write your code here.
			return q.top();

		}
};