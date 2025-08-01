/*****************************************************************************
 *==================******************************************================*
 *==================**   Author: Mohamed Samir Hashish      **================*
 *==================**               NTI                    **================*
 *==================******************************************================*/
 /*****************************************************************************/

#ifndef EXTINT_INTERFACE_H_
#define EXTINT_INTERFACE_H_

/*******************************************************************************************/
#define EXT0_ID (u8)(0)
#define EXT1_ID (u8)(1)
#define EXT2_ID (u8)(2)

#define FALLING_EDGE 0
#define RISING_EDGE  1

/*******************************************************************************************/

void EXTINT_voidInitDir(void);

//FOR Example:  EXTINT_voidInit(EXT0_ID,FALLING_EDGE)
void EXTINT_voidInit(u8 copy_u8ExtNum,u8 copy_u8ControlSens) ;


void EXTINT_voidSetCallBack(  void (*ptr_ext)(void) ,u8 copy_u8ExtNum );

/*******************************************************************************************/

#endif /* EXTINT_INTERFACE_H_ */
