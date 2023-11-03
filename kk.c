
#ifndef BITWISE_OPERATION.H
#define BITWISE_OPERATION.H

#define Define_Bit( reg , bit) reg |= (1<<bit)
#define Clear_Bit( reg ,  bit) reg &= ~(1<<bit)
#define Get_Bit( reg ,  bit) reg &= (1<<bit)
#define Toggle_Bit( reg , bit) reg ^= (1<<bit)




#endif