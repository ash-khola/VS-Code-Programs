def factAndRev(num):
    copy=num
    fact=1
    for i in range(1,num+1):
        fact*=i
    s=0
    while(num>0):
        s+=num%10
        num=num//10
    if(fact>s):
        rev=0
        rem=0 
        while(copy>0):
            rem=copy%10
            rev=(rev*10)+rem
            copy = copy//10
        print("The factorial of the numnber is greater than the sum of its  digits so the reversed number is:",rev)
    else:
        print("The factorial is not greater than the sum of the digits.")
    


num = int(input("Enter the number:"))
factAndRev(num)


void removeLoop(Node* head)
    {
        if(head->next == head)
        {
            head->next =NULL;
            return;
        }
        
        Node *slow = head, *fast = head;

        while(fast!=NULL and fast->next !=NULL)
        {
            fast = fast->next->next;
            slow = slow->next;
            
            // If head is in loop
            if(slow->next == head)
            {
                slow->next = NULL;
                return;
            }
            
            // any node except head is in loop
            if(fast == slow)
            {
                slow = head;
                while(slow->next != fast->next)
                {
                    slow = slow->next;
                    fast = fast->next;
                    
                }
                
                fast->next = NULL;
                
                    
                return;
            }
        }
        return;
    }

class Solution
{
    public:
    void removeLoop(Node* head)
    {
        if(head->next == head)
        {
            head->next =NULL;
            return;
        }
        Node *slow=head;
        Node *fast=head;
        while(fast!=NULL and fast->next!=NULL)
        {
            fast=fast->next->next;
            slow=slow->next;
            Node*prev=slow;
            bool first=false;
            if(slow->next == head)
            {
                slow->next = NULL;
                return;
            }
            if(fast==slow)
            {
                Node* temp=head;
                while(slow->next!=fast->next)
                {
                    temp=temp->next;
                    slow=slow->next;
                    first=true;
                }
                slow->next=NULL;
                break;
            }
   
        }
    }
};
