/*
 * @lc app=leetcode.cn id=13 lang=c
 *
 * [13] 罗马数字转整数
 */

// @lc code=start
int getValue(char s);
int romanToInt(char * s){
    int sum=0;
    int pre=getValue(s[0]);
    while(*s){
        if(pre<getValue(*(s+1))){
            sum-=pre;
        }else{
            sum+=pre;
        }
        pre=getValue(*(s+1));
        s++;
    }
    sum+=pre;
    return sum;
}

int getValue(char s){
    switch(s) {
            case 'I': return 1;
            case 'V': return 5;
            case 'X': return 10;
            case 'L': return 50;
            case 'C': return 100;
            case 'D': return 500;
            case 'M': return 1000;
            default: return 0;
        }
}

	// int count = 0;
	// while (*s){
	// 	if (*s == 'V')         count += 5;
	// 	else if (*s == 'L')    count += 50;
	// 	else if (*s == 'D')    count += 500;
	// 	else if (*s == 'M')    count += 1000;
	// 	else if (*s == 'I')
	// 		count = (*(s + 1) == 'V' || *(s + 1) == 'X') ? count - 1 : count + 1;
	// 	else if (*s == 'X')
	// 		count = (*(s + 1) == 'L' || *(s + 1) == 'C') ? count - 10 : count + 10;
	// 	else
	// 		count = (*(s + 1) == 'D' || *(s + 1) == 'M') ? count - 100 : count + 100;
	// 	s++;
	// }
	// return count;

// @lc code=end

