int Solution::firstMissingPositive(vector<int> &A) {
    int max=INT_MIN;
    for(auto i=0;i<A.size();i++){
        if(A[i]>max){
            max=A[i];
        }
    }
    if(max<=0){
        return 1;
    }
//take extra care to use boolean array wherever possible 

    bool  db[max+1];
    memset(db,0,(max+1)*sizeof(db[0]));
    for(auto i=0;i<A.size();i++){
        if(A[i]>=0){
            db[A[i]]=1;
        }
    }
    for(auto i=1;i<max+1;i++){
        if(db[i]==0){
            return i;
        }
    }
    return (max+1);
}
