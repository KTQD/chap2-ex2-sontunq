#include <stdio.h>

int main() {
    int height, width, perimeter;

    printf("Enter the height and width of the rectangle: ");
    scanf("%d %d", &height, &width);
    
     perimeter = 2 * (height + width);
   
    printf("Perimeter of the rectangle: %d\n", perimeter);

    return 0;
}
