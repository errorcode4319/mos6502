#ifndef __CPU_HPP
#define __CPU_HPP 

#include <iostream>
#include <array> 
#include <vector>
#include <cstdint>

namespace core {

class Processor {

enum class SRFlag : uint8_t {
    N = (1 << 7),     // Negative
    V = (1 << 6),     // Overflow
    _ = (1 << 5),     // ignored
    B = (1 << 4),     // Break
    D = (1 << 3),     // Decimal (use BCD for arithmetics)
    I = (1 << 2),     // Interrupt (IRQ disable)
    Z = (1 << 1),     // Zero
    C = (1 << 0)      // Carry
};

struct INSTRUCTION {
    uint8_t     (Processor::*fn_operate)(void) = nullptr;
    uint8_t     (Processor::*fn_addrmode)(void) = nullptr;
    uint8_t     cycles = 0;
};


public:
    Processor();
    ~Processor();

public: //Interrupts
    void    clock();
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

private:
    uint8_t     setFlag(SRFlag flag, uint8_t val);
    uint8_t     getFlag(SRFlag flag);
    uint8_t     fetch();

    uint8_t     mFetched    = 0;
    uint16_t    mAddrAbs    = 0;
    uint16_t    mAddrRel    = 0;
    uint8_t     mOPCode     = 0;
    uint8_t     mCycles     = 0;
    uint32_t    mClockCount = 0;


private: //Instructions
    std::array<INSTRUCTION, 256> mInstSet;

    void        initInstSet();


private: // Addressing Modes

    uint8_t     AM_ACC();  // Accumulator 
    uint8_t     AM_ABS();  // Absolute
    uint8_t     AM_ABX();  // Absolute, X-indexed
    uint8_t     AM_ABY();  // Absolute, Y-indexed 
    uint8_t     AM_IMM();  // Immediate
    uint8_t     AM_IMP();  // Implied
    uint8_t     AM_IND();  // Indirect     
    uint8_t     AM_INX();  // X-indexed, indirect
    uint8_t     AM_INY();  // indirect, Y-indexed 
    uint8_t     AM_REL();  // relative 
    uint8_t     AM_ZPG();  // Zeropage
    uint8_t     AM_ZPX();  // Zeropage, X-indexed 
    uint8_t     AM_ZPY();  // Zeropage, Y-indexed


private: // Instruction OPCode
    // A__
    uint8_t     OP_ADC();  // Add with Carry 
    uint8_t     OP_AND();  // And (with accumulator)
    uint8_t     OP_ASL();  // Arithmetic Shift left 
    // B__
    uint8_t     OP_BCC();  // Branch on Carry Clear 
    uint8_t     OP_BCS();  // Branch on Carry Set 
    uint8_t     OP_BEQ();  // Branch on Equal (zero set)
    uint8_t     OP_BIT();  // Bit Test 
    uint8_t     OP_BMI();  // Branch on Minus (negative set)
    uint8_t     OP_BNE();  // Branch on Not Equal (zero clear)
    uint8_t     OP_BPL();  // Branch on plus (negative clear)
    uint8_t     OP_BRK();  // Break / Interrupt 
    uint8_t     OP_BVC();  // Branch on Overflow Clear 
    uint8_t     OP_BVS();  // Branch on Overflow Set 
    // C__ 
    uint8_t     OP_CLC();  // Clear Carry 
    uint8_t     OP_CLD();  // Clear Decimal 
    uint8_t     OP_CLI();  // Clear Interrupt Disable 
    uint8_t     OP_CLV();  // Clear Overflow 
    uint8_t     OP_CMP();  // Compare (with accumulator)
    uint8_t     OP_CPX();  // Compare with X 
    uint8_t     OP_CPY();  // Compare with Y 
    // D__ 
    uint8_t     OP_DEC();  // Decrement 
    uint8_t     OP_DEX();  // Decrement X 
    uint8_t     OP_DEY();  // Decrement Y 
    // E__ 
    uint8_t     OP_EOR();  // Exclusiv or (with accumulator)
    // I__ 
    uint8_t     OP_INC();  // Increment 
    uint8_t     OP_INX();  // Increment X 
    uint8_t     OP_INY();  // Increment Y 
    // J__ 
    uint8_t     OP_JMP();  // Jump 
    uint8_t     OP_JSR();  // Jump Subroutine 
    // L__
    uint8_t     OP_LDA();  // Load Accumulator
    uint8_t     OP_LDX();  // Load X 
    uint8_t     OP_LDY();  // Load Y 
    uint8_t     OP_LSR();  // Logical Shift right 
    // N__ 
    uint8_t     OP_NOP();  // No Operation 
    // O__ 
    uint8_t     OP_ORA();  // Or with Accumulator 
    // P__ 
    uint8_t     OP_PHA();  // Push Accumulator 
    uint8_t     OP_PHP();  // Push Processor Status (SR)
    uint8_t     OP_PLA();  // Pull Accumulator 
    uint8_t     OP_PLP();  // Pull Processor Statis (SR)
    // R__ 
    uint8_t     OP_ROL();  // Rotate Left 
    uint8_t     OP_ROR();  // Rotate Right 
    uint8_t     OP_RTI();  // Return from Interrupt 
    uint8_t     OP_RTS();  // Return from Subroutine 
    // S__ 
    uint8_t     OP_SBC();  // Subtract with carry 
    uint8_t     OP_SEC();  // Set Carry 
    uint8_t     OP_SED();  // Set Decimal 
    uint8_t     OP_SEI();  // Set Interrupt Disable 
    uint8_t     OP_STA();  // Store Accumulator 
    uint8_t     OP_STX();  // Store X 
    uint8_t     OP_STY();  // Store Y
    // T__ 
    uint8_t     OP_TAX();  // Transfer Accumulator to X 
    uint8_t     OP_TAY();  // Transfer Accumulator to Y 
    uint8_t     OP_TSX();  // Transfer Stark Pointer to X 
    uint8_t     OP_TXA();  // Transfer X to Accumulator 
    uint8_t     OP_TXS();  // Transfer X to Stark Pointer 
    uint8_t     OP_TYA();  // Transfer Y to Accumulator 
    // Invalid OPCODE
    uint8_t     OP_ZZZ();  // Unknown, Runtimer Error 



};

}

#endif // __CPU_HPP
