#include<iostream>
#include<unordered_map>
#include<map>
#include<list>
using namespace std;

class graph{

    public:

    map<int,list<int>>adjList;
    // unordered_map<int,list<int>>adjList;

    graph(){}

    void addEdge(int u,int v,bool direction){

        // direction false -> undirected graph
        // direction true -> directed graph

        adjList[u].push_back(v);

        if(direction==false){
            adjList[v].push_back(u);
        }
    }

    void printGraph(){
        map<int,list<int>>:: iterator it=adjList.begin();
        for( it; it!=adjList.end(); it++){
            cout<<it->first<<" -> ";
            for(auto i=it->second.begin(); i!=it->second.end(); i++){
                cout<<*i<<" ";
            }cout<<endl;
        }
    }
};

int main(){
    int nod;
    cout<<"Enter no of nodes : ";
    cin>>nod;

    int edg;
    cout<<"Enter no of edges : ";
    cin>>edg;

    graph g;

    cout<<"Enter input :- \n";
    for(int i=0; i<edg; i++){
        int u,v;
        cin>>u>>v;
        g.addEdge(u,v,0);
    }
    g.printGraph();
return 0;
}