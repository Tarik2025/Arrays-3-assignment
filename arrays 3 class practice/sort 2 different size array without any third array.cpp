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
  cout<<"enter the sorted elemnts in the array:"<<endl;
  for(int i=0;i<n;i++)
  {
    int q;
    cin>>q;
    v.push_back(q);
  }
  cout<<"the array elemnts entered  in array 1 are:"<<endl;
  display(v);
   vector<int> v1;
  int n1;
  cout<<"enter the size of array:";
  cin>>n1;
  cout<<"enter the sorted elemnts in the array:"<<endl;
  for(int i=0;i<n1;i++)
  {
    int q1;
    cin>>q1;
    v1.push_back(q1);
  }
  cout<<"the array elemnts entered  in array 2 are:"<<endl;
  display(v);
  vector<int> r;
  int i=0;
  int j=0;
  while(i<n && j<n1)
  {
    if(v[i]<v1[j])
    {
    r.push_back(v[i]);
    i++;
    }
    else
    {
        r.push_back(v1[j]);
        j++;
    }
    if(i==n)
    {
        while(j<n1)
        {
            r.push_back(v1[j]);
            j++;
        }
    }
     if(j==n1)
    {
        while(i<n)
        {
            r.push_back(v[i]);
               i++;
        }
    }
  }
  cout<<"the third array is :"<<endl;
  display(r);

}