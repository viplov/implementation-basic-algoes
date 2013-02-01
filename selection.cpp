#include<iostream>
using namespace std;
int main()
{int n,temp,index,min;
cout<<"enter no of elements in aaray";
cin>>n;
int ar [n];
cout<<"enter elements ";
for(int i=0;i<n;i++)
   cin>>ar[i];
for(int i=0;i<n;i++)
   { min=ar[i];
   index=i;
       for(int j=i;j<n;j++)
       {if(min>ar[j])
         {min=ar[j];
          index=j;}
       }
     temp=ar[i];
     ar[i]=ar[index];
     ar[index]=temp;
   }
cout<<" sorted array is ";
for(int i=0;i<n;i++)
   cout<<ar[i]<<endl;                
       
 system("pause");
}       
       
          

