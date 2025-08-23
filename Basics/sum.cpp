#include<iostream>
using namespace std;

int main() {
    int ch, s = 0;
    cout<<"Enter Nth Number"<<endl;
    cin>>ch;
    for(int i=1; i<=ch; i++)
    {
        if ( i%2 == 0)
            s+=i;
    }
    cout<<s<<endl;
    return 0;


}