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

#include "ewlocale.h"
#include "_TemplatesDeviceClass.h"
#include "_TemplatesList.h"
#include "_TemplatesListItem.h"
#include "Templates.h"

/* Initializer for the class 'Templates::List' */
void TemplatesList__Init( TemplatesList _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( TemplatesList );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( TemplatesList );
}

/* Re-Initializer for the class 'Templates::List' */
void TemplatesList__ReInit( TemplatesList _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_.Super );
}

/* Finalizer method for the class 'Templates::List' */
void TemplatesList__Done( TemplatesList _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreGroup );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_.Super );
}

/* Variants derived from the class : 'Templates::List' */
EW_DEFINE_CLASS_VARIANTS( TemplatesList )
EW_END_OF_CLASS_VARIANTS( TemplatesList )

/* Virtual Method Table (VMT) for the class : 'Templates::List' */
EW_DEFINE_CLASS( TemplatesList, CoreGroup, _.VMT, _.VMT, _.VMT, _.VMT, _.VMT, _.VMT, 
                 "Templates::List" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreGroup_GetClipping,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreGroup_AdjustDrawingArea,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetOpacity,
  CoreGroup_ExtendClipping,
  CoreGroup_SwitchToDialog,
  CoreGroup_PresentDialog,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  CoreGroup_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_FadeGroup,
  CoreGroup_RestackTop,
  CoreGroup_Restack,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( TemplatesList )

/* Initializer for the class 'Templates::ListItem' */
void TemplatesListItem__Init( TemplatesListItem _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( TemplatesListItem );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( TemplatesListItem );
}

/* Re-Initializer for the class 'Templates::ListItem' */
void TemplatesListItem__ReInit( TemplatesListItem _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_.Super );
}

/* Finalizer method for the class 'Templates::ListItem' */
void TemplatesListItem__Done( TemplatesListItem _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreGroup );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_.Super );
}

/* Variants derived from the class : 'Templates::ListItem' */
EW_DEFINE_CLASS_VARIANTS( TemplatesListItem )
EW_END_OF_CLASS_VARIANTS( TemplatesListItem )

/* Virtual Method Table (VMT) for the class : 'Templates::ListItem' */
EW_DEFINE_CLASS( TemplatesListItem, CoreGroup, _.VMT, _.VMT, _.VMT, _.VMT, _.VMT, 
                 _.VMT, "Templates::ListItem" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreGroup_GetClipping,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreGroup_AdjustDrawingArea,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetOpacity,
  CoreGroup_ExtendClipping,
  CoreGroup_SwitchToDialog,
  CoreGroup_PresentDialog,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  CoreGroup_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_FadeGroup,
  CoreGroup_RestackTop,
  CoreGroup_Restack,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( TemplatesListItem )

/* Initializer for the class 'Templates::DeviceClass' */
void TemplatesDeviceClass__Init( TemplatesDeviceClass _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  XObject__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( TemplatesDeviceClass );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( TemplatesDeviceClass );
}

/* Re-Initializer for the class 'Templates::DeviceClass' */
void TemplatesDeviceClass__ReInit( TemplatesDeviceClass _this )
{
  /* At first re-initialize the super class ... */
  XObject__ReInit( &_this->_.Super );
}

/* Finalizer method for the class 'Templates::DeviceClass' */
void TemplatesDeviceClass__Done( TemplatesDeviceClass _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( XObject );

  /* Don't forget to deinitialize the super class ... */
  XObject__Done( &_this->_.Super );
}

/* Variants derived from the class : 'Templates::DeviceClass' */
EW_DEFINE_CLASS_VARIANTS( TemplatesDeviceClass )
EW_END_OF_CLASS_VARIANTS( TemplatesDeviceClass )

/* Virtual Method Table (VMT) for the class : 'Templates::DeviceClass' */
EW_DEFINE_CLASS( TemplatesDeviceClass, XObject, _.VMT, _.VMT, _.VMT, _.VMT, _.VMT, 
                 _.VMT, "Templates::DeviceClass" )
EW_END_OF_CLASS( TemplatesDeviceClass )

/* Embedded Wizard */
