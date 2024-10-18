#ifndef VECTOR3D_H
#define VECTOR3D_H

typedef struct {
    float x;
    float y;
    float z;
} Vector3D;

Vector3D sum(Vector3D v1, Vector3D v2);
Vector3D sub(Vector3D v1, Vector3D v2);
float dot(Vector3D v1, Vector3D v2);
Vector3D cross(Vector3D v1, Vector3D v2);

#endif
