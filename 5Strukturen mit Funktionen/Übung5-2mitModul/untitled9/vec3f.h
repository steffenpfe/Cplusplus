#ifndef VEC3F_H
#define VEC3F_H

struct Vec3f{

    float x, y, z;

    void init(float xval, float yval, float zval);
    void add(Vec3f v);
    void sub(Vec3f v);

    float scalarProduct(Vec3f v);
    void crossProduct(Vec3f v);
    char* toString();
};

#endif // VEC3F_H
