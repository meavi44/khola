// selectionsort
//this type of dort is unstable
//this sorting method use minindex

#include<bits/stdc++.h>
using namespace std;
void selectionSort(vector<int> &v){
    int n=v.size();
    for(int i=0;i<n;i++){
        int min_idx=i;
        for(int j=i+1;j<n;j++){
            if(v[j]<v[min_idx]){
                min_idx=j;
            }
            
        }
        if(min_idx!=i){
                swap(v[i],v[min_idx]);
            }
    }

}
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    while(n--){
        int i;
        cin>>v[i++];
    }
    selectionSort(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}