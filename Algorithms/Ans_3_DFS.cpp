#include <iostream>
#include<list>
#define N 5
using namespace std;

//vertices or nodes
char  vertices_names[] = {'A', 'B', 'C', 'D', 'E'};
//Adjacency Matrix
int adjacencyM[N][N] = {{0, 1, 0, 0, 0},
                        {1, 0, 1, 0, 1},
                        {0, 1, 0, 1, 1},
                        {0, 0, 1 ,0, 1},
                        {0, 1, 0, 1, 0}};

class ShortestPath{
  //array to store preceding nodes
  int prev[N] = {-1};
  //array mapping to make visited vertices
  int visited[N] = {0};
  //start and end nodes index
  int start, end;
  //variable to store length of the current route
  int length = 0;
  //variable to store length of the shortest route
  int shortLength = INT32_MAX;

public:
  ShortestPath(int start, int end){
    this->start = start;
    this->end = end;
  }

  void findPath(){
    //start DFS from the start vertex
    dfs(start);
    //trace the route to output the path
    trace_route();
  }

private:
  void dfs(int vertex){
    //Increment the current path length by 1
    length +=1;

    //1st base condition
    //return if current route is longer
    //than the already discovered route
    if(length > shortLength)
      return;

    //2nd base condition
    //if reach the destination vertex
    //update the shortLength and
    //return to explore shorter routes
    if(vertex == end){
      shortLength = length;
      return;
    }

    //mark vertex as visited to prevent overvisit
    visited[vertex] = 1;

    //iterate through all unvisited neighbors vertices
    for(int i=0; i<N; i++){
      if(adjacencyM[vertex][i] == 1 and visited[i] == 0){
        int nbr = i;

        //update the preceding vertex of the neighbors
        prev[nbr] = vertex;

        //recursively visit the neighbors
        //to continue search for the destination vertex
        dfs(nbr);
      }
    }

    //decrement length when tracing back
    length -=1;
  }

  //Function to trace back route
  void trace_route(){
    list<char> route;
    int vertex = end;
    //start node has no preceding vertex
    //so loop until prev[vertex] is -1
    while(vertex != -1){
      route.push_front(vertices_names[vertex]);
      vertex = prev[vertex];
    }
    //Display the route
    for(char n: route){
      cout << n <<" ";
    }
  }
 };

int main()
{
  //Driver Code
  ShortestPath shortestPath(0, 4);
  shortestPath.findPath();
}
