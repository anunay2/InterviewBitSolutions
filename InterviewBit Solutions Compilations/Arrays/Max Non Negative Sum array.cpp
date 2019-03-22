vector<int> Solution::maxset(vector<int> &A) {
        int start_max=0,end_max=0,start_index=0,end_index=0;
        long long int sum_max=-1,sum=-1;
     for(auto i=0;i<A.size();i++){
            if(A[i]>=0){
                sum=0;
                start_index=i;
                while(A[i]>=0 && i<A.size()){
                    sum=sum+A[i];
                    //cout<<"%\t";
                    i++;
                }
                end_index=i;
            }
            
            if(sum>sum_max){
                sum_max=sum;
                start_max=start_index;
                end_max=end_index;
            }
            else if(sum==sum_max){
                if(abs(end_index-start_index)>abs(end_max-start_max)){
                    start_max=start_index;
                    end_max=end_index;
                }
                else if(abs(end_index-start_index)==abs(end_max-start_max)){
                    if(start_index<start_max){
                        start_max=start_index;
                        end_max=end_index;
                        }
                    }
                }
        }
       // cout<<start_max<<"\t"<<end_max<<"\n";
        vector<int> vect;
        for(auto j=start_max;j<end_max;j++){
            vect.push_back(A[j]);
        }
        return vect;
}

