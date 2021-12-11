
#include <cstring>
#include "lib.h"
using namespace std;

bool find (char array1[10][20], char array2[1][20], int &pos) {
    for (int i=0; i<10; i++){
        if (strcmp (array1[i], array2[0]) == 0){
            pos = i;
            return true;
        }
    }
    return false;
}
