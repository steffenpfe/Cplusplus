#include <stdio.h>

struct Vec3f{

    float x, y, z;


    void init(float xval, float yval, float zval){
        x = xval;
        y = yval;
        z = zval;
    }

    void add(Vec3f v){
        x += v.x;
        y += v.y;
        z += v.z;
    }

    void sub(Vec3f v){
        x -= v.x;
        y -= v.y;
        z -= v.z;
    }

    float scalarProduct(Vec3f v){
        float scalpro;

        scalpro = x * v.x + y * v.y + z * v.z;

        return scalpro;
    }

    void crossProduct(Vec3f v){
        int a=x, b=y, c=z;//Werte retten da sonst während rechnen überschrieben wird!!
        x = b*v.z - c*v.y;
        y = c*v.x - a*v.z;
        z = a*v.y - b*v.x;
    }

    char* toString(){
        char *str = new char[100];
        sprintf(str, "x=%f\ny=%f\nz=%f\n",x,y,z);
        printf("%s",str);
    }
};




int main()
{
    Vec3f v1, v2;

    v1.init(3,-1,2);
    v2.init(5,9,-2);
    printf("v1 + v2 =\n");
    v1.add(v2);
    v1.toString();

    v1.init(3,-1,2);
    v2.init(5,9,-2);
    printf("v1 - v2 =\n");
    v1.sub(v2);
    v1.toString();

    v1.init(3,-1,2);
    v2.init(5,9,-2);
    printf("v1 * v2 =%f\n", v1.scalarProduct(v2));

    v1.init(3,-1,2);
    v2.init(5,9,-2);
    printf("v1 x v2 =\n");
    v1.crossProduct(v2);
    v1.toString();

  return 0;
}



/*#include <iostream>

using namespace std;

int main()
{
    cout << "Hello World!" << endl;
    return 0;
}*/
