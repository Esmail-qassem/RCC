#ifndef RCC_INTERFACE_H_
#define RCC_INTERFACE_H_

void RCC_voidInit(void);
void RCC_voidEnablePeripheral(u8 Copy_u8PeripheralBus,u8 Copy_u8Peripheral);
void RCC_voidDisablePeripheral(u8 Copy_u8PeripheralBus,u8 Copy_u8Peripheral);
void RCC_voidResetPeripheral(u8 Copy_u8PeripheralBus,u8 Copy_u8Peripheral);

#endif 