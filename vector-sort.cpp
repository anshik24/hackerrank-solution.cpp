int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int x,arr;
    cin>>x; 
    vector<int>v;

    for(int i=0;i<x;i++){
        cin>>arr;
    v.push_back(arr);
        
    } 
    sort(v.begin(),v.end());
  for(int i=0;i<x;i++){  
    cout<<v[i]<<" ";
  }
cout<<endl;
    return 0;
}
