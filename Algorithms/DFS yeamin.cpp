#include <iostream>
#include<list>
#define N 5
using namespace std;

char  vertices_names[] = {'P', 'Q', 'R', 'S', 'T'};

int adjacencyM[N][N] = {{0, 1, 0, 0, 0},
                        {1, 0, 1, 0, 1},
                        {0, 1, 0, 1, 1},
                        {0, 0, 1 ,0, 1},
                        {0, 1, 0, 1, 0}};

class ShortestPath{

  int prev[N] = {-1};

  int visited[N] = {0};

  int start, end;

  int length = 0;

  int shortLength = INT32_MAX;

public:
  ShortestPath(int start, int end){
    this->start = start;
    this->end = end;
  }

  void findPath(){

    dfs(start);

    trace_route();
  }

private:
  void dfs(int vertex){

    length +=1;


    if(length > shortLength)
      return;


    if(vertex == end){
      shortLength = length;
      return;
    }


    visited[vertex] = 1;


    for(int i=0; i<N; i++){
      if(adjacencyM[vertex][i] == 1 and visited[i] == 0){
        int nbr = i;


        prev[nbr] = vertex;


        dfs(nbr);
      }
    }


    length -=1;
  }


  void trace_route(){
    list<char> route;
    int vertex = end;

    while(vertex != -1){
      route.push_front(vertices_names[vertex]);
      vertex = prev[vertex];
    }

    for(char n: route){
      cout << n <<" ";
    }
  }
 };

int main()
{

  ShortestPath shortestPath(0, 4);
  shortestPath.findPath();
}
