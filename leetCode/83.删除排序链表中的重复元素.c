/*
 * @lc app=leetcode.cn id=83 lang=c
 *
 * [83] 删除排序链表中的重复元素
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
#include<stdlib.h>
struct ListNode* deleteDuplicates(struct ListNode* head){
    if(head==0) return 0;
    struct ListNode* p=head,*pre=p,*q;
    head=pre;
    p=p->next;
    while(p){
        if(pre->val!=p->val){
            pre->next=p;
            pre=p;
            p=p->next;
        }else{
            q=p;
            p=p->next;
            free(q);
        }
    }
    pre->next=0;
    return head;
}


// @lc code=end

