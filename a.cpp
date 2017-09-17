#include<iostream>
#include<cstdlib>
#include<cmath>

using namespace std;

struct edge {int from , to , cost;}

edge es[MAX_E];

int d[MAX_V];
int V, E;

void shortest_path(int s) {
  for (int i = 0; i < V; i++) {
    d[i] = INF;
  }
  d[s] = 0;
  while (true) {
    bool update = false;
    for (int i = 0; i < V; i++) {
      edge e = es[i];
      if (d[e.from] != INF && d[e.to] > d[e.from] + e.cost) {
        d[e.to] = d[e.from] + e.cost;
        update = true;
      }
    }
    if (!update) break;
  }
}

int main()
{
  int n, a;
  cin >> n >> a;
  cout << n * n - a << endl;
  return 0;
}
 
 