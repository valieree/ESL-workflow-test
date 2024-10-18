#include <stdio.h>
#include "vector3d.h"

int main() {
    Vector3D a = {1.0, 2.0, 3.0};
    Vector3D b = {4.0, 5.0, 6.0};

    Vector3D sumResult = sum(a, b);
    Vector3D subResult = sub(a, b);
    float dotResult = dot(a, b);
    Vector3D crossResult = cross(a, b);

    printf("Сумма: (%.2f, %.2f, %.2f)\n", sumResult.x, sumResult.y, sumResult.z);
    printf("Разность: (%.2f, %.2f, %.2f)\n", subResult.x, subResult.y, subResult.z);
    printf("Скалярное произведение: %.2f\n", dotResult);
    printf("Векторное произведение: (%.2f, %.2f, %.2f)\n", crossResult.x, crossResult.y, crossResult.z);

    return 0;
}
