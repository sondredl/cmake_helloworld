#include <iostream>
#include <string>

int cubeCorners[8][8][8];

// int xValues[8] {0, 0, 1, 1, 0, 0, 1, 1};
// int yValues[8] {0, 1, 1, 0, 0, 1, 1, 0};
// int zValues[8] {1, 1, 0, 0, 1, 1, 0, 0};
cubeCorners[0] {0, 0, 1, 1, 0, 0, 1, 1};
cubeCorners[1] {0, 1, 1, 0, 0, 1, 1, 0};
cubeCorners[2] {1, 1, 0, 0, 1, 1, 0, 0};

// cubeCorners[xValues][zValues][yValues];

void createCubeCoordinates(){
    int x;
    int y;
    int z;
    for(x = 0; x <= 8; x++){
        for(y = 0; y <= 8; y++){
            for(z = 0; z <= 8; z++){
                cubeCorners[x][y][z] = x + y + z;
                // std::cout << "[" << cube[i][j][k] << "]\t";
            }
        //   std::cout << std::endl;
        }
                std::cout << "[" << x << " " << y << " " << z << "]\t";
    }
}