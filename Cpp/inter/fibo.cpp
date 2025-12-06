#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int a=0,b=1;
    for( int i=1;i<=n;i++)
    {
        int nxt=a+b;
        cout<<nxt<<" ";
        a=b;
        b=nxt;
    }
}
