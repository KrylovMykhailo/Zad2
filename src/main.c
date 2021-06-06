#include <stdlib.h>
#include <stdio.h>
#include "lib_volume.h"
#include "lib_area.h"

int main() {

    float a;
    int type;
    printf("If you want to calculate the area of a square   - press 1\n");
    printf("If you want to calculate the area of a cube     - press 2 \n");
    printf("If you want to calculate the volume of a square - press 3 \n");
    printf("If you want to calculate the volume of a cube   - press 4 \n");
    printf("If you want to calculate everything together    - press 5 \n\n");
    printf("Choose an option: ");
    scanf("%d", &type);
    printf("Enter the length of the side: ");
    scanf("%f", &a);
    printf("\n");

        if (type == 1){
            printf("%s %.2f\n", "Area of a square: ", SquareArea(a));
        }
        else if (type == 2){
            printf("%s %.2f\n", "Area of a cube: ", CubeArea(a));
        }
        else if (type == 3){
            printf("%s %.2f\n", "Volume of a square: ", SquareVolume(a));
        }
        else if (type == 4){
            printf("%s %.2f\n", "Volume of a cube: ", CubeVolume(a));
        }
        else if (type == 5){
            printf("%s %.2f\n", "Area of a square: ", SquareArea(a));
            printf("%s %.2f\n", "Area of a cube: ", CubeArea(a));
            printf("%s %.2f\n", "Volume of a square: ", SquareVolume(a));
            printf("%s %.2f\n", "Volume of a cube: ", CubeVolume(a));
        }
	else{
	printf("Wrong input, try again\n");
	}
    
    return 0;
}
