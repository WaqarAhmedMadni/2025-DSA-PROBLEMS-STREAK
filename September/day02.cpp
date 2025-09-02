/*Problem statement - https://www.codechef.com/problems/TRICOIN
Solution IN C++
APPROACH: I started off thinking about it as a pattern-finding problem, but then realized it was actually more about binary search and using the sum of n terms.
So, I decided to bring both ideas together in my code and using a mid variable for binary search while applying the summation logic. 
That combination finally clicked and gave me the correct output, which led to an AC.
*/

#include <bits/stdc++.h>
using namespace std;

#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL);

void solution()
{
    long long n;
    cin>>n;
    long long ans=0;
    long long start=0,end=n;
    while(start<=end)
    {
       long long mid=start+(end-start)/2;
      long long temp= (mid*(mid+1)/2);
       if(temp<=n)
       {
           ans=mid;
           start=mid+1;
       }
       else
       end=mid-1;     
    }
    cout<<ans;
    
}
int main() {
    fastio();
    int t;
    cin >> t;
    while (t--) {
        solution();
        cout<<"\n";
    }
    return 0;
}
