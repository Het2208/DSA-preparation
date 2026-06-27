#include<stdio.h>
int main(){
    int V,E;

    printf("Enter a number of Vertex : ");
    scanf("%d",&V);
    printf("Enter a number of Edges : ");
    scanf("%d",&E);

    int edge[E][2];

    for(int i=0; i<E ; i++){
        int a , b;
        printf("Enter a start point and end point : ");
        scanf("%d %d" , &a , &b);
        edge[i][0] = a;
        edge[i][1] = b;
    }

    for(int i=0 ; i<V ; i++){
        printf("%d -> ",i);
        for(int j=0 ; j<E ; j++){
            if(edge[j][0] == i){
                printf("%d ",edge[j][1]);
            }
        }
        printf("\n");
    }
    return 0;
}
