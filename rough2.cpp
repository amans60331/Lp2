
#include<iostream>
using namespace std;

class Queue{
public:
  int size1;
  int f; // deletion from rear
  int r; // insertion from rear
  int *a;
};
void enqueue(Queue *st, int data){
  if (st->r == st-> size1-1) {
    cout<<"queue is full"<<endl;
    /* code */
  }
  else{
    st->r++;
    st->a[st->r] = data;
  }
}
void dequeue(Queue *st) {
  int x= -1;
    if(st->f==st->r){
      cout<<"queue is empty"<<endl;

    }
    else{
      st->f++;
      x=st->a[st->f];

    }
    return x;
}
int isempty(Queue *st){
  if(st->f==st->r){
    return 1;
  }
  return 0;
}

int arr[8][8]={{0,0,0,0,0,0,0,0},
               {0,0,1,1,1,0,0,0},
               {0,1,0,1,0,0,0,0},
               {0,1,1,0,1,1,0,0},
               {0,1,0,1,0,1,0,0},
               {0,0,0,1,1,0,1,1},
               {0,0,0,0,0,1,0,0},
               {0,0,0,0,0,1,0,0}};

class Graph{
public:
  int *visited;
};
void dfs(int u){
  static int visited[8]={0};
  if (visited[u]==0) {
      cout<<u<<"";
      visited[u]=1;
      for (int i = 1; i <=8; i++) {
            if(arr[u][i]==1 && visited[i]==0){
              dfs(i);
            }
      }
  }
}
void bfs(Graph *t, Queue *q,int i){
    cout<<i<<"";
    t-> visited[i]=1;
    enqueue(q,i);
    while(!isempty(q)){
        int u = dequeue(q);
        for (int j = 1; j <= 8; j++) {
          if(arr[u][j]==1 && visited[j]==0){
            cout<<j<<"";
            t-> visited[j]=1;
            enqueue(q,j)
          }
        }
    }
}
int main(int argc, char const *argv[]) {
    cout<<"1.BFS \n 2.DFS \n 3.Exit \n "<<endl;
    int e =0; int c;
    while(e==0){
      cout<<"enter choice"<<endl;
      cin>>c;
      switch (c) {
        case 1:graph t;
        Queue s;
        s.f=-1;
        s.r=-1;
        s.size1=8;
        s.a=new int[8];
        t.visited=new int[8];
        for(int i=0;i<8;i++){
            t.visited[i]=0;
        }
        int c1;
        cout<<"Enter starting Vertex(1-7)"<<'\n';
        cin>>c1;
        bfs(&t,&s,c1);
        break;
    }
    case 2:{
        int c1;
        cout<<"Enter starting Vertex(1-7)"<<'\n';
        cin>>c1;
        dfs(c1);
        break;
    }
    case 3:{
        cout<<"Thank-You"<<'\n';
        e=1;
        break;
      }
      }
    }
  return 0;
}
