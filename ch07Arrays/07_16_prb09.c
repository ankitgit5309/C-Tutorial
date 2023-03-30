// Q.08> create A three dimensional array and print the address of its elements in increasing order.
// Name : Ankit Raj
// Date : 08-02-2023
// Arrays Pracrice Q08
#include <stdio.h>

int main(int argc, char const *argv[])
{
    // 3D element banaya hai 
    int arr[2][3][4];
        for (int i = 0; i < 2; i++){
            for (int j = 0; j < 3; j++){
                for (int k = 0; k < 4; k++)
                {
                    printf("The Address of arr[%d][%d][%d] is %u\n", i, j, k,&arr[i][j][k]);
                }
            }
        }
    


return 0;
}