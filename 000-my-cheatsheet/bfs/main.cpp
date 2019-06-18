#include<cstdio>
#include<cstring>
#include<queue>
using namespace std;
 
/*
 * -- PROBLEM --
 * Diberikan sebuah undirected graph G (bobot semua edge dianggap 1).
 * Tentukan apakah terdapat path dari vertex START ke vertex FINISH
 * dan tampilkan jumlah vertex yang dilalui (step, termasuk START dan FINISH).
 *
 * -- BFS --
 * 1.  Masukkan START ke dalam queue
 * 2.  Selama queue belum kosong
 *     2.1  Pop queue --> lokasi sekarang
 *     2.2  Jika lokasi sekarang == FINISH, maka RETURN step hingga sekarang
 *          Else,
 *          2.2.1  Untuk semua vertex yg terhubung dengan lokasi sekarang,
 *                 jika belum dikunjungi, lakukan:
 *                 2.2.1.1  Push vertex tersebut ke queue (step + 1)
 *                 2.2.1.2  Mark this vertex as visited
 * 3.  Return -1 (path tidak ditemukan)
 */
 
const int MAXVERTEX = 100;
 
bool G[MAXVERTEX][MAXVERTEX]; // Representasi graph dgn adjacency matrix
bool visited[MAXVERTEX]; // mencatat vertex mana yg telah dikunjungi
 
int nVertex, nEdge;
 
typedef struct {
   int vertex;
   int step;
} rec;
queue<rec> Q;
 
rec make_rec(int vertex, int step) {
   rec result;
   result.vertex = vertex;
   result.step = step;
   return result;
}
 
int bfs(int start, int finish) {
   // Masukkan START ke dalam queue
   rec v = make_rec(start, 1);
   Q.push(v);
   visited[start] = true;
 
   while (!Q.empty()) {
      // Pop queue
      v = Q.front();
      Q.pop();
 
      if (v.vertex == finish) return v.step; // finish! return step
      else {
         // cek semua vertex yang terhubung dengan v dan belum dikunjungi
         for (int i=1; i<=nVertex; i++) {
            if (G[v.vertex][i] && !visited[i]) {
               // Jika vertex i belum dikunjungi, push ke dalam queue
               rec next = make_rec(i, v.step + 1);
               Q.push(next);
               visited[i] = true;
            }
         }
      }
   }
 
   return -1; // no path from start to finish
}
 
int main() {
   int start, finish;
 
   // initialize G and visited as FALSE
   memset(G, false, sizeof(G));
   memset(visited, false, sizeof(visited));
 
   // read input
   scanf("%d %d", &nVertex, &nEdge); // jumlah vertex dan edge
   for (int i=0; i<nEdge; i++) {
      int u, v;
      scanf("%d %d", &u, &v);
      G[u][v] = G[v][u] = true; // there is a path from u to v (undirected graph)
   }
   scanf("%d %d", &start, &finish); // start & finish
 
   // BFS to search if a path from start to finish exists
   int steps = bfs(start, finish);
 
   if (steps != -1)
      printf("There is a path from %d to %d with %d steps\n", start, finish, steps);
   else
      printf("There is NO path from %d to %d\n", start, finish);
 
   return 0;
}