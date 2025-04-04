/*******************************************************************************
*
* E M B E D D E D   W I Z A R D   P R O J E C T
*
*                                                Copyright (c) TARA Systems GmbH
*                                    written by Paul Banach and Manfred Schweyer
*
********************************************************************************
*
* This software is delivered "as is" and shows the usage of other software
* components. It is provided as an example software which is intended to be
* modified and extended according to particular requirements.
*
* TARA Systems hereby disclaims all warranties and conditions with regard to the
* software, including all implied warranties and conditions of merchantability
* and non-infringement of any third party IPR or other rights which may result
* from the use or the inability to use the software.
*
********************************************************************************
*
* DESCRIPTION:
*   This file is part of the interface (glue layer) between an Embedded Wizard
*   generated UI application and the board support package (BSP) of a dedicated
*   target.
*   This template provides access to some LEDs and buttons of the board.
*
*******************************************************************************/

#include "board.h"
#include "fsl_gpio.h"
#include "fsl_pint.h"
#include "fsl_inputmux.h"

#include "ewconfig.h"
#include "ew_bsp_inout.h"

static TButtonCallback        UserButtonCallback = NULL;

/*******************************************************************************
* FUNCTION:
*   EwBspGGpioIrqHandler
*
* DESCRIPTION:
*   The GPIO interrupt callback function.
*
* ARGUMENTS:
*   GPIO_Pin - the gpio pin.
*
* RETURN VALUE:
*   None
*
*******************************************************************************/
void EwBspGGpioIrqHandler(void)
{
  int       pinState = 1;

  if ( GPIO_PinRead( BOARD_SW3_GPIO, BOARD_SW3_GPIO_PORT, BOARD_SW3_GPIO_PIN ) )
    pinState = 0;

  if ( UserButtonCallback )
    UserButtonCallback( pinState );
}


/*******************************************************************************
* FUNCTION:
*   EwBspInOutInitButton
*
* DESCRIPTION:
*   Configures one hardware button of the board used for demo applications.
*
* ARGUMENTS:
*   aButtonCallback - The button callback.
*
* RETURN VALUE:
*   None
*
*******************************************************************************/
void EwBspInOutInitButton( TButtonCallback aButtonCallback )
{
  /* Connect trigger sources to PINT */
  INPUTMUX_Init(INPUTMUX);
  INPUTMUX_AttachSignal(INPUTMUX, kPINT_PinInt2, kINPUTMUX_GpioPort1Pin9ToPintsel);
  INPUTMUX_Deinit(INPUTMUX);

  /* Initialize PINT */
  PINT_Init(PINT);
  PINT_PinInterruptConfig(PINT, kPINT_PinInt2, kPINT_PinIntEnableBothEdges, (void*)EwBspGGpioIrqHandler);
  PINT_EnableCallbackByIndex(PINT, kPINT_PinInt2);

  UserButtonCallback = aButtonCallback;
}


/*******************************************************************************
* FUNCTION:
*   EwBspInOutInitLed
*
* DESCRIPTION:
*   Configures one LED of the board used for demo applications.
*
* ARGUMENTS:
*   None
*
* RETURN VALUE:
*   None
*
*******************************************************************************/
void EwBspInOutInitLed( void )
{
  /* Define the init structure for the output LED pin */
  gpio_pin_config_t led_config = {kGPIO_DigitalOutput, 0};

  /* Init output LED GPIO. */
  GPIO_PinInit( BOARD_LED_GREEN_GPIO, BOARD_LED_GREEN_GPIO_PORT, BOARD_LED_GREEN_GPIO_PIN, &led_config );
  GPIO_PinWrite( BOARD_LED_GREEN_GPIO, BOARD_LED_GREEN_GPIO_PORT, BOARD_LED_GREEN_GPIO_PIN, 1U );
}


/*******************************************************************************
* FUNCTION:
*   EwBspInOutLedOn
*
* DESCRIPTION:
*   Switch LED on (used for demo applications).
*
* ARGUMENTS:
*   None
*
* RETURN VALUE:
*   None
*
*******************************************************************************/
void EwBspInOutLedOn( void )
{
  GPIO_PinWrite( BOARD_LED_GREEN_GPIO, BOARD_LED_GREEN_GPIO_PORT, BOARD_LED_GREEN_GPIO_PIN, 0U );
}

/*******************************************************************************
* FUNCTION:
*   EwBspInOutParameter1Update
*
* DESCRIPTION:
*   Update Internal value for Parameter 1.
*
* ARGUMENTS:
*   None
*
* RETURN VALUE:
*   None
*
*******************************************************************************/


/*******************************************************************************
* FUNCTION:
*   EwBspInOutLedOff
*
* DESCRIPTION:
*   Switch LED off (used for demo applications).
*
* ARGUMENTS:
*   None
*
* RETURN VALUE:
*   None
*
*******************************************************************************/
void EwBspInOutLedOff( void )
{
  GPIO_PinWrite( BOARD_LED_GREEN_GPIO, BOARD_LED_GREEN_GPIO_PORT, BOARD_LED_GREEN_GPIO_PIN, 1U );
}

////

void EwBspInOutParameter1Update( uint32_t aValue )
{
	StageEffect1Parameter1 = aValue;
   EwPrint("Parameter 1: %d\r\n", aValue);
}

/* mli */
