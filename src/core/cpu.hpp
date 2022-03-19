#ifndef __CPU_HPP
#define __CPU_HPP 

#include <iostream>
#include <array> 
#include <cstdint>

namespace core {

class CPU {

enum class SRFlag : uint8_t {
    N = 1 << 7,     // Negative
    V = 1 << 6,     // Overflow
    _ = 1 << 5,     // ignored
    B = 1 << 4,     // Break
    D = 1 << 3,     // Decimal (use BCD for arithmetics)
    I = 1 << 2,     // Interrupt (IRQ disable)
    Z = 1 << 1,     // Zero
    C = 1 << 0      // Carry
};


public:
    CPU();
    ~CPU();
    clock();

public: //Interrupts
    void    reset();
    void    irq();
    void    nmi();

private: //Registers
    uint16_t    r_PC;
    uint8_t     r_AC;
    uint8_t     r_X;
    uint8_t     r_Y;
    uint8_t     r_SR;
    uint8_t     r_SP;

private: // Addressing Modes 


private: // Instruction OPCode
    // A__
    uint8_t     ADC();  // Add with Carry 
    uint8_t     AND();  // And (with accumulator)
    uint8_t     ASL();  // Arithmetic Shift left 
    // B__
    uint8_t     BCC();  // Branch on Carry Clear 
    uint8_t     BCS();  // Branch on Carry Set 
    uint8_t     BEQ();  // Branch on Equal (zero set)
    uint8_t     BIT();  // Bit Test 
    uint8_t     BMI();  // Branch on Minus (negative set)
    uint8_t     BNE();  // Branch on Not Equal (zero clear)
    uint8_t     BPL();  // Branch on plus (negative clear)
    uint8_t     BRK();  // Break / Interrupt 
    uint8_t     BVC();  // Branch on Overflow Clear 
    uint8_t     BVS();  // Branch on Overflow Set 
    // C__ 



};

}

#endif // __CPU_HPP
