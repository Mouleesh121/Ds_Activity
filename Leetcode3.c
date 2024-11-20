 int isfull(struct ListNode *t)
{
    struct ListNode *q=(struct ListNode *)malloc(sizeof(struct ListNode));
    if(q==NULL)
    {
        return 1;
    }
    else
    return 0;
}
int isempty(struct ListNode *t)
{
    if(t==NULL)
    {
        return 1;
    }
    else
    return 0;
}
struct ListNode *push(struct ListNode *t,int val)
{
    if(isfull(t))
    printf("stack full");
    else
    {
        struct ListNode *q=(struct ListNode *)malloc(sizeof(struct ListNode));
        q->val=val;
        q->next=t;
        t=q;
        return t;
    }
    return t;
}
struct ListNode* reverseList(struct ListNode* head){
    struct ListNode *u=head;
     struct ListNode *top=NULL;
    while(u!=NULL)
    {
        top=push(top,u->val);
        u=u->next;
    }
    return top;

}
