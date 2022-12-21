#include <stdio.h>
#include <math.h>
float far( int n, float xy[][2]){
    float arr[n][n - 1];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            arr[i][j] = sqrt((xy[i][0] - xy[j][0]) * (xy[i][0] - xy[j][0]) + (xy[i][1] - xy[j][1])*(xy[i][1] - xy[j][1]) );
        }
    }
    for (int i = 0;i < n; i++){
        for (int j = 0;j < n - 1; j++)
            printf("%f ", arr[i][j]);
        printf("\n");
    }
}
int main() {
    int n;
    scanf("%d", &n);
    float xy[n][2];
    float a[n][n - 1];
    for(int i = 0; i < n; i++){
        float x, y;
        scanf("%f %f", &x, &y);
        xy[i][0] = x; xy[i][1] = y;
    }
    far(n, xy);
}
