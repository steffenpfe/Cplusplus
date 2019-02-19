#include <stdio.h>
#include <string.h>

#include "vec3f.h"

void Vec3f::init(float xval, float yval, float zval){
    x = xval;
    y = yval;
    z = zval;
}

void Vec3f::add(Vec3f v){
    x += v.x;
    y += v.y;
    z += v.z;
}

void Vec3f::sub(Vec3f v){
    x -= v.x;
    y -= v.y;
    z -= v.z;
}

float Vec3f::scalarProduct(Vec3f v){
    float scalpro;

    scalpro = x * v.x + y * v.y + z * v.z;

    return scalpro;
}

void Vec3f::crossProduct(Vec3f v){
    int a=x, b=y, c=z;//Werte retten da sonst während rechnen überschrieben wird!!
    x = b*v.z - c*v.y;
    y = c*v.x - a*v.z;
    z = a*v.y - b*v.x;
}

char* Vec3f::toString(){
    char *str = new char[100];
    sprintf(str, "x=%f\ny=%f\nz=%f\n",x,y,z);
    printf("%s",str);
}
