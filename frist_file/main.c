//Write a function that takes an integer as input, and returns the number of bits that are equal to one in the binary representation of that number.
// You can guarantee that input is non - negative.
//编写一个函数，接受一个整数作为输入，并返回该数字的二进制表示中等于1的位数。你可以保证输入是非负的。
//Example: The binary representation of 1234 is 10011010010, so the function should return 5 in this case


#include <stdio.h>
#include <stddef.h>

size_t my_countBits(unsigned value)
{
    int count = 0;
    for (int i = 0; i < 32; i++) {
        if ((1 & (value >> i)) == 1) {
            count++;
        }
    }
    return count;
}

int main() {

    size_t x = my_countBits(11);
    printf("%d", x);
    return 0;
}
