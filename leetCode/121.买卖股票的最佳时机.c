/*
 * @lc app=leetcode.cn id=121 lang=c
 *
 * [121] 买卖股票的最佳时机
 */

// @lc code=start


int maxProfit(int* prices, int pricesSize){
    if(pricesSize==0) return 0;
    // int max=0;
    // for(int i=0;i<pricesSize-1;i++){
    //     for(int j=i+1;j<pricesSize;j++){
    //         if(prices[i]<prices[j]&&prices[j]-prices[i]>max){
    //             max=prices[j]-prices[i];
    //         }
    //     }
    // }
    // return max;
    int max=0;
    int min=prices[0];
    int* dp=(int*)calloc((pricesSize+1),sizeof(int));
    for(int i=1;i<pricesSize;i++){
        int tmp=prices[i]-min;
        dp[i]=dp[i-1]>tmp?dp[i-1]:tmp;
        min=min<prices[i]?min:prices[i];
    }
    return dp[pricesSize-1];
}


// @lc code=end

