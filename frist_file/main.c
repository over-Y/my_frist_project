//Write a function that takes an integer as input, and returns the number of bits that are equal to one in the binary representation of that number.
// You can guarantee that input is non - negative.
//��дһ������������һ��������Ϊ���룬�����ظ����ֵĶ����Ʊ�ʾ�е���1��λ��������Ա�֤�����ǷǸ��ġ�
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
