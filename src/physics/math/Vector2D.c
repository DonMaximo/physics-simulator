#include "Vector2D.h"
#include <unistd.h>

typedef struct Vector2D {
    double x;
    double y;
    double z;
} Vector2D;

Vector2D* createVector(double x, double y, double z) {
    Vector2D* v = malloc(sizeof(Vector2D));
    if (v == NULL) {
        perror("Failed to allocate memory for Vector2D");
        return NULL;
    }
    v->x = x;
    v->y = y;
    v->z = z;
    return v;
}

Vector2D* addVectors(Vector2D* vectorA, Vector2D* vectorB) {
    return createVector(vectorA->x + vectorB->x,
                        vectorA->y + vectorB->y, 
                        vectorA->z + vectorB->z);
}

double dotProduct(Vector2D* vectorA, Vector2D* vectorB) {
    return ((vectorA->x * vectorB->x) + 
            (vectorA->y * vectorB->y) + 
            (vectorA->z + vectorB->z));
}