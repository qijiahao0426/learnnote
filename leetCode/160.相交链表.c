/*
 * @lc app=leetcode.cn id=160 lang=c
 *
 * [160] 相交链表
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    int len1=0,len2=0;
    struct ListNode *p=headA,*q=headB;
    while(p){
        p=p->next;
        len1++;
    }
    while(q){
        q=q->next;
        len2++;
    }
    int dis=len1-len2;
    if(dis>0){
        while(dis--){
            headA=headA->next;
        }
    }else{
        while(dis++){
            headB=headB->next;
        }
    }
    while(headA!=0&&headB!=0){
        if(headA==headB) return headA;
        headA=headA->next;
        headB=headB->next;
    }
    return 0;
}
// @lc code=end

