// ģ���ϣ��+һ�α���
// ʱ�临�Ӷ�O(n)���ռ临�Ӷ�O(1)
int hashTable(char key)
{ // ģ�⽨��һ��hash��
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
        // ���Է��֣�ǰ����ֵ�Ⱥ��ߴ��ȣ�һ������ӣ��Ⱥ���С��һ�������
        if (first >= second) { 
            res += first;
        } else {
            res -= first;
        }
    }
    res += hashTable(s[len - 1]); // ���һλһ�������
    return res;
}
