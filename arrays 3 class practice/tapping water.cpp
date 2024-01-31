#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> &a)
{
    int n=a.size();
    for(int i=0;i<=n-1;i++)
    {
        cout<<a[i]<<endl;
    }
}
int main()
{
  vector<int> v;
  int n;
  cout<<"enter the size of array:";
  cin>>n;
  cout<<"enter the elemnts in the array:"<<endl;
  for(int i=0;i<n;i++)
  {
    int q;
    cin>>q;
    v.push_back(q);
  }
  cout<<"the array elemnts entered are:"<<endl;
  display(v);
  // find greatest before
  vector<int> b(n);
  b[0]=-1;
  int max=v[0];
  for(int i=1;i<n;i++)
  {
    b[i]=max;
    if(v[i]>max)
    {
        max=v[i];
    }
  }
  cout<<"previous greatest elements are:"<<endl;
  display(b);
  vector<int> a(n);
  a[n-1]=-1;
  int maxn=v[n-1];
  for(int j=n-2;j>=0;j--)
  {
    a[j]=maxn;
    if(v[j]>maxn)
     {
        maxn=v[j];;
     }
  }
  cout<<"the next greatest elements are:"<<endl;
  display(a);
  vector<int> m(n);
  m[0]=-1;
  m[n-1]=-1;
  for(int i=1;i<n-1;i++)
  {
    if(b[i]<a[i])
    {
    m[i]=b[i];
    }
    else
    {
        m[i]=a[i];
    }
  }
  cout<<"the minimum elements are:"<<endl;
  display(m);
  int water=0;
  for(int i=0;i<n;i++)
  {
    if(v[i]<m[i])
    water+=(m[i]-v[i]);
  }
  cout<<"the total water stored is :"<<water<<endl;
}