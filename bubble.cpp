#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cout<<"enter elments in array ";
    cin>>n;
     int ar[n];
    for (int i=0;i<n;i++)
    cin>>ar[i];
    for (int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(ar[j]>ar[j+1]) {
                m=ar[j];
                ar[j]=ar[j+1];
                ar[j+1]=m;
            }
        }
    }
     
    cout<<"sorted array is";
       
      for (int i=0;i<n;i++)
      cout<<ar[i]<<endl;
      system("pause");
  }          
       
       
       
       
       
       
       
       

