class Solution {
public:
    int reverseBits(int n) {
    unsigned unS = n;
    unsigned reversed = 0;

    for (int i = 0; i < 32; i++) {
        unsigned lastBit = unS & 1;
        reversed = reversed << 1;
        reversed = reversed | lastBit;
        unS = unS >> 1;
    }

    return (int)reversed;
    }
};