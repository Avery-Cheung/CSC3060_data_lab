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

    return add(a, add(~b, 1)); //a-b = a+(-b); -b = ~b + 1 flip & add 1, 
}

int32_t multiply(int32_t a, int32_t b) {
    uint32_t ua = static_cast<uint32_t>(a);
    uint32_t ub = static_cast<uint32_t>(b);
    uint32_t output = 0; 
    
    while(ub & 0xFFFFFFFF) {
        if(ub & 1) { 
            output = static_cast<uint32_t>(
                add( static_cast<int32_t>(output), static_cast<int32_t>(ua) )
            ); 
        }
        ua <<= 1; 
        ub >>= 1; 
    }//like multiply in vertical format. a stays still and b is seperated. 
    return static_cast<int32_t>(output); 
}

int32_t divide(int32_t a, int32_t b) {
    uint32_t ua; 
    uint32_t ub; 

    //absolute a&b
    if((a>>31) & 1) {
        ua = static_cast<uint32_t>(subtract(0, a));
        
    } else {
        ua = static_cast<uint32_t>(a);
    }
    if((b>>31) & 1) {
        ub = static_cast<uint32_t>(subtract(0, b));
        
    } else {
        ub = static_cast<uint32_t>(b);
    }
    
    //store original sign
    uint32_t sign = 0; 
    if( ( (a^b) >> 31) & 1 ) {sign = 1; }

    uint32_t gd = ub; //gd = greatest divisor
    uint32_t bias = 1; 
    uint32_t q = 0; //quotient

    while(!(static_cast<uint32_t>(subtract(static_cast<int32_t>(ua), static_cast<int32_t>(ub))) >> 31)){ //if ua >= ub,dif = sub(ua,ub) >= 0, so (dif >> 31) = 0, no overwelling
        
        gd = ub; 
        bias = 1; 

        while(!(static_cast<uint32_t>(subtract(static_cast<int32_t>(ua), static_cast<int32_t>(gd << 1))) >> 31)) {//simulate line 164 to imply >=, find the greatest divisor
            gd <<= 1; //left shit once
            bias <<= 1; 
        }

        q = static_cast<uint32_t>( add(
            static_cast<int32_t>(q), 
            static_cast<int32_t>(bias)) 
            ); //cum q

        ua = static_cast<uint32_t>( subtract(static_cast<int32_t> (ua), static_cast<int32_t> (gd)) );//update divided ua

    }

    if(sign & 1) {return static_cast<int32_t>(subtract(0, q)); }//return with sign
    return static_cast<int32_t>(q); 
}

int32_t modulo(int32_t a, int32_t b) {
    return subtract(a, 
        multiply(
            divide(a, b), b
        )
    ); //a/b = q, modul = a - (q * b)
}

}  // namespace data_lab