/*
 * @lc app=leetcode.cn id=141 lang=c
 *
 * [141] 环形链表
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

  struct ListNode {
      int val;
      struct ListNode *next;
  };
int hasCycle(struct ListNode *head) {
    // if(head==0||head->next==0){
    //         return 0;
    // }
    // struct ListNode *p1=head,*p2=head->next;
    // while(p1!=p2){
    //     if(p2==0||p2->next==0){
    //         return 0;
    //     }
    //     p1=p1->next;
    //     p2=p2->next->next;
    // }
    // return 1;
    struct ListNode *Addr[10000]={0};
    short i=0,j;
    while(head!=0){
        for(j=0;j<10000;j++)
            if(head==Addr[j]) return 1;
        Addr[i]=head;
        head=head->next;
        i++;
    }
    return 0;
}
// @lc code=end

