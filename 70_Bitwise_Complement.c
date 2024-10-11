/* Bitwise Complement
____________________________________________

35 = 00100011 (In Binary)

Bitwise complement operation of 35:
  ~ 00100011  (35 in decimal)
    ________
    11011100  = -36 (In decimal)

~ operator in C is the bitwise NOT operator.

   Decimal    Binary      1's Complement                        2's Complement
   ----------------------------------------------------------------------------------------------
      0      00000000       11111111               -(11111111 + 1) = -00000000 = -0 (decimal)
      1      00000001       11111110               -(11111110 + 1) = -11111111 = -255 (decimal)
     12      00001100       11110011               -(11110011 + 1) = -11110100 = -244 (decimal)
    220      11011100       00100011               -(00100011 + 1) = -00100100 = -36  (decimal)

   Explanation:
   - 1's complement is found by flipping all the bits of the binary number.
   - 2's complement is found by adding 1 to the 1's complement and inverting the sign of the result.

___________________________________________ */

#include <stdio.h>

int main()
{
  printf("Output = %d\n", ~35);  // Output: -36
  printf("Output = %d\n", ~-12); // Output: 11

  return 0;
}

// Step-by-step explanation of the expression ~35

/*
1. 35 in decimal is represented in binary as:
   35 = 00100011 (binary)

2. Applying the bitwise NOT operator (~) flips all the bits:
   ~00100011 = 11011100 (binary)

3. The result, 11011100, is a negative number in two's complement notation.

4. To interpret the result, we need to convert the two's complement back to decimal:
   - Step 1: Invert the bits to get the 1's complement of the number:
             11011100 -> 00100011 (1's complement)

   - Step 2: Add 1 to the 1's complement to get the positive value:
             00100011 + 1 = 00100100 (binary)
             00100100 in binary is 36 in decimal.

   - Step 3: Add a negative sign because this is a two's complement representation of a negative number:
             So, the result is -36.

Therefore, ~35 = -36.
*/