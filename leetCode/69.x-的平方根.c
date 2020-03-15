/*
 * @lc app=leetcode.cn id=69 lang=c
 *
 * [69] x 的平方根
 */

// @lc code=start


int mySqrt(int x){
    if(x<2) return x;
    long left=2;
    long right=x/2;
    while(left<=right){
        long mid=left+(right-left)/2;
        long s=mid*mid;
        if(s>x){
            right=mid-1;
        }else if(s<x){
            left=mid+1;
        }else{
            return mid;
        }
    }
    return right;
}


// @lc code=end

// 2 3 4 5 6 7    17