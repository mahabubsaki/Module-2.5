#include <stdio.h>
int main()
{
    int chocolate, packet, input;
    printf("Enter Your chocolate Ammount : ");
    scanf("%d", &input);
    chocolate = input;
    packet = input;
    while (packet >= 4)
    {
        chocolate = chocolate + (packet / 4);
        packet = (packet / 4) + (packet % 4);
    }
    printf("You will get total %d chocolate", chocolate);
    return 0;
}