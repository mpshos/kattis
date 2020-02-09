#include <iostream>

int main(void)
{
    unsigned int input;
    int i;
    unsigned int reversed;
    int last_bit_used = 0;

    std::cin >> input;

    for(i = 0; i < sizeof(unsigned int) * 4; i++)
    {

        if (input & 0x01){
            last_bit_used = i + 1;
        }

        reversed = (reversed << 1) | (input & 0x01);

        input = input >> 1;
    }

    reversed >>= (sizeof(unsigned int) * 4) - last_bit_used;

    std::cout << reversed << std::endl;

    return 0;
}