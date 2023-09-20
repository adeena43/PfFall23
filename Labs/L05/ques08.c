#include <stdio.h>

int main() {
    int lightIntensity;

    
    printf("Enter the light intensity (0-1000): ");
    scanf("%d", &lightIntensity);

    
    if (lightIntensity > 500) {
        // Bright sunlight, set maximum brightness
        printf("Setting brightness to maximum.\n");
        
    } else if (lightIntensity >= 100 && lightIntensity <= 500) {
        // Lighting conditions, set medium brightness
        printf("Setting brightness to medium.\n");
        
    } else if (lightIntensity >= 0 && lightIntensity < 100) {
        // Evening or low light conditions, set low brightness
        printf("Setting brightness to low.\n");
        
    } else {
        // Invalid input
        printf("Invalid light intensity value. Please enter a value between 0 and 1000.\n");
    }

    
}		//end main()
