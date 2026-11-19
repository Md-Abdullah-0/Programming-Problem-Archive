#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter Number: ";
    cin>>n;
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            int p=i*n+j;
         
            if(p>=26)
            { 
               return 0;
            }   
            char ab='A'+p;
           cout<<ab<<" ";
        }
        cout<<endl;
    }
}
