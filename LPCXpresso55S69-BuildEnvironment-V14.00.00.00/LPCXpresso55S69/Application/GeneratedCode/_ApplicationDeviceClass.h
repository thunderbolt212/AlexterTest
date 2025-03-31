/*******************************************************************************
*
* E M B E D D E D   W I Z A R D   P R O J E C T
*
*                                                Copyright (c) TARA Systems GmbH
*                                    written by Paul Banach and Manfred Schweyer
*
********************************************************************************
*
* This file was generated automatically by Embedded Wizard Studio.
*
* Please do not make any modifications of this file! The modifications are lost
* when the file is generated again by Embedded Wizard Studio!
*
* The template of this heading text can be found in the file 'head.ewt' in the
* directory 'Platforms' of your Embedded Wizard installation directory. If you
* wish to adapt this text, please copy the template file 'head.ewt' into your
* project directory and edit the copy only. Please avoid any modifications of
* the original template file!
*
* Version  : 14.00
* Profile  : Profile
* Platform : NXP.LPC.RGB565
*
*******************************************************************************/

#ifndef _ApplicationDeviceClass_H
#define _ApplicationDeviceClass_H

#ifdef __cplusplus
  extern "C"
  {
#endif

#include "ewrte.h"
#if ( EW_RTE_VERSION >> 16 ) != 14
  #error Wrong version of Embedded Wizard Runtime Environment.
#endif

#include "ewgfx.h"
#if ( EW_GFX_VERSION >> 16 ) != 14
  #error Wrong version of Embedded Wizard Graphics Engine.
#endif

#include "_TemplatesDeviceClass.h"

/* Forward declaration of the class Application::DeviceClass */
#ifndef _ApplicationDeviceClass_
  EW_DECLARE_CLASS( ApplicationDeviceClass )
#define _ApplicationDeviceClass_
#endif


/* Deklaration of class : 'Application::DeviceClass' */
EW_DEFINE_FIELDS( ApplicationDeviceClass, TemplatesDeviceClass )
  EW_PROPERTY( StageEffect1Parameter1, XInt32 )
  EW_PROPERTY( StageEffect1Parameter2, XInt32 )
EW_END_OF_FIELDS( ApplicationDeviceClass )

/* Virtual Method Table (VMT) for the class : 'Application::DeviceClass' */
EW_DEFINE_METHODS( ApplicationDeviceClass, TemplatesDeviceClass )
EW_END_OF_METHODS( ApplicationDeviceClass )

/* 'C' function for method : 'Application::DeviceClass.OnGetStageEffect1Parameter1()' */
XInt32 ApplicationDeviceClass_OnGetStageEffect1Parameter1( ApplicationDeviceClass _this );

/* 'C' function for method : 'Application::DeviceClass.OnSetStageEffect1Parameter1()' */
void ApplicationDeviceClass_OnSetStageEffect1Parameter1( ApplicationDeviceClass _this, 
  XInt32 value );

/* This method is intended to be called by the device to notify the GUI application 
   about an alternation of its setting or state value. */
void ApplicationDeviceClass_UpdateParameter1( ApplicationDeviceClass _this, XInt32 
  aNewValue );

/* Wrapper function for the non virtual method : 'Application::DeviceClass.UpdateParameter1()' */
void ApplicationDeviceClass__UpdateParameter1( void* _this, XInt32 aNewValue );

/* The following define announces the presence of the method Application::DeviceClass.UpdateParameter1(). */
#define _ApplicationDeviceClass__UpdateParameter1_

/* 'C' function for method : 'Application::DeviceClass.OnGetStageEffect1Parameter2()' */
XInt32 ApplicationDeviceClass_OnGetStageEffect1Parameter2( ApplicationDeviceClass _this );

/* 'C' function for method : 'Application::DeviceClass.OnSetStageEffect1Parameter2()' */
void ApplicationDeviceClass_OnSetStageEffect1Parameter2( ApplicationDeviceClass _this, 
  XInt32 value );

/* This method is intended to be called by the device to notify the GUI application 
   about an alternation of its setting or state value. */
void ApplicationDeviceClass_UpdateParameter2( ApplicationDeviceClass _this, XInt32 
  aNewValue );

/* Wrapper function for the non virtual method : 'Application::DeviceClass.UpdateParameter2()' */
void ApplicationDeviceClass__UpdateParameter2( void* _this, XInt32 aNewValue );

/* The following define announces the presence of the method Application::DeviceClass.UpdateParameter2(). */
#define _ApplicationDeviceClass__UpdateParameter2_

#ifdef __cplusplus
  }
#endif

#endif /* _ApplicationDeviceClass_H */

/* Embedded Wizard */
