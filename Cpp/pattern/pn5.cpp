#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int i=1;
    int cnt=1;
    while(i<=n)
    {
        int j=1;
        while (j<=i)
        {
            cout<<cnt<<" ";
            cnt++;
            j+=1;
        }
        cout<<endl;
        i+=1;
    }
}
