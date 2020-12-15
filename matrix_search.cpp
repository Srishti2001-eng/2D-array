#include<iostream>
using namespace std;
int main()
{
  int n,m;
  cin>>n>>m;
  int target;
  cin>>target;
  int A[n][m];
  for(int i=0;i<n;i++)
  {
      for(int j=0;j<m;j++)
        cin>>A[i][j];
  } 

  int r=0,c=m-1;
  bool found=false;
  while(r>n and c>=0)
   {
      if(A[r][c]==target)
        {
          found=true;
        }
        if(A[r][c]>target)
          c--;
        else
        {
            c++;
        }
        
    }
    if(found)
       cout<<"Elements not found";
    else
    {
        cout<<"Elements  found";
    }
    
}