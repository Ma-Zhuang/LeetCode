// INT_MAX = 214748364 
// INT_MIN = -214748364

bool isPalindrome(int x){
    if (x < 0 || (x % 10 == 0 && x != 0)) return false;
    int num = 0;
    while (x > num) {
        num = num * 10 + x % 10;
        x /= 10;
    }
    if((num>INT_MAX/10)||((num==INT_MAX/10)&&(x>7)))   return false;
    else if((num<INT_MIN/10)||((num==INT_MIN/10)&&(x<-8)))  return false;
    else return x == num || x == num / 10;
}