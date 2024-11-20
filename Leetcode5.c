 void swap(struct ListNode *p1,struct ListNode *p2)
 {
     int t=p1->val;
     p1->val=p2->val;
     p2->val=t;
 }
 int len(struct ListNode *head)
 {
     struct ListNode *p=head;
     int l=0;
     while(p!=NULL)
     {
         l++;
         p=p->next;
     }
     return l;
 }
struct ListNode* insertionSortList(struct ListNode* head){
    struct ListNode *p=head;
    int i,j;
    int l=len(head);
    for(i=0;i<l;i++)
    {
        for(j=0;j<l-i-1;j++)
        {
            if(p->val>p->next->val)
            {
                swap(p,p->next);
            }
            p=p->next;
        }
        p=head;
    }
    return head;

}
