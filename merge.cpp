#include<iostream>
using namespace std;
void merge (int a[],int ini,int fin);
int main()
{
 int n;
 cout<<"enter no of elemnts";
 cin>>n;
 int ar[n];
 cout<<"enter elemnts:";
 for(int i=0;i<n;i++)
 {
     cin>>ar[i];
 }
 merge(ar,0,n-1);
 for(int i=0;i<n;i++)
 {
     cout<<ar[i]<<"  ";
 }
 cout<<endl;
}




void merge(int a[],int ini,int fin)
{

    int mid=(ini+fin)/2;
    while(ini!=fin)
    {
    merge(a,ini,mid);
    merge(a,mid+1,fin);
    }
    int j=mid+1,pos=0;
    int ar[fin-ini+1],i=ini;
    for(i=ini;i<=mid;)
    {
        if(a[i]<a[j])
        {
            ar[pos]=a[i];
            i++;
            pos++;
        }
        else
        {
            ar[pos]=ar[j];
            j++;

            pos++;
        }
        if(j>fin)break;
    }
        if(pos<=fin)
        {
            while(i<=mid)
            {
                ar[pos]=a[i];
                i++;
                pos++;
            }
            while(j<=fin)
            {
                ar[pos]=a[j];
                j++;
                pos++;
            }
        }
    j=0;
    for(int i=ini;i<=fin;i++)
    {
        a[i]=ar[j];
        j++;
    }
}
