#include <iostream>

#include <vec3f.h>

using namespace std;

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

    //cout << "Hello World!" << endl;
    return 0;
}

