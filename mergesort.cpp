#include<iostream>
#include<vector>

using namespace std;

void merge(vector<int> A, int p,int q,int r){
  int n1=q-p+1;
  int n2=r-q;
  int l[n1+1],r[n2+1];
  for(int i=)
}

void merge_sort(vector<int> A,int p,int r){
  if(p<r){
    int q=((p+r)/2);
    merge_sort(A,p,q);
    merge_sort(A,q+1,r);
    merge(A,p,q,r);
  }
}

int main(){
  vector<int> arr;
  int n;
  cout<<"enter number of elements"<<endl;
  cin>>n;
  cout<<"enter values"<<endl;
  int temp;
  for(int i=0;i<n;i++){
    cin>>temp;
    arr.push_back(temp);
  }
  merge_sort(arr,0,n-1);

  for(int i=0;i<n;i++)
    cout<<arr[i]<<"\t";

  return 0;
}
