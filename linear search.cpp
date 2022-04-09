#include <iostream>

using namespace std;
int search(int arr[],int n,int x)
{
    int i;
    int c=0;
    for(i=0;i<n;i++)
        if(arr[i]==x)
            return i;
    return -1;
}

int count(int arr[],int n,int x)
{
 int c=1;
 for(int i=0;i<=n;i++)
 {
     if(arr[i]==x)
     {
         break;
     }
     c++;
 }
 return c;
}

int main()
{
    int arr[]={1,20,5,7,3,8,10};
    int x=3;
    int n=sizeof(arr)/sizeof(arr[0]);

    int result = search(arr,n,x);
    (result==-1)
       ?cout<<"element is not present in array"
       :cout<<"element is present in this array at:"<<result<<endl;

    int r = count(arr,n,x);
    cout<<"no.of comparisons:"<<r<<endl;
  return 0;
}
