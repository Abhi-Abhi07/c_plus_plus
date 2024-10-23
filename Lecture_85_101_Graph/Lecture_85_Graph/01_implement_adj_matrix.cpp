#include<iostream>
#include<vector>
using namespace std;

class graph{

    public:
    vector<vector<int>>adjMatrix;
    
    graph(int nodes){

        // vector<vector<int>>temp(nodes,vector<int>(nodes,0));
        // adjMatrix=temp;

        for(int i=0; i<nodes; i++){
            adjMatrix.push_back(vector<int>(nodes,0));
        }
    }

    void addEdge(int u,int v,bool direction){

        // direction false -> undirected graph
        // direction true -> directed graph

        if(direction==true){
            adjMatrix[u][v]=1;
        }
        else{
            adjMatrix[u][v]=1;
            adjMatrix[v][u]=1;
        }
    }

    void printGraph(int nodes){
        cout<<endl<<"printing Graph\n\n";
        for(int i=0; i<nodes; i++){
            for(int j=0; j<nodes; j++){
                cout<<adjMatrix[i][j]<<" ";
            }cout<<endl;
        }        
        cout<<endl<<endl;
    }
};

int main(){
    int nod;
    cout<<"Enter no of nodes : ";
    cin>>nod;

    int edg;
    cout<<"Enter no of edges : ";
    cin>>edg;

    graph g(nod);

    cout<<"Enter input :- \n";
    for(int i=0; i<edg; i++){
        int u,v;
        cin>>u>>v;
        g.addEdge(u,v,0);
    }
    g.printGraph(nod);
return 0;
}