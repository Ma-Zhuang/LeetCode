解法：模拟哈希表+一次遍历
解题思路：
自建函数模拟哈希表hashTable，发现规律直接一次遍历

复杂度分析：
时间复杂度O(n)：一层for循环。
空间复杂度O(1)：hash需要的额外空间固定。

```c
// 模拟哈希表+一次遍历
// 时间复杂度O(n)，空间复杂度O(1)
int hashTable(char key)
{ // 模拟建立一个hash表
    if (key == 'I') {
        return 1;
    } else if (key == 'V') {
        return 5;
    } else if (key == 'X') {
        return 10;
    } else if (key == 'L') {
        return 50;
    } else if (key == 'C') {
        return 100;
    } else if (key == 'D') {
        return 500;
    } else {
        return 1000;
    }
}

int romanToInt(char * s)
{
    int len = strlen(s);
    int res = 0;
    for (int i = 0; i < len - 1; i++) {
        int first = hashTable(s[i]);
        int second = hashTable(s[i + 1]);
        // 可以发现，前者数值比后者大或等，一定是相加，比后者小，一定是相减
        if (first >= second) { 
            res += first;
        } else {
            res -= first;
        }
    }
    res += hashTable(s[len - 1]); // 最后一位一定是相加
    return res;
}
```

