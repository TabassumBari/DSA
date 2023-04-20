#include <iostream>
#include"Merged.h"
#include"Merged.cpp"
using namespace std;

int main()
{
  void mergeArray(int ar1[],int ar2[],int m,int n,int merged[])
{

    int i=0;
    int j=0;
    int k=0;
    while(i<m&&j<n)
    {
        if(ar1[i]<ar2[j])

        {
        merged[k]=ar1[i];
        i++;
        }

       else
       {
        merged[k]=ar2[j];
        j++;
       }
       k++;

    }
    while(i<m)
{
    merged[k]=ar1[i];
    i++;
    k++;

}
while(j<n)
{
    merged[k]=ar2[j];
    j++;
    k++;
}
}



int main()
{
  int ar1[]={1,5,9,10,11,20};
  int ar2[]={4,6,7,13,22,30,40};
  int m=sizeof(ar1)/sizeof(ar1[0]);
  int n=sizeof(ar2)/sizeof(ar2[0]);
  int merged[m+n];
  mergeArray(ar1,ar2,m,n,merged);
  cout<<"The two arrays merged are:"<<endl;
  for(int i=0;i<m+n;i++)
  {
      cout<<merged[i]<<" ";
  }
}
}
