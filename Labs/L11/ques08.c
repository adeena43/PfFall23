#include <stdio.h>

struct Box {
    int length;
    int width;
    int height;
};

// Function to calculate transportable volumes
void calculateTransportableVolume(struct Box boxes[], int numBoxes) {
    int tunnelHeight = 41;

    printf("Volumes of transportable boxes:\n");

    for (int i = 0; i < numBoxes; i++) {
        int volume = boxes[i].length * boxes[i].width * boxes[i].height;
        
        if (boxes[i].height < tunnelHeight) {
            printf("%d\n", volume);
        }
    }
}

int main() {
    // Example: Array of boxes
    struct Box boxes[] = {
        {5, 10, 20},
        {7, 8, 35},
        {15, 25, 30},
        {10, 10, 40},
        {20, 20, 20}
    };

    int numBoxes = sizeof(boxes) / sizeof(boxes[0]);

    // Calculate and print transportable volumes
    calculateTransportableVolume(boxes, numBoxes);

    return 0;
}
