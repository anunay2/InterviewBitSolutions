bool Solution::hotel(vector<int> &arrive, vector<int> &depart, int K) {
    vector<int> padaav;
    sort(arrive.begin(),arrive.end());
    sort(depart.begin(),depart.end());
    padaav.push_back(arrive[0]);
    int a=1;
    int d=0;
    while(1){
        if(a==arrive.size()){
            for(auto j=depart[d];j<depart.size();j++){
                padaav.push_back(depart[j]);
            }
            break;
        }
        if(arrive[a]<depart[d]){
            padaav.push_back(arrive[a]);
            a++;
        }
        else if(depart[d]<arrive[a]){
            padaav.push_back(-depart[d]);
            d++;
        }
        else if(depart[d]==arrive[a]){
            padaav.push_back(-depart[d]);
            padaav.push_back(arrive[a]);
            a++;
            d++;
        }
    }
   // for(auto i=0;i<padaav.size();i++){
     //   cout<<padaav[i]<<"\t";
    //}
    int count=0;
    for(auto i=0;i<padaav.size();i++){
        if(padaav[i]<0){
            count--;
        }
        if(padaav[i]>=0){
            count++;
        }
        //cout<<padaav[i]<<"\t"<<count<<"\n";
        if(count>K){
            return 0;
        }
        
    }
    return 1;
}
