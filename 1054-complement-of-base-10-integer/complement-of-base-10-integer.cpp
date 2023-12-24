class Solution {
public:
    int bitwiseComplement(int n) {
        if (n == 0)
    {
        return 1;
    }

    int i = ~n;
    size_t bits = sizeof(n) * 8;

  
    unsigned int mask = 1 << (bits-1); 
    while (mask & i)                    
    {
        i = mask ^ i;                   
        mask = mask >> 1;              
    }
    return i;
}
};
        