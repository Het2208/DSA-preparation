// WAP to calculate angle between hour and minute hand

#include <stdio.h>
#include <math.h>

int main() {
    int h, m;

    printf("Enter Hour: ");
    scanf("%d", &h);

    printf("Enter Minute: ");
    scanf("%d", &m);

    h = h % 12;   

    double angle = fabs((30 * h + 0.5 * m) - (6 * m));

    if (angle > 180) {
        angle = 360 - angle;
    }

    printf("Angle = %.2lf degrees\n", angle);

    return 0;
}
