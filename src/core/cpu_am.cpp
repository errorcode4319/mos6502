#include "cpu.hpp"

namespace core {

uint8_t Processor::ACC(){   } // Accumulator
uint8_t Processor::ABS(){   } // Absolute
uint8_t Processor::ABX(){   } // Absolute, X-indexed
uint8_t Processor::ABY(){   } // Absolute, Y-indexed 
uint8_t Processor::IMM(){   } // Immediate
uint8_t Processor::IMP(){   } // Implied
uint8_t Processor::IND(){   } // Indirect     
uint8_t Processor::INX(){   } // X-indexed, indirect
uint8_t Processor::INY(){   } // indirect, Y-indexed 
uint8_t Processor::REL(){   } // relative 
uint8_t Processor::ZPG(){   } // Zeropage
uint8_t Processor::ZPX(){   } // Zeropage, X-indexed 
uint8_t Processor::ZPY(){   } // Zeropage, Y-indexed

}