/* multistage graph problem */
#include<iostream>
using namespace std;
#define N 8
#define INF 9999
int min(int a, int b){return(a>b)?b:a;}
int shortestDist(int graph[N][N]){
    int result[N];
    result[N-1]=0;
    for(int i=N-2;i>=0;i--){
        result[i]=INF;
        for(int j=i+1;j<8;j++){
           if(graph[i][j]==INF)
               continue;
        result[i]=min(graph[i][j]+result[j],result[i]);
        }
    }
    return result[0];
}
int main(){
    int graph[N][N]={{INF, 1, 2, 5, INF, INF, INF, INF},
                    {INF, INF, INF, INF, 4, 11, INF, INF},
                    {INF, INF, INF, INF, 9, 5, 16, INF},
                    {INF, INF, INF, INF, INF, INF, 2, INF},
                    {INF, INF, INF, INF, INF, INF, INF, 18},
                    {INF, INF, INF, INF, INF, INF, INF, 13},
                    {INF, INF, INF, INF, INF, INF, INF, 2},
                    {INF, INF, INF, INF, INF, INF, INF, INF}};
    cout<<" the shortest distance from 0--8 is"<<shortestDist(graph);
    return 0;
 
}
