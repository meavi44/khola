#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,t;
    cin>>t;
    char arr[51];
   
    while(t--){
        
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int count=0;
        for(int i=0;i<n;i++){
        if((arr[i]=='*'||arr[i]=='.')&&(arr[i+1]=='*'||arr[i+1]=='.')&&(arr[i+2]=='*'||arr[i+2]=='.')){
                break;
            }
            if(arr[i]=='@'){
            count++;
            }
        }
        cout<<count<<endl;
    }
}