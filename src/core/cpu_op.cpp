#include "cpu.hpp"

namespace core {

// A__
uint8_t Processor::OP_ADC() { // Add with Carry


    return 0;
}   
uint8_t Processor::OP_AND() { // And (with accumulator)


    return 0;
}
uint8_t Processor::OP_ASL() { // Arithmetic Shift left 


    return 0;
}

// B__
uint8_t Processor::OP_BCC() { // Branch on Carry Clear 


    return 0;
}
uint8_t Processor::OP_BCS() { // Branch on Carry Set 


    return 0;
}
uint8_t Processor::OP_BEQ() { // Branch on Equal (zero set)



    return 0;
}
uint8_t Processor::OP_BIT() { // Bit Test 


    return 0;
}  
uint8_t Processor::OP_BMI() { // Branch on Minus (negative set)


    return 0;
}
uint8_t Processor::OP_BNE() { // Branch on Not Equal (zero clear)


    return 0;
}
uint8_t Processor::OP_BPL() { // Branch on plus (negative clear)


    return 0;
}
uint8_t Processor::OP_BRK() { // Break / Interrupt 


    return 0;
}
uint8_t Processor::OP_BVC() { // Branch on Overflow Clear 


    return 0;
}
uint8_t Processor::OP_BVS() { // Branch on Overflow Set 


    return 0;
}
    
// C__ 
uint8_t Processor::OP_CLC() { // Clear Carry 


    return 0;
}
uint8_t Processor::OP_CLD() { // Clear Decimal 


    return 0;
}
uint8_t Processor::OP_CLI() { // Clear Interrupt Disable 


    return 0;
}
uint8_t Processor::OP_CLV() { // Clear Overflow 


    return 0;
}
uint8_t Processor::OP_CMP() { // Compare (with accumulator)


    return 0;
}   
uint8_t Processor::OP_CPX() { // Compare with X 


    return 0;
}
uint8_t Processor::OP_CPY() { // Compare with Y 


    return 0;
}

// D__ 
uint8_t Processor::OP_DEC() { // Decrement 


    return 0;
}
uint8_t Processor::OP_DEX() { // Decrement X 


    return 0;
}
uint8_t Processor::OP_DEY() { // Decrement Y 


    return 0;
}
    
// E__ 
uint8_t Processor::OP_EOR() { // Exclusiv or (with accumulator)


    return 0;
}
    
// I__ 
uint8_t Processor::OP_INC() { // Increment 


    return 0;
}
uint8_t Processor::OP_INX() { // Increment X 


    return 0;
}
uint8_t Processor::OP_INY() { // Increment Y 


    return 0;
}
    
// J__ 
uint8_t Processor::OP_JMP() { // Jump 


    return 0;
}
uint8_t Processor::OP_JSR() { // Jump Subroutine 


    return 0;
}
    
// L__
uint8_t Processor::OP_LDA() { // Load Accumulator


    return 0;
}
uint8_t Processor::OP_LDX() { // Load X 


    return 0;
}
uint8_t Processor::OP_LDY() { // Load Y 


    return 0;
}   
uint8_t Processor::OP_LSR() { // Logical Shift right 


    return 0;
}
    
// N__ 
uint8_t Processor::OP_NOP() { // No Operation 


    return 0;
}   
    
// O__ 
uint8_t Processor::OP_ORA() { // Or with Accumulator 


    return 0;
}
    
// P__ 
uint8_t Processor::OP_PHA() { // Push Accumulator 


    return 0;
}
uint8_t Processor::OP_PHP() { // Push Processor Status (SR)


    return 0;
}
uint8_t Processor::OP_PLA() { // Pull Accumulator 


    return 0;
}
uint8_t Processor::OP_PLP() { // Pull Processor Statis (SR)


    return 0;
}
   
// R__ 
uint8_t Processor::OP_ROL() { // Rotate Left 


    return 0;
}
uint8_t Processor::OP_ROR() { // Rotate Right 


    return 0;
}
uint8_t Processor::OP_RTI() { // Return from Interrupt 


    return 0;
}
uint8_t Processor::OP_RTS() { // Return from Subroutine 


    return 0;
}
    
// S__ 
uint8_t Processor::OP_SBC() { // Subtract with carry 


    return 0;
}
uint8_t Processor::OP_SEC() { // Set Carry 


    return 0;
}
uint8_t Processor::OP_SED() { // Set Decimal 


    return 0;
}  
uint8_t Processor::OP_SEI() { // Set Interrupt Disable 


    return 0;
}   
uint8_t Processor::OP_STA() { // Store Accumulator 


    return 0;
}
uint8_t Processor::OP_STX() { // Store X 


    return 0;
}
uint8_t Processor::OP_STY() { // Store Y


    return 0;
}
    
// T__ 
uint8_t Processor::OP_TAX() { // Transfer Accumulator to X 


    return 0;
}
uint8_t Processor::OP_TAY() { // Transfer Accumulator to Y 


    return 0;
}
uint8_t Processor::OP_TSX() { // Transfer Stark Pointer to X 


    return 0;
}
uint8_t Processor::OP_TXA() { // Transfer X to Accumulator 


    return 0;
}
uint8_t Processor::OP_TXS() { // Transfer X to Stark Pointer 


    return 0;
}
uint8_t Processor::OP_TYA() { // Transfer Y to Accumulator 


    return 0;
}
    
// Invalid OPCODE
uint8_t Processor::OP_ZZZ() { // Unknown, Runtimer Error 


    return 0;
}

}