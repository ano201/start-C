#include <stdio.h>

// enum Size
// {
//     Small = 22,
//     Medium = 32,
//     Large = 37,
//     ExtraLarge = 52,
//     more
// };
enum Size
{
    Small = 22,
    Medium = 32,
    Large = 37,
    ExtraLarge = 45,
    more = 50
} shoeSize;

int main()
{

    // enum Size shoeSize;
    shoeSize = more;
    printf("%d", shoeSize);

    return 0;
}