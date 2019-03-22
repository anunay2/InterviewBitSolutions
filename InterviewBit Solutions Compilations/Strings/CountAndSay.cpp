string Solution::countAndSay(int A){
    string str="1";
    if(A==1){
        return str;
    }
    int count=0;
    int index=0;
    string str1="";
    for(int i=2;i<=A;i++){
        while(index<str.length()){
            int ch=str[index];
            while(ch==str[index]){
                index++;
                count++;
                if(index>=str.length()){
                    break;
                }
            }
            string temp=to_string(count);
            temp.append(1,ch);
            str1=str1.append(temp);
            count=0;
        }
        str=str1;
        str1="";
        index=0;
    }
    return str;
}

