#include<stdio.h>

#define MAX_SIZE 10

int main()
{
    int t, sum;
    int first[MAX_SIZE][MAX_SIZE];
    int second[MAX_SIZE][MAX_SIZE];
    int mul[MAX_SIZE][MAX_SIZE];
    int i, j, k,m, n, l;
    scanf("%d", &t);
    
    for(l = 0; l < t; l++)
    {
        scanf("%d %d", &m, &n);
        for(i = 0; i < m; i++)
            for(j = 0; j < n; j++)
                scanf("%d", &first[i][j]);
        for(i = 0; i < m; i++)
            for(j = 0; j < n; j++)
                scanf("%d", &second[i][j]);

        for ( i = 0 ; i < m ; i++ )
        {
          for ( j = 0 ; j < n ; j++ )
          {
            mul[i][j] = first[i][j] + second[i][j];
          }
       }
       for(i = 0; i < m; i++)
            for(j = 0; j < n; j++)
                printf("%d ", mul[i][j]);
       printf("\n");
    }
    return 0;
}