#include <bits/stdc++.h>
using namespace std;

// 1 -> swap two numbers
// 2 -> find the xor of given number n from [1-n] without complexity of O(N)
// 3 -> Given a range (L-R) find the xor(l^l+1^l+2^l+3....^r-1^r)
// 4 -> Check ith bit is set or not
// 5 -> Set ith bit 
// 6 -> Clear  ith bit
// 7 -> Clear last set bit
// 8 -> Power of 2  if(n&(n-1)==0) then power of two
// 9 -> Count no. of set bits in any number
// 10 -> Even and odd  if(n&1) then odd else even
// 11 -> __builtin_popcount(n) this is function to count number of set bits in a number


int main()
{
    // Question 1
    // int a=5,b=7;
    // a=a^b;
    // b=a^b;
    // a=a^b;
    // cout<<a<<' '<<b<<endl;

    // Question 2
    //  n    xor
    //  1 -> 1
    //  2 -> 3
    //  3 -> 0
    //  4 -> 4
    //  5 -> 1
    //  6 -> 7
    //  7 -> 0
    //  8 -> 8

    // int n;cin>>n;
    // if (n % 4 == 0)
    //     cout << n << endl;
    // else if (n % 4 == 1)
    //     cout << 1 << endl;
    // else if (n % 4 == 2)
    //     cout << n + 1 << endl;
    // else if (n % 4 == 3)
    //     cout << 0 << endl;



    // Question :3

    //Solution is Xor(R) - Xor(L - 1);
    // int l, r;
    // cin >> l >> r;
    // auto findXor = [&](int n)
    // {
    //     if (n % 4 == 0)
    //         return n;
    //     else if (n % 4 == 1)
    //         return 1;
    //     else if (n % 4 == 2)
    //         return n+1;
    //     else if (n % 4 == 3)
    //         return 0;
    // };
    // int ans=findXor(r)-findXor(l-1);
    // cout<<ans<<endl;


    // Question 4:
    // int n,i;cin>>n,i;
    // int mask=1<<i;
    // bool ans=(mask&n==0)?1:0;
    // cout<<ans<<endl;

    //Question :5 
    // int n,i;cin>>n>>i;
    // int mask=1<<i;
    // n=n|mask;
    // cout<<n<<endl;


    //Question 6
    // int n,i;cin>>n>>i;
    // int mask=~(1<<i);
    // n=n&mask;
    // cout<<n<<endl;

    //Question 7
    // int n;cin>>n;
    // n=n&(n-1);
    // cout<<n<<endl;


    //Question 9
    // int n;cin>>n;
    // int cnt=0;
    // while(n!=0){
    //     if(n&1==1) cnt++;
    //     n=n>>1;
    // }
    //   or 
    //    while(n!=0){
    //        n=n&(n-1); // clearing last set bits
    //        cnt++;
    //    }
     
    // cout<<cnt<<endl;

    
    

    return 0;
}
