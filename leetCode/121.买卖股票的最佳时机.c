/*
 * @lc app=leetcode.cn id=121 lang=c
 *
 * [121] 买卖股票的最佳时机
 */

// @lc code=start


int maxProfit(int* prices, int pricesSize){
    int max=0;
    for(int i=0;i<pricesSize-1;i++){
        for(int j=i+1;j<pricesSize;j++){
            if(prices[i]<prices[j]&&prices[j]-prices[i]>max){
                max=prices[j]-prices[i];
            }
        }
    }
    return max;
}


// @lc code=end

