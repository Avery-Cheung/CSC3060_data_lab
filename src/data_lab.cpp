#include "data_lab.hpp"
#include <cstdint>

namespace data_lab {

int32_t add(int32_t a, int32_t b) {
    uint32_t ua = static_cast<uint32_t>(a);
    uint32_t ub = static_cast<uint32_t>(b);

    uint32_t sum = ua ^ ub; 
    uint32_t carry = ua & ub; carry <<= 1; 

    uint32_t sumc = sum; 
    uint32_t carryc = carry; //Use copied variables to store the temporay value. 
    //First repetation done. 
    sum = sumc ^ carryc; 
    carry = sumc & carryc; carry <<= 1; 
    sumc = sum; carryc = carry; //1time
    sum = sumc ^ carryc; 
    carry = sumc & carryc; carry <<= 1; 
    sumc = sum; carryc = carry; //1time
    sum = sumc ^ carryc; 
    carry = sumc & carryc; carry <<= 1; 
    sumc = sum; carryc = carry; //1time
    sum = sumc ^ carryc; 
    carry = sumc & carryc; carry <<= 1; 
    sumc = sum; carryc = carry; //1time
    sum = sumc ^ carryc; 
    carry = sumc & carryc; carry <<= 1; 
    sumc = sum; carryc = carry; //1time
    sum = sumc ^ carryc; 
    carry = sumc & carryc; carry <<= 1; 
    sumc = sum; carryc = carry; //1time
    sum = sumc ^ carryc; 
    carry = sumc & carryc; carry <<= 1; 
    sumc = sum; carryc = carry; //1time
    sum = sumc ^ carryc; 
    carry = sumc & carryc; carry <<= 1; 
    sumc = sum; carryc = carry; //1time
    sum = sumc ^ carryc; 
    carry = sumc & carryc; carry <<= 1; 
    sumc = sum; carryc = carry; //1time
    sum = sumc ^ carryc; 
    carry = sumc & carryc; carry <<= 1; 
    sumc = sum; carryc = carry; //1time
    sum = sumc ^ carryc; 
    carry = sumc & carryc; carry <<= 1; 
    sumc = sum; carryc = carry; //1time
    sum = sumc ^ carryc; 
    carry = sumc & carryc; carry <<= 1; 
    sumc = sum; carryc = carry; //1time
    sum = sumc ^ carryc; 
    carry = sumc & carryc; carry <<= 1; 
    sumc = sum; carryc = carry; //1time
    sum = sumc ^ carryc; 
    carry = sumc & carryc; carry <<= 1; 
    sumc = sum; carryc = carry; //1time
    sum = sumc ^ carryc; 
    carry = sumc & carryc; carry <<= 1; 
    sumc = sum; carryc = carry; //1time
    sum = sumc ^ carryc; 
    carry = sumc & carryc; carry <<= 1; 
    sumc = sum; carryc = carry; //1time
    sum = sumc ^ carryc; 
    carry = sumc & carryc; carry <<= 1; 
    sumc = sum; carryc = carry; //1time
    sum = sumc ^ carryc; 
    carry = sumc & carryc; carry <<= 1; 
    sumc = sum; carryc = carry; //1time
    sum = sumc ^ carryc; 
    carry = sumc & carryc; carry <<= 1; 
    sumc = sum; carryc = carry; //1time
    sum = sumc ^ carryc; 
    carry = sumc & carryc; carry <<= 1; 
    sumc = sum; carryc = carry; //1time
    sum = sumc ^ carryc; 
    carry = sumc & carryc; carry <<= 1; 
    sumc = sum; carryc = carry; //1time
    sum = sumc ^ carryc; 
    carry = sumc & carryc; carry <<= 1; 
    sumc = sum; carryc = carry; //1time
    sum = sumc ^ carryc; 
    carry = sumc & carryc; carry <<= 1; 
    sumc = sum; carryc = carry; //1time
    sum = sumc ^ carryc; 
    carry = sumc & carryc; carry <<= 1; 
    sumc = sum; carryc = carry; //1time
    sum = sumc ^ carryc; 
    carry = sumc & carryc; carry <<= 1; 
    sumc = sum; carryc = carry; //1time
    sum = sumc ^ carryc; 
    carry = sumc & carryc; carry <<= 1; 
    sumc = sum; carryc = carry; //1time
    sum = sumc ^ carryc; 
    carry = sumc & carryc; carry <<= 1; 
    sumc = sum; carryc = carry; //1time
    sum = sumc ^ carryc; 
    carry = sumc & carryc; carry <<= 1; 
    sumc = sum; carryc = carry; //1time
    sum = sumc ^ carryc; 
    carry = sumc & carryc; carry <<= 1; 
    sumc = sum; carryc = carry; //1time
    sum = sumc ^ carryc; 
    carry = sumc & carryc; carry <<= 1; 
    sumc = sum; carryc = carry; //1time
    sum = sumc ^ carryc; 
    carry = sumc & carryc; carry <<= 1; 
    sumc = sum; carryc = carry; //1time
    

    //repeat 32 times because the max bit is 32. 
    
    return static_cast<int32_t>(sum);
}

int32_t subtract(int32_t a, int32_t b) {
    return a;
}

int32_t multiply(int32_t a, int32_t b) {
    return a * b;
}

int32_t divide(int32_t a, int32_t b) {
    return a / b;
}

int32_t modulo(int32_t a, int32_t b) {
    return a % b;
}

}  // namespace data_lab