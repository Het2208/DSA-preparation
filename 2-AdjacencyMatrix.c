#include<stdio.h>
int main(){
    int V,E;

    printf("Enter a number of Vertex : ");
    scanf("%d",&V);
    printf("Enter a number of Edges : ");
    scanf("%d",&E);

    int arr[V][V];

    for(int i=0 ; i<V ; i++){
        for(int j=0 ; j<V ; j++){
            arr[i][j] = 0;
        }
    }

    for(int i=0; i<E ; i++){
        int a , b;
        printf("Enter a start point and end point : ");
        scanf("%d %d" , &a , &b);
        arr[a][b] = 1;
    }

    // Matrix
    printf("\nAdjacency Matrix \n");
    for(int i=0 ; i<V ; i++){
        for(int j=0 ; j<V ; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    // List
    printf("\nAdjacency List \n");
    for(int i=0 ; i<V ; i++){
        printf("%d -> ",i);
        for(int j=0 ; j<V ; j++){
            if(arr[i][j] == 1){
                printf("%d ",j);
            }
        }
        printf("\n");
    }

    // Degree
    printf("\nDegree of Each vertex : \n");
    printf("Vertex  In-Degree  Out-Degree\n");
    for(int i=0 ; i<V ; i++){
        printf("   %d",i);
        int inDegreeCount = 0;
        int outDegreeCount = 0;
        for(int j=0 ; j<V ; j++){
            if(arr[i][j] == 1){
                outDegreeCount++;
            }
            if(arr[j][i] == 1){
                inDegreeCount++;
            }
        }
        printf("        %d          %d\n" , inDegreeCount , outDegreeCount);
    }

    // Simple 

    // Complete

    // Connected

    
    // Total Vertex and Edges
    printf("Total number of Vertx = %d\n",V);
    printf("Total number of Edges = %d",E);
    return 0;
}