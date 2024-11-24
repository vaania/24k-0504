#include <stdio.h>
#include <math.h>

struct point {
    float x;
    float y;
};

float calculateDistance(struct point p1, struct point p2) {
    return sqrt(pow(p2.x-p1.x, 2)+pow(p2.y-p1.y, 2));
}

int withinRectangle(struct point p, struct point topLeft, struct point bottomRight) {
    return (p.x >= topLeft.x && p.x <= bottomRight.x &&
            p.y <= topLeft.y && p.y >= bottomRight.y);
}

int main() {
    struct point p1, p2, topLeft, bottomRight;

    printf("Enter coordinates of point 1 (x y): ");
    scanf("%f %f", &p1.x, &p1.y);

    printf("Enter coordinates of point 2 (x y): ");
    scanf("%f %f", &p2.x, &p2.y);

    float distance = calculateDistance(p1, p2);
    printf("Distance between the points: %.2f\n", distance);

    printf("Enter coordinates of the top-left corner of the rectangle (x y): ");
    scanf("%f %f", &topLeft.x, &topLeft.y);

    printf("Enter coordinates of the bottom-right corner of the rectangle (x y): ");
    scanf("%f %f", &bottomRight.x, &bottomRight.y);

    struct point testPoint;
    printf("Enter coordinates of the test point (x y): ");
    scanf("%f %f", &testPoint.x, &testPoint.y);

    if (withinRectangle(testPoint, topLeft, bottomRight)) {
        printf("The point lies within the rectangle.\n");
    } else {
        printf("The point does not lie within the rectangle.\n");
    }

    return 0;
}

