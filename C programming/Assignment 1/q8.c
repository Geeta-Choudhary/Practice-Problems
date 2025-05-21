#include<stdio.h>
int main()
{
    float room_length, room_breadth, room_height;
    float door_width, door_height, window_width, window_height;
    float wall_area, door_area, window_area, paint_area, whitewash_area;

    // Accept dimensions of the room, door, and window
    printf("Enter room dimensions (length, breadth, height in meters): ");
    scanf("%f %f %f", &room_length, &room_breadth, &room_height);
    printf("Enter door dimensions (width, height in meters): ");
    scanf("%f %f", &door_width, &door_height);
    printf("Enter window dimensions (width, height in meters): ");
    scanf("%f %f", &window_width, &window_height);

    // Calculate areas
    wall_area = 2 * room_height * (room_length + room_breadth);
    door_area = door_width * door_height;
    window_area = window_width * window_height;
    paint_area = wall_area - (door_area + 2 * window_area);
    whitewash_area = room_length * room_breadth;

    // Display results
    printf("Area to be painted (walls): %.2f sq. meters\n", paint_area);
    printf("Area to be whitewashed (roof): %.2f sq. meters\n", whitewash_area);

}