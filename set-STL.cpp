int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    set<int>s;
    int x,t;
    int q;
    cin>>q;
    while(q>0){
        cin>>t;
        if(t==1){
            cin>>x;
            s.insert(x);
        }
        else if(t==2){
            cin>>x;
            s.erase(x);
        }
        else{
            cin>>x;
            cout<<(s.find(x)==s.end()?"No":"Yes")<<endl;
        }
        q--;
    }
    
    
    
    return 0;
}
