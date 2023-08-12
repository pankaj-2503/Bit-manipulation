#include<bits/stdc++.h>
using namespace std;


// 1 -> Find 2 numbers which appears once while other are appearing twice
// 2 -> Finding no of possible subarray using bit manipulation or power_set
int main(){
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++){cin>>a[i];}
    // 1-> solution
    // int xr=0;
    // for(int i=0;i<n;i++) xr^=a[i];
    // int cnt=0;
    // while(xr){
    //     if(xr&1==1) break;
    //     cnt++;
    //     xr=(xr>>1); // right shifting by 1 and checking if set then stop at that pos.
    // }
    // int xr1=0,xr2=0;
    // for(int i=0;i<n;i++){
    //     //we are storing xor if at cnt pos bit is set then store into other vari and if not
    //     // then store into other variable the element occuring once will seperate out
    //     if((a[i]&(1<<cnt))>0) xr1^=a[i];
    //     else xr2^=a[i];
    // }
    
    // cout<<"First Number:"<<xr1<<' '<<"Second Number:"<<xr2<<endl;
     

     
     //2 -> solution
     
     // Time complexity - N(2^N)
     // we can write every size of array into its binary representation and then according 
     // if bit is set then we are adding to our answer
    for(int i=0;i<((1<<n));i++){
        //checking ith number every bits that is set of not
        vector<int>ans;
       for(int bit=0;bit<n;bit++){
         // that is if i'th bit is set then push it to answer
         if((i&(1<<bit))>0) ans.push_back(a[bit]);
       }
        for(auto i:ans) cout<<i<<' '; 
        cout<<endl;
        ans.clear();
    }
   


return 0;
}