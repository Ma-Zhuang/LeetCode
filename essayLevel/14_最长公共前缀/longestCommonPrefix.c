char * longestCommonPrefix(char ** strs, int strsSize){
    if(strsSize==0) return "";  //����ַ�������Ϊ�գ�ֱ�ӷ���""
    for(int i=0;i<strlen(strs[0]);i++){   //i��ʾ�У�strlen(strs[0])��ʾ��һ���ַ�������
        for(int j=1;j<strsSize;j++){    //j��ʾ��
            if(strs[0][i]!=strs[j][i]){ //����Ƚ��ַ����ĵ�i�в�ͬ�����н�����ֱ������
                strs[0][i]='\0';
                break;
            }
        }
    }
    return strs[0];
}