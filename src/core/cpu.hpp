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
    uint8_t     ACC();  // Accumulator 
    uint8_t     ABS();  // Absolute
    uint8_t     ABX();  // Absolute, X-indexed
    uint8_t     ABY();  // Absolute, Y-indexed 
    uint8_t     IMM();  // Immediate
    uint8_t     IMP();  // Implied
    uint8_t     IND();  // Indirect     
    uint8_t     INX();  // X-indexed, indirect
    uint8_t     INY();  // indirect, Y-indexed 
    uint8_t     REL();  // relative 
    uint8_t     ZPG();  // Zeropage
    uint8_t     ZPX();  // Zeropage, X-indexed 
    uint8_t     ZPY();  // Zeropage, Y-indexed

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
    uint8_t     CLC();  // Clear Carry 
    uint8_t     CLD();  // Clear Decimal 
    uint8_t     CLI();  // Clear Interrupt Disable 
    uint8_t     CLV();  // Clear Overflow 
    uint8_t     CMP();  // Compare (with accumulator)
    uint8_t     CPX();  // Compare with X 
    uint8_t     CPY();  // Compare with Y 
    // D__ 
    uint8_t     DEC();  // Decrement 
    uint8_t     DEX();  // Decrement X 
    uint8_t     DEY();  // Decrement Y 
    // E__ 
    uint8_t     EOR();  // Exclusiv or (with accumulator)
    // I__ 
    uint8_t     INC();  // Increment 
    uint8_t     INX();  // Increment X 
    uint8_t     INY();  // Increment Y 
    // J__ 
    uint8_t     JMP();  // Jump 
    uint8_t     JSR();  // Jump Subroutine 
    // L__
    uint8_t     LDA();  // Load Accumulator
    uint8_t     LDX();  // Load X 
    uint8_t     LDY();  // Load Y 
    uint8_t     LSR();  // Logical Shift right 
    // N__ 
    uint8_t     NOP();  // No Operation 
    // O__ 
    uint8_t     ORA();  // Or with Accumulator 
    // P__ 
    uint8_t     PHA();  // Push Accumulator 
    uint8_t     PHP();  // Push Processor Status (SR)
    uint8_t     PLA();  // Pull Accumulator 
    uint8_t     PLP();  // Pull Processor Statis (SR)
    // R__ 
    uint8_t     ROL();  // Rotate Left 
    uint8_t     ROR();  // Rotate Right 
    uint8_t     RTI();  // Return from Interrupt 
    uint8_t     RTS();  // Return from Subroutine 
    // S__ 
    uint8_t     SBC();  // Subtract with carry 
    uint8_t     SEC();  // Set Carry 
    uint8_t     SED();  // Set Decimal 
    uint8_t     SEI();  // Set Interrupt Disable 
    uint8_t     STA();  // Store Accumulator 
    uint8_t     STX();  // Store X 
    uint8_t     STY();  // Store Y
    // T__ 
    uint8_t     TAX();  // Transfer Accumulator to X 
    uint8_t     TAY();  // Transfer Accumulator to Y 
    uint8_t     TSX();  // Transfer Stark Pointer to X 
    uint8_t     TXA();  // Transfer X to Accumulator 
    uint8_t     TXS();  // Transfer X to Stark Pointer 
    uint8_t     TYA();  // Transfer Y to Accumulator 
    // Invalid OPCODE
    uint8_t     ZZZ();  // Unknown, Runtimer Error 



};

}

#endif // __CPU_HPP
