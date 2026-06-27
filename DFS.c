#include<stdio.h>
#include<stdbool.h>

int main(){
    // int V,E;

    // printf("Enter a number of Vertex : ");
    // scanf("%d",&V);
    // printf("Enter a number of Edges : ");
    // scanf("%d",&E);

    // int adj[V][V];

    // for(int i=0 ; i<V ; i++){
    //     for(int j=0 ; j<V ; j++){
    //         adj[i][j] = 0;
    //     }
    // }

    // for(int i=0; i<E ; i++){
    //     int a , b;
    //     printf("Enter a start point and end point : ");
    //     scanf("%d %d" , &a , &b);
    //     adj[a][b] = 1;
    //     adj[b][a] = 1;
    // }

    // // Matrix
    // printf("\nAdjacency Matrix \n");
    // for(int i=0 ; i<V ; i++){
    //     for(int j=0 ; j<V ; j++){
    //         printf("%d ",adj[i][j]);
    //     }
    //     printf("\n");
    // }


    int adj[5][5]={
        {0,1,1,0,0}
       ,{1,0,1,1,0}
       ,{1,1,0,0,1}
       ,{0,1,0,0,1}
       ,{0,0,1,1,0}
    };
    
    int V = 5;
    int start;
    printf("Enter a node to start : ");
    scanf("%d",&start);
    int visited[V];
    for(int i = 0; i < V; i++){
        visited[i] = 0;
    }
    int stack[V];
    int top = -1;
    visited[start] = 1;
    stack[++top] = start;
    printf("DFS Traversal : ");
    while(top != -1){
        int curr = stack[top--];
        printf("%d ",curr);
        for(int j = V-1 ; j>=0 ; j--){
            if(adj[curr][j] == 1 && visited[j] == 0){
                visited[j] = 1;
                stack[++top] = j;
            }
        }
    }
    return 0;
}