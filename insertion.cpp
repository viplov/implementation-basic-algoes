#include<iostream>
using namespace std;
int main()
{int n,temp;
cout<<"enter no of elements in array: ";
cin>>n;
int ar [n];
cout<<"enter elements: ";
for(int i=0;i<n;i++)
   cin>>ar[i];
   for(int i=1;i<n;i++)
   {
       //6 5 0 2 4
       //
       int temp2 = ar[i];
       if(ar[i] < ar[0]) {
           for(int j = i - 1; j >= 0 ; --j) {
               ar[j+1] = ar[j];
           }
           ar[0] = temp2;
       } else if(ar[i] <= ar[i-1]) {
          for(int j = i; j >= 0; j--)
          {
             if(ar[i] > ar[j]) {
              temp=ar[j+1];
              ar[j+1]=ar[i];
              for(int m=i-1;m>j+1;m--)
                ar[m+1]=ar[m];
              ar[j+2]=temp;
              break;
             }
          }
       }
        for(int i=0;i<n;i++)
            cout<<ar[i]<<" ";
        cout<<endl;
     }

 cout<<"sorted array is ";
 for(int i=0;i<n;i++)
   cout<<ar[i]<<endl;

}
