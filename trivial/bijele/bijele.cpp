#include <iostream>

static int num_pieces[] =
{
    1,  // King
    1,  // Queen
    2,  // Rooks
    2,  // Bishops
    2,  // Knights
    8,  // Pawns
};

int main(void)
{
    // Locals
    int i = 0;
    int cur_cnt;
    int diff;

    while (std::cin >> cur_cnt)
    {
        diff = num_pieces[i] - cur_cnt;

        std::cout << diff << " ";

        i++;

        if(i > 5){
            break;
        }
    }

    std::cout << std::endl;

    return 0;
}