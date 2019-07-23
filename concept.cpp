#include<iostream>
#include<vector>
#include<string>
#include<stdio.h>
#include<ctype.h>
using namespace std;


/*// description on enum
enum e{ram=10,sam=20};
int main(){
cout<<ram;
}


//typecasting
int main(){
  int i=100;
  int j=365;
  int n;
  n=(i-1)*long(j);
  cout<<n<<endl;
  return 0;
}

int * fun(int *a){
  *a= *a+20;
  return a;
}

int main(){
  int *p;
  int a=500;
  p=fun(&a);
  cout<<p<<endl<<*p<<endl;
  return 0;
}

void fun(int a[]){
  for(int i=0;i<5;i++)
    cout<<a[i];
}

int main(){
  int a[5]={1,2,3,4,5};
  fun(a);
return 0;
}


vector<int> fun(vector<int> a){
  int n=a.size();
  cout<<endl;
  vector<int>c;
  for(int i=n-1;i>=0;i--){
    int j=a[i];
    c.push_back(j);
  }
  return c;
}

int main(){
  vector<int>a;
  vector<int>c;
  int n;
  cin>>n;
  for(int i=0;i<n;i++){
    int j;
    cin>>j;
    a.push_back(j);

  }
  c=fun(a);
  for (int i=0;i<n;i++)
  cout<<c[i];
  return 0;
}

*/
int camelcase(string s) {
    int a=1;
    int n=s.length();
    cout<<n<<endl;
    for(int i=0;i<n;i++){
      char k=s[i];
      if(isupper(k))
        a++;
      }
    return a;

}

int main(){
  string s="saveChangesInTheEditor";
  int a=camelcase(s);
  cout<<a;
  return 0;
}
