#include<bits/stdc++.h>
using namespace std;

int main(){
    priority_queue<int>pq;
    int arr[]={10,4,5,2,0};
    for(int ele:arr){
        if(pq.size()==3){
            if(ele>pq.top()){
                pq.pop();
                pq.push(ele);
            }
            
        }
        else
            pq.push(ele);
    }
    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }

}