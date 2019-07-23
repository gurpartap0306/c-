#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the rotLeft function below.
vector<int> rotLeft(vector<int> a, int d) {
vector <int> b=a;
int j=0;
int size=a.size();
for(int i=size-d;i>-d;i--,j--){
    b[i]=a[j];
}
return b;
}

int main()
{
    vector<int>a{1,2,3,4,5};
    vector<int>b;
    int c[5]={1,2,3,4,5};
    int d=4;
    cout<<c[3]<<endl;
    //b=rotLeft(a,d);

    for(int i=0;i<5;i++)
    cout<<a[i];
    return 0;
}
