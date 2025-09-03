/* Problem Statement- https://www.codechef.com/START202D/problems/FLOWERBUY
Beautiful Mathematical analysis problem
*/
#include <bits/stdc++.h>
using namespace std;

#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL);

void solution()
{
    int n;
    cin>>n;
    if(n==2)
    {
        cout<<4;
        return;
    }
    if(n==3)
    {
      cout<<5;
      return;
    }
    if(n%3==0)
    cout<<((n/3)*5);
    if(n%3==1)
    cout <<5*((n)/3)+3; 
    if(n%3==2)
    cout<<5*((n)/3)+4;
}
int main() {
    fastio();
    
    int t = 1;
    cin >> t;
    while (t--) {
        solution();
        cout<<"\n";
    }
    return 0;
}
