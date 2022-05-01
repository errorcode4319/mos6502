#include "cpu.hpp"

namespace core {

uint8_t     Processor::ADC(){   }  // Add with Carry 
uint8_t     Processor::AND(){   }  // And (with accumulator)
uint8_t     Processor::ASL(){   }  // Arithmetic Shift left 

// B__
uint8_t     Processor::BCC(){}  // Branch on Carry Clear 
uint8_t     Processor::BCS(){}  // Branch on Carry Set 
uint8_t     Processor::BEQ(){}  // Branch on Equal (zero set)
uint8_t     Processor::BIT(){}  // Bit Test 
uint8_t     Processor::BMI(){}  // Branch on Minus (negative set)
uint8_t     Processor::BNE(){}  // Branch on Not Equal (zero clear)
uint8_t     Processor::BPL(){}  // Branch on plus (negative clear)
uint8_t     Processor::BRK(){}  // Break / Interrupt 
uint8_t     Processor::BVC(){}  // Branch on Overflow Clear 
uint8_t     Processor::BVS(){}  // Branch on Overflow Set 
    
// C__ 
uint8_t     Processor::CLC(){}  // Clear Carry 
uint8_t     Processor::CLD(){}  // Clear Decimal 
uint8_t     Processor::CLI(){}  // Clear Interrupt Disable 
uint8_t     Processor::CLV(){}  // Clear Overflow 
uint8_t     Processor::CMP(){}  // Compare (with accumulator)
uint8_t     Processor::CPX(){}  // Compare with X 
uint8_t     Processor::CPY(){}  // Compare with Y 

// D__ 
uint8_t     Processor::DEC(){}  // Decrement 
uint8_t     Processor::DEX(){}  // Decrement X 
uint8_t     Processor::DEY(){}  // Decrement Y 
    
// E__ 
uint8_t     Processor::EOR(){}  // Exclusiv or (with accumulator)
    
// I__ 
uint8_t     Processor::INC(){}  // Increment 
uint8_t     Processor::INX(){}  // Increment X 
uint8_t     Processor::INY(){}  // Increment Y 
    
// J__ 
uint8_t     Processor::JMP(){}  // Jump 
uint8_t     Processor::JSR(){}  // Jump Subroutine 
    
// L__
uint8_t     Processor::LDA(){}  // Load Accumulator
uint8_t     Processor::LDX(){}  // Load X 
uint8_t     Processor::LDY(){}  // Load Y 
uint8_t     Processor::LSR(){}  // Logical Shift right 
    
// N__ 
uint8_t     Processor::NOP(){}  // No Operation 
    
// O__ 
uint8_t     Processor::ORA(){}  // Or with Accumulator 
    
// P__ 
uint8_t     Processor::PHA(){}  // Push Accumulator 
uint8_t     Processor::PHP(){}  // Push Processor Status (SR)
uint8_t     Processor::PLA(){}  // Pull Accumulator 
uint8_t     Processor::PLP(){}  // Pull Processor Statis (SR)
   
// R__ 
uint8_t     Processor::ROL(){}  // Rotate Left 
uint8_t     Processor::ROR(){}  // Rotate Right 
uint8_t     Processor::RTI(){}  // Return from Interrupt 
uint8_t     Processor::RTS(){}  // Return from Subroutine 
    
// S__ 
uint8_t     Processor::SBC(){}  // Subtract with carry 
uint8_t     Processor::SEC(){}  // Set Carry 
uint8_t     Processor::SED(){}  // Set Decimal 
uint8_t     Processor::SEI(){}  // Set Interrupt Disable 
uint8_t     Processor::STA(){}  // Store Accumulator 
uint8_t     Processor::STX(){}  // Store X 
uint8_t     Processor::STY(){}  // Store Y
    
// T__ 
uint8_t     Processor::TAX(){}  // Transfer Accumulator to X 
uint8_t     Processor::TAY(){}  // Transfer Accumulator to Y 
uint8_t     Processor::TSX(){}  // Transfer Stark Pointer to X 
uint8_t     Processor::TXA(){}  // Transfer X to Accumulator 
uint8_t     Processor::TXS(){}  // Transfer X to Stark Pointer 
uint8_t     Processor::TYA(){}  // Transfer Y to Accumulator 
    
// Invalid OPCODE
uint8_t     Processor::ZZZ(){}  // Unknown, Runtimer Error 

}