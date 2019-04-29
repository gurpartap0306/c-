#include<iostream>
using namespace std;

class tree{
private:
  struct node{
    int data;
    node *l;
    node *r;
  }*p;

public:
  tree();
  void search(int n, bool &found, node *&parent);
  void insert(int n);
  void traverse();
  void in(node *q);
  void pre(node *q);
  void post(node *q);
  bool operator == (tree t);
  bool compare (node *pp,node *qq);
//  void operator =(tree t);
//  node* copy (node *q);
};

tree::tree(){
  p=NULL;
}

void tree::search(int n,bool &found,node * &parent){
  node *q;
  found=NULL;
  parent=NULL;

  if(p==NULL)
  return;

  q=p;

  while(q!=NULL){
    if(q->data==n){
      found=true;
      return;
    }
    if(q->data>n){
      parent=q;
      q=q->l;
    }
    else{
      parent=q;
      q=q->r;
    }
  }
}

void tree::insert(int n){
  bool found;
  node *t,*parent;

  search(n,found,parent);

  if(found==true)
  cout<<endl<<"such node already exist";

  else{
    t = new node;
    t->data=n;
    t->l=NULL;
    t->r=NULL;

    if(parent==NULL)
    p=t;
    else
    parent->data>n?parent->l=t:parent->r=t;
  }
}
void tree::traverse(){
  int choice;
  cout<<endl<<"1. inorder"
      <<endl<<"2. preorder"
      <<endl<<"3. postorder";
  cin>>choice;

  switch(choice){
    case 1:
      in(p);
      break;
    case 2:
      pre(p);
      break;
    case 3:
      post(p);
      break;
  }
}
void tree::in(node *q){
  if(q!=NULL){
    in(q->l);
    cout<<"\t"<<q->data;
    in(q->r);
  }
}
void tree::pre(node *q){
  if(q!=NULL){
    cout<<"\t"<<q->data;
    pre(q->l);
    pre(q->r);
  }
}
void tree::post(node *q){
  if(q!=NULL){
    post(q->l);
    post(q->r);
    cout<<"\t"<<q->data;
  }
}

  bool tree::operator==(tree t){
    bool flag;
    flag=compare(p,t.p);
    return (flag);
  }

  bool tree::compare(node *pp,node *qq){
    static bool flag;
    if((pp==NULL)&&(qq==NULL))
      flag=true;
    else{
      if((pp!=NULL)&&(qq!=NULL)){
        if(pp->data!=qq->data)
          flag=false;
        else{
          compare(pp->l,qq->l);
          compare(pp->r,qq->r);
        }
      }
    }
  return(flag);
}

int main(){
  tree tt;
  int i,num;
  for(i=0;i<10;i++){
    cout<<endl<<"enter elements to be inserted in tree";
    cin>>num;
    tt.insert(num);
  }

  tt.traverse();
  if(tt==tt)
  cout<<endl<<"hello";

  return 0;
}
