#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    cin.ignore();
    char ar[n+1];

    cin.getline(ar,n);
    cin.ignore();
    
    int i=0;
    int currlen=0,maxlen=0;

    while(1)
    {
        if(ar[i] ==' ' || ar[i]=='\0')
        {
            if(currlen>maxlen)
            {
                maxlen=currlen;
            }
            currlen=0;
        }
        currlen++;
        if(ar[i]=='\0')
        break;

        i++;
    }
    cout<<maxlen<<endl;
    return 0;
}