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
#include "_CoreKeyPressHandler.h"
#include "_CoreRoot.h"
#include "_CoreSimpleTouchHandler.h"
#include "_CoreTimer.h"
#include "_CoreView.h"
#include "_EffectsFloatEffect.h"
#include "_ResourcesBitmap.h"
#include "_ResourcesFont.h"
#include "_ViewsBorder.h"
#include "_ViewsFrame.h"
#include "_ViewsImage.h"
#include "_ViewsRectangle.h"
#include "_ViewsShadow.h"
#include "_ViewsText.h"
#include "_WidgetSetHorizontalSlider.h"
#include "_WidgetSetHorizontalSliderConfig.h"
#include "_WidgetSetPushButton.h"
#include "_WidgetSetPushButtonConfig.h"
#include "_WidgetSetWidgetConfig.h"
#include "Core.h"
#include "Graphics.h"
#include "Resources.h"
#include "Views.h"
#include "WidgetSet.h"

/* Constant values used in this 'C' module only. */
static const XColor _Const0000 = { 0xFF, 0xFF, 0xFF, 0xFF };
static const XColor _Const0001 = { 0xA8, 0xAB, 0xAB, 0xFF };
static const XColor _Const0002 = { 0x6C, 0x6E, 0x70, 0xFF };
static const XColor _Const0003 = { 0xA8, 0xAB, 0xAB, 0xAA };
static const XPoint _Const0004 = { 23, 23 };
static const XPoint _Const0005 = { 45, 39 };
static const XColor _Const0006 = { 0x00, 0x00, 0x00, 0xFF };
static const XRect _Const0007 = {{ 0, 0 }, { 200, 50 }};
static const XPoint _Const0008 = { 0, 50 };
static const XPoint _Const0009 = { 200, 50 };
static const XPoint _Const000A = { 200, 0 };
static const XPoint _Const000B = { 0, 0 };
static const XRect _Const000C = {{ 0, 0 }, { 0, 0 }};
static const XRect _Const000D = {{ -8, -8 }, { 9, 9 }};
static const XRect _Const000E = {{ 0, 0 }, { 150, 50 }};
static const XPoint _Const000F = { 150, 50 };
static const XPoint _Const0010 = { 150, 0 };
static const XColor _Const0011 = { 0x00, 0x00, 0x00, 0x00 };
static const XPoint _Const0012 = { -1, -1 };
static const XColor _Const0013 = { 0x00, 0x00, 0x00, 0xEE };
static const XColor _Const0014 = { 0x00, 0x00, 0x00, 0x88 };
static const XColor _Const0015 = { 0x00, 0x00, 0x00, 0x22 };
static const XColor _Const0016 = { 0x00, 0x00, 0x00, 0x44 };
static const XColor _Const0017 = { 0x44, 0x44, 0x44, 0xFF };
static const XColor _Const0018 = { 0x44, 0x44, 0x44, 0x44 };
static const XPoint _Const0019 = { 40, 40 };

/* Include a file containing the bitmap resource : 'WidgetSet::PushButtonSmall' */
#include "_WidgetSetPushButtonSmall.h"

/* Table with links to derived variants of the bitmap resource : 'WidgetSet::PushButtonSmall' */
EW_RES_WITHOUT_VARIANTS( WidgetSetPushButtonSmall )

/* This autoobject provides the default customization for the 'push button' widget 
   (WidgetSet::PushButton) in its small size variant. */
EW_DEFINE_AUTOOBJECT( WidgetSetPushButton_Lime_Small, WidgetSetPushButtonConfig )

/* Initializer for the auto object 'WidgetSet::PushButton_Lime_Small' */
void WidgetSetPushButton_Lime_Small__Init( WidgetSetPushButtonConfig _this )
{
  WidgetSetPushButtonConfig_OnSetLabelColorActive( _this, _Const0000 );
  WidgetSetPushButtonConfig_OnSetLabelColorFocused( _this, _Const0000 );
  WidgetSetPushButtonConfig_OnSetLabelColorDisabled( _this, _Const0001 );
  WidgetSetPushButtonConfig_OnSetLabelColorDefault( _this, _Const0002 );
  WidgetSetPushButtonConfig_OnSetLabelMarginBottom( _this, 4 );
  WidgetSetPushButtonConfig_OnSetLabelMarginTop( _this, 4 );
  WidgetSetPushButtonConfig_OnSetLabelMarginRight( _this, 4 );
  WidgetSetPushButtonConfig_OnSetLabelMarginLeft( _this, 4 );
  WidgetSetPushButtonConfig_OnSetIconTintDisabled( _this, _Const0003 );
  WidgetSetPushButtonConfig_OnSetIconTintDefault( _this, _Const0002 );
  WidgetSetPushButtonConfig_OnSetIconMarginBottom( _this, 4 );
  WidgetSetPushButtonConfig_OnSetIconMarginTop( _this, 4 );
  WidgetSetPushButtonConfig_OnSetIconMarginRight( _this, 4 );
  WidgetSetPushButtonConfig_OnSetIconMarginLeft( _this, 4 );
  WidgetSetPushButtonConfig_OnSetLabelFont( _this, EwLoadResource( &ResourcesFontSmall, 
  ResourcesFont ));
  WidgetSetPushButtonConfig_OnSetFaceFrameActive( _this, 3 );
  WidgetSetPushButtonConfig_OnSetFaceFrameFocused( _this, 2 );
  WidgetSetPushButtonConfig_OnSetFaceFrameDisabled( _this, 0 );
  WidgetSetPushButtonConfig_OnSetFaceFrameDefault( _this, 1 );
  WidgetSetPushButtonConfig_OnSetFaceBitmapActive( _this, EwLoadResource( &WidgetSetPushButtonSmall, 
  ResourcesBitmap ));
  WidgetSetPushButtonConfig_OnSetFaceBitmapFocused( _this, EwLoadResource( &WidgetSetPushButtonSmall, 
  ResourcesBitmap ));
  WidgetSetPushButtonConfig_OnSetFaceBitmapDisabled( _this, EwLoadResource( &WidgetSetPushButtonSmall, 
  ResourcesBitmap ));
  WidgetSetPushButtonConfig_OnSetFaceBitmapDefault( _this, EwLoadResource( &WidgetSetPushButtonSmall, 
  ResourcesBitmap ));
  WidgetSetPushButtonConfig_OnSetWidgetMinSize( _this, _Const0004 );
}

/* Re-Initializer for the auto object 'WidgetSet::PushButton_Lime_Small' */
void WidgetSetPushButton_Lime_Small__ReInit( WidgetSetPushButtonConfig _this )
{
  EW_UNUSED_ARG( _this );
}

/* Table with links to derived variants of the auto object : 'WidgetSet::PushButton_Lime_Small' */
EW_DEFINE_AUTOOBJECT_VARIANTS( WidgetSetPushButton_Lime_Small )
EW_END_OF_AUTOOBJECT_VARIANTS( WidgetSetPushButton_Lime_Small )

/* Include a file containing the bitmap resource : 'WidgetSet::HorizontalSliderTrackMedium' */
#include "_WidgetSetHorizontalSliderTrackMedium.h"

/* Table with links to derived variants of the bitmap resource : 'WidgetSet::HorizontalSliderTrackMedium' */
EW_RES_WITHOUT_VARIANTS( WidgetSetHorizontalSliderTrackMedium )

/* Include a file containing the bitmap resource : 'WidgetSet::ThumbKnobMedium' */
#include "_WidgetSetThumbKnobMedium.h"

/* Table with links to derived variants of the bitmap resource : 'WidgetSet::ThumbKnobMedium' */
EW_RES_WITHOUT_VARIANTS( WidgetSetThumbKnobMedium )

/* This autoobject provides the default customization for the 'horizontal slider' 
   widget (WidgetSet::HorizontalSlider) in its medium size variant. */
EW_DEFINE_AUTOOBJECT( WidgetSetHorizontalSlider_Lime_Medium, WidgetSetHorizontalSliderConfig )

/* Initializer for the auto object 'WidgetSet::HorizontalSlider_Lime_Medium' */
void WidgetSetHorizontalSlider_Lime_Medium__Init( WidgetSetHorizontalSliderConfig _this )
{
  WidgetSetHorizontalSliderConfig_OnSetKeyRepeatPeriod( _this, 100 );
  WidgetSetHorizontalSliderConfig_OnSetKeyRepeatDelay( _this, 500 );
  WidgetSetHorizontalSliderConfig_OnSetThumbMarginRight( _this, -2 );
  WidgetSetHorizontalSliderConfig_OnSetThumbMarginLeft( _this, -2 );
  WidgetSetHorizontalSliderConfig_OnSetThumbFrameActive( _this, 3 );
  WidgetSetHorizontalSliderConfig_OnSetThumbFrameFocused( _this, 2 );
  WidgetSetHorizontalSliderConfig_OnSetThumbFrameDisabled( _this, 0 );
  WidgetSetHorizontalSliderConfig_OnSetThumbFrameDefault( _this, 1 );
  WidgetSetHorizontalSliderConfig_OnSetThumbBitmapActive( _this, EwLoadResource( 
  &WidgetSetThumbKnobMedium, ResourcesBitmap ));
  WidgetSetHorizontalSliderConfig_OnSetThumbBitmapFocused( _this, EwLoadResource( 
  &WidgetSetThumbKnobMedium, ResourcesBitmap ));
  WidgetSetHorizontalSliderConfig_OnSetThumbBitmapDisabled( _this, EwLoadResource( 
  &WidgetSetThumbKnobMedium, ResourcesBitmap ));
  WidgetSetHorizontalSliderConfig_OnSetThumbBitmapDefault( _this, EwLoadResource( 
  &WidgetSetThumbKnobMedium, ResourcesBitmap ));
  WidgetSetHorizontalSliderConfig_OnSetTrackRightFrameActive( _this, 0 );
  WidgetSetHorizontalSliderConfig_OnSetTrackRightFrameFocused( _this, 0 );
  WidgetSetHorizontalSliderConfig_OnSetTrackRightFrameDisabled( _this, 0 );
  WidgetSetHorizontalSliderConfig_OnSetTrackRightFrameDefault( _this, 0 );
  WidgetSetHorizontalSliderConfig_OnSetTrackRightBitmapActive( _this, EwLoadResource( 
  &WidgetSetHorizontalSliderTrackMedium, ResourcesBitmap ));
  WidgetSetHorizontalSliderConfig_OnSetTrackRightBitmapFocused( _this, EwLoadResource( 
  &WidgetSetHorizontalSliderTrackMedium, ResourcesBitmap ));
  WidgetSetHorizontalSliderConfig_OnSetTrackRightBitmapDisabled( _this, EwLoadResource( 
  &WidgetSetHorizontalSliderTrackMedium, ResourcesBitmap ));
  WidgetSetHorizontalSliderConfig_OnSetTrackRightBitmapDefault( _this, EwLoadResource( 
  &WidgetSetHorizontalSliderTrackMedium, ResourcesBitmap ));
  WidgetSetHorizontalSliderConfig_OnSetTrackLeftFrameActive( _this, 1 );
  WidgetSetHorizontalSliderConfig_OnSetTrackLeftFrameFocused( _this, 1 );
  WidgetSetHorizontalSliderConfig_OnSetTrackLeftFrameDisabled( _this, 1 );
  WidgetSetHorizontalSliderConfig_OnSetTrackLeftFrameDefault( _this, 1 );
  WidgetSetHorizontalSliderConfig_OnSetTrackLeftBitmapActive( _this, EwLoadResource( 
  &WidgetSetHorizontalSliderTrackMedium, ResourcesBitmap ));
  WidgetSetHorizontalSliderConfig_OnSetTrackLeftBitmapFocused( _this, EwLoadResource( 
  &WidgetSetHorizontalSliderTrackMedium, ResourcesBitmap ));
  WidgetSetHorizontalSliderConfig_OnSetTrackLeftBitmapDisabled( _this, EwLoadResource( 
  &WidgetSetHorizontalSliderTrackMedium, ResourcesBitmap ));
  WidgetSetHorizontalSliderConfig_OnSetTrackLeftBitmapDefault( _this, EwLoadResource( 
  &WidgetSetHorizontalSliderTrackMedium, ResourcesBitmap ));
  WidgetSetHorizontalSliderConfig_OnSetWidgetMinSize( _this, _Const0005 );
}

/* Re-Initializer for the auto object 'WidgetSet::HorizontalSlider_Lime_Medium' */
void WidgetSetHorizontalSlider_Lime_Medium__ReInit( WidgetSetHorizontalSliderConfig _this )
{
  EW_UNUSED_ARG( _this );
}

/* Table with links to derived variants of the auto object : 'WidgetSet::HorizontalSlider_Lime_Medium' */
EW_DEFINE_AUTOOBJECT_VARIANTS( WidgetSetHorizontalSlider_Lime_Medium )
EW_END_OF_AUTOOBJECT_VARIANTS( WidgetSetHorizontalSlider_Lime_Medium )

/* Initializer for the class 'WidgetSet::HorizontalSliderConfig' */
void WidgetSetHorizontalSliderConfig__Init( WidgetSetHorizontalSliderConfig _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  WidgetSetWidgetConfig__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( WidgetSetHorizontalSliderConfig );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( WidgetSetHorizontalSliderConfig );

  /* ... and initialize objects, variables, properties, etc. */
  _this->ThumbFrameActive = -1;
  _this->ThumbFrameFocused = -1;
  _this->ThumbFrameDisabled = -1;
  _this->ThumbFrameDefault = -1;
  _this->TrackRightFrameActive = -1;
  _this->TrackRightFrameFocused = -1;
  _this->TrackRightFrameDisabled = -1;
  _this->TrackRightFrameDefault = -1;
  _this->TrackLeftFrameActive = -1;
  _this->TrackLeftFrameFocused = -1;
  _this->TrackLeftFrameDisabled = -1;
  _this->TrackLeftFrameDefault = -1;
}

/* Re-Initializer for the class 'WidgetSet::HorizontalSliderConfig' */
void WidgetSetHorizontalSliderConfig__ReInit( WidgetSetHorizontalSliderConfig _this )
{
  /* At first re-initialize the super class ... */
  WidgetSetWidgetConfig__ReInit( &_this->_.Super );
}

/* Finalizer method for the class 'WidgetSet::HorizontalSliderConfig' */
void WidgetSetHorizontalSliderConfig__Done( WidgetSetHorizontalSliderConfig _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( WidgetSetWidgetConfig );

  /* Don't forget to deinitialize the super class ... */
  WidgetSetWidgetConfig__Done( &_this->_.Super );
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetKeyRepeatPeriod()' */
void WidgetSetHorizontalSliderConfig_OnSetKeyRepeatPeriod( WidgetSetHorizontalSliderConfig _this, 
  XInt32 value )
{
  if ( _this->KeyRepeatPeriod == value )
    return;

  _this->KeyRepeatPeriod = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetKeyRepeatDelay()' */
void WidgetSetHorizontalSliderConfig_OnSetKeyRepeatDelay( WidgetSetHorizontalSliderConfig _this, 
  XInt32 value )
{
  if ( _this->KeyRepeatDelay == value )
    return;

  _this->KeyRepeatDelay = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetThumbFrameActive()' */
void WidgetSetHorizontalSliderConfig_OnSetThumbFrameActive( WidgetSetHorizontalSliderConfig _this, 
  XInt32 value )
{
  if ( _this->ThumbFrameActive == value )
    return;

  _this->ThumbFrameActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetThumbFrameFocused()' */
void WidgetSetHorizontalSliderConfig_OnSetThumbFrameFocused( WidgetSetHorizontalSliderConfig _this, 
  XInt32 value )
{
  if ( _this->ThumbFrameFocused == value )
    return;

  _this->ThumbFrameFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetThumbFrameDisabled()' */
void WidgetSetHorizontalSliderConfig_OnSetThumbFrameDisabled( WidgetSetHorizontalSliderConfig _this, 
  XInt32 value )
{
  if ( _this->ThumbFrameDisabled == value )
    return;

  _this->ThumbFrameDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetThumbFrameDefault()' */
void WidgetSetHorizontalSliderConfig_OnSetThumbFrameDefault( WidgetSetHorizontalSliderConfig _this, 
  XInt32 value )
{
  if ( _this->ThumbFrameDefault == value )
    return;

  _this->ThumbFrameDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetThumbBitmapActive()' */
void WidgetSetHorizontalSliderConfig_OnSetThumbBitmapActive( WidgetSetHorizontalSliderConfig _this, 
  ResourcesBitmap value )
{
  if ( _this->ThumbBitmapActive == value )
    return;

  _this->ThumbBitmapActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetThumbBitmapFocused()' */
void WidgetSetHorizontalSliderConfig_OnSetThumbBitmapFocused( WidgetSetHorizontalSliderConfig _this, 
  ResourcesBitmap value )
{
  if ( _this->ThumbBitmapFocused == value )
    return;

  _this->ThumbBitmapFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetThumbBitmapDisabled()' */
void WidgetSetHorizontalSliderConfig_OnSetThumbBitmapDisabled( WidgetSetHorizontalSliderConfig _this, 
  ResourcesBitmap value )
{
  if ( _this->ThumbBitmapDisabled == value )
    return;

  _this->ThumbBitmapDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetThumbBitmapDefault()' */
void WidgetSetHorizontalSliderConfig_OnSetThumbBitmapDefault( WidgetSetHorizontalSliderConfig _this, 
  ResourcesBitmap value )
{
  if ( _this->ThumbBitmapDefault == value )
    return;

  _this->ThumbBitmapDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetThumbMarginRight()' */
void WidgetSetHorizontalSliderConfig_OnSetThumbMarginRight( WidgetSetHorizontalSliderConfig _this, 
  XInt32 value )
{
  if ( _this->ThumbMarginRight == value )
    return;

  _this->ThumbMarginRight = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetThumbMarginLeft()' */
void WidgetSetHorizontalSliderConfig_OnSetThumbMarginLeft( WidgetSetHorizontalSliderConfig _this, 
  XInt32 value )
{
  if ( _this->ThumbMarginLeft == value )
    return;

  _this->ThumbMarginLeft = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetTrackRightFrameActive()' */
void WidgetSetHorizontalSliderConfig_OnSetTrackRightFrameActive( WidgetSetHorizontalSliderConfig _this, 
  XInt32 value )
{
  if ( _this->TrackRightFrameActive == value )
    return;

  _this->TrackRightFrameActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetTrackRightFrameFocused()' */
void WidgetSetHorizontalSliderConfig_OnSetTrackRightFrameFocused( WidgetSetHorizontalSliderConfig _this, 
  XInt32 value )
{
  if ( _this->TrackRightFrameFocused == value )
    return;

  _this->TrackRightFrameFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetTrackRightFrameDisabled()' */
void WidgetSetHorizontalSliderConfig_OnSetTrackRightFrameDisabled( WidgetSetHorizontalSliderConfig _this, 
  XInt32 value )
{
  if ( _this->TrackRightFrameDisabled == value )
    return;

  _this->TrackRightFrameDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetTrackRightFrameDefault()' */
void WidgetSetHorizontalSliderConfig_OnSetTrackRightFrameDefault( WidgetSetHorizontalSliderConfig _this, 
  XInt32 value )
{
  if ( _this->TrackRightFrameDefault == value )
    return;

  _this->TrackRightFrameDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetTrackRightBitmapActive()' */
void WidgetSetHorizontalSliderConfig_OnSetTrackRightBitmapActive( WidgetSetHorizontalSliderConfig _this, 
  ResourcesBitmap value )
{
  if ( _this->TrackRightBitmapActive == value )
    return;

  _this->TrackRightBitmapActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetTrackRightBitmapFocused()' */
void WidgetSetHorizontalSliderConfig_OnSetTrackRightBitmapFocused( WidgetSetHorizontalSliderConfig _this, 
  ResourcesBitmap value )
{
  if ( _this->TrackRightBitmapFocused == value )
    return;

  _this->TrackRightBitmapFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetTrackRightBitmapDisabled()' */
void WidgetSetHorizontalSliderConfig_OnSetTrackRightBitmapDisabled( WidgetSetHorizontalSliderConfig _this, 
  ResourcesBitmap value )
{
  if ( _this->TrackRightBitmapDisabled == value )
    return;

  _this->TrackRightBitmapDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetTrackRightBitmapDefault()' */
void WidgetSetHorizontalSliderConfig_OnSetTrackRightBitmapDefault( WidgetSetHorizontalSliderConfig _this, 
  ResourcesBitmap value )
{
  if ( _this->TrackRightBitmapDefault == value )
    return;

  _this->TrackRightBitmapDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetTrackLeftFrameActive()' */
void WidgetSetHorizontalSliderConfig_OnSetTrackLeftFrameActive( WidgetSetHorizontalSliderConfig _this, 
  XInt32 value )
{
  if ( _this->TrackLeftFrameActive == value )
    return;

  _this->TrackLeftFrameActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetTrackLeftFrameFocused()' */
void WidgetSetHorizontalSliderConfig_OnSetTrackLeftFrameFocused( WidgetSetHorizontalSliderConfig _this, 
  XInt32 value )
{
  if ( _this->TrackLeftFrameFocused == value )
    return;

  _this->TrackLeftFrameFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetTrackLeftFrameDisabled()' */
void WidgetSetHorizontalSliderConfig_OnSetTrackLeftFrameDisabled( WidgetSetHorizontalSliderConfig _this, 
  XInt32 value )
{
  if ( _this->TrackLeftFrameDisabled == value )
    return;

  _this->TrackLeftFrameDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetTrackLeftFrameDefault()' */
void WidgetSetHorizontalSliderConfig_OnSetTrackLeftFrameDefault( WidgetSetHorizontalSliderConfig _this, 
  XInt32 value )
{
  if ( _this->TrackLeftFrameDefault == value )
    return;

  _this->TrackLeftFrameDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetTrackLeftBitmapActive()' */
void WidgetSetHorizontalSliderConfig_OnSetTrackLeftBitmapActive( WidgetSetHorizontalSliderConfig _this, 
  ResourcesBitmap value )
{
  if ( _this->TrackLeftBitmapActive == value )
    return;

  _this->TrackLeftBitmapActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetTrackLeftBitmapFocused()' */
void WidgetSetHorizontalSliderConfig_OnSetTrackLeftBitmapFocused( WidgetSetHorizontalSliderConfig _this, 
  ResourcesBitmap value )
{
  if ( _this->TrackLeftBitmapFocused == value )
    return;

  _this->TrackLeftBitmapFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetTrackLeftBitmapDisabled()' */
void WidgetSetHorizontalSliderConfig_OnSetTrackLeftBitmapDisabled( WidgetSetHorizontalSliderConfig _this, 
  ResourcesBitmap value )
{
  if ( _this->TrackLeftBitmapDisabled == value )
    return;

  _this->TrackLeftBitmapDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetTrackLeftBitmapDefault()' */
void WidgetSetHorizontalSliderConfig_OnSetTrackLeftBitmapDefault( WidgetSetHorizontalSliderConfig _this, 
  ResourcesBitmap value )
{
  if ( _this->TrackLeftBitmapDefault == value )
    return;

  _this->TrackLeftBitmapDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetWidgetMinSize()' */
void WidgetSetHorizontalSliderConfig_OnSetWidgetMinSize( WidgetSetHorizontalSliderConfig _this, 
  XPoint value )
{
  if ( value.X < 0 )
    value.X = 0;

  if ( value.Y < 0 )
    value.Y = 0;

  if ( !EwCompPoint( _this->WidgetMinSize, value ))
    return;

  _this->WidgetMinSize = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* Variants derived from the class : 'WidgetSet::HorizontalSliderConfig' */
EW_DEFINE_CLASS_VARIANTS( WidgetSetHorizontalSliderConfig )
EW_END_OF_CLASS_VARIANTS( WidgetSetHorizontalSliderConfig )

/* Virtual Method Table (VMT) for the class : 'WidgetSet::HorizontalSliderConfig' */
EW_DEFINE_CLASS( WidgetSetHorizontalSliderConfig, WidgetSetWidgetConfig, ThumbBitmapActive, 
                 ThumbBitmapActive, KeyRepeatPeriod, KeyRepeatPeriod, KeyRepeatPeriod, 
                 KeyRepeatPeriod, "WidgetSet::HorizontalSliderConfig" )
EW_END_OF_CLASS( WidgetSetHorizontalSliderConfig )

/* Initializer for the class 'WidgetSet::PushButtonConfig' */
void WidgetSetPushButtonConfig__Init( WidgetSetPushButtonConfig _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  WidgetSetWidgetConfig__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( WidgetSetPushButtonConfig );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( WidgetSetPushButtonConfig );

  /* ... and initialize objects, variables, properties, etc. */
  _this->PressedFeedbackDuration = 50;
  _this->LabelColorActive = _Const0006;
  _this->LabelColorFocused = _Const0006;
  _this->LabelColorDisabled = _Const0006;
  _this->LabelColorDefault = _Const0006;
  _this->IconTintActive = _Const0000;
  _this->IconTintFocused = _Const0000;
  _this->IconTintDisabled = _Const0000;
  _this->IconTintDefault = _Const0000;
  _this->FaceFrameActive = -1;
  _this->FaceFrameFocused = -1;
  _this->FaceFrameDisabled = -1;
  _this->FaceFrameDefault = -1;
}

/* Re-Initializer for the class 'WidgetSet::PushButtonConfig' */
void WidgetSetPushButtonConfig__ReInit( WidgetSetPushButtonConfig _this )
{
  /* At first re-initialize the super class ... */
  WidgetSetWidgetConfig__ReInit( &_this->_.Super );
}

/* Finalizer method for the class 'WidgetSet::PushButtonConfig' */
void WidgetSetPushButtonConfig__Done( WidgetSetPushButtonConfig _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( WidgetSetWidgetConfig );

  /* Don't forget to deinitialize the super class ... */
  WidgetSetWidgetConfig__Done( &_this->_.Super );
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetStateTransitionDuration()' */
void WidgetSetPushButtonConfig_OnSetStateTransitionDuration( WidgetSetPushButtonConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->StateTransitionDuration == value )
    return;

  _this->StateTransitionDuration = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetPressedFeedbackDuration()' */
void WidgetSetPushButtonConfig_OnSetPressedFeedbackDuration( WidgetSetPushButtonConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->PressedFeedbackDuration == value )
    return;

  _this->PressedFeedbackDuration = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetThumbShadowColorFocused()' */
void WidgetSetPushButtonConfig_OnSetThumbShadowColorFocused( WidgetSetPushButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->ThumbShadowColorFocused, value ))
    return;

  _this->ThumbShadowColorFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetThumbShadowColorDefault()' */
void WidgetSetPushButtonConfig_OnSetThumbShadowColorDefault( WidgetSetPushButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->ThumbShadowColorDefault, value ))
    return;

  _this->ThumbShadowColorDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetThumbShadowBlurRadiusFocused()' */
void WidgetSetPushButtonConfig_OnSetThumbShadowBlurRadiusFocused( WidgetSetPushButtonConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( value > 64 )
    value = 64;

  if ( _this->ThumbShadowBlurRadiusFocused == value )
    return;

  _this->ThumbShadowBlurRadiusFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetThumbShadowBlurRadiusDefault()' */
void WidgetSetPushButtonConfig_OnSetThumbShadowBlurRadiusDefault( WidgetSetPushButtonConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( value > 64 )
    value = 64;

  if ( _this->ThumbShadowBlurRadiusDefault == value )
    return;

  _this->ThumbShadowBlurRadiusDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetThumbBorderColorActive()' */
void WidgetSetPushButtonConfig_OnSetThumbBorderColorActive( WidgetSetPushButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->ThumbBorderColorActive, value ))
    return;

  _this->ThumbBorderColorActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetThumbBorderColorFocused()' */
void WidgetSetPushButtonConfig_OnSetThumbBorderColorFocused( WidgetSetPushButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->ThumbBorderColorFocused, value ))
    return;

  _this->ThumbBorderColorFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetThumbBorderColorDisabled()' */
void WidgetSetPushButtonConfig_OnSetThumbBorderColorDisabled( WidgetSetPushButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->ThumbBorderColorDisabled, value ))
    return;

  _this->ThumbBorderColorDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetThumbBorderColorDefault()' */
void WidgetSetPushButtonConfig_OnSetThumbBorderColorDefault( WidgetSetPushButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->ThumbBorderColorDefault, value ))
    return;

  _this->ThumbBorderColorDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetThumbBorderWidthActive()' */
void WidgetSetPushButtonConfig_OnSetThumbBorderWidthActive( WidgetSetPushButtonConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->ThumbBorderWidthActive == value )
    return;

  _this->ThumbBorderWidthActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetThumbBorderWidthFocused()' */
void WidgetSetPushButtonConfig_OnSetThumbBorderWidthFocused( WidgetSetPushButtonConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->ThumbBorderWidthFocused == value )
    return;

  _this->ThumbBorderWidthFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetThumbBorderWidthDisabled()' */
void WidgetSetPushButtonConfig_OnSetThumbBorderWidthDisabled( WidgetSetPushButtonConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->ThumbBorderWidthDisabled == value )
    return;

  _this->ThumbBorderWidthDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetThumbBorderWidthDefault()' */
void WidgetSetPushButtonConfig_OnSetThumbBorderWidthDefault( WidgetSetPushButtonConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->ThumbBorderWidthDefault == value )
    return;

  _this->ThumbBorderWidthDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetThumbColorActive()' */
void WidgetSetPushButtonConfig_OnSetThumbColorActive( WidgetSetPushButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->ThumbColorActive, value ))
    return;

  _this->ThumbColorActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetThumbColorFocused()' */
void WidgetSetPushButtonConfig_OnSetThumbColorFocused( WidgetSetPushButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->ThumbColorFocused, value ))
    return;

  _this->ThumbColorFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetThumbColorDisabled()' */
void WidgetSetPushButtonConfig_OnSetThumbColorDisabled( WidgetSetPushButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->ThumbColorDisabled, value ))
    return;

  _this->ThumbColorDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetThumbColorDefault()' */
void WidgetSetPushButtonConfig_OnSetThumbColorDefault( WidgetSetPushButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->ThumbColorDefault, value ))
    return;

  _this->ThumbColorDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetThumbCornerRadiusActive()' */
void WidgetSetPushButtonConfig_OnSetThumbCornerRadiusActive( WidgetSetPushButtonConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->ThumbCornerRadiusActive == value )
    return;

  _this->ThumbCornerRadiusActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetThumbCornerRadiusFocused()' */
void WidgetSetPushButtonConfig_OnSetThumbCornerRadiusFocused( WidgetSetPushButtonConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->ThumbCornerRadiusFocused == value )
    return;

  _this->ThumbCornerRadiusFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetThumbCornerRadiusDisabled()' */
void WidgetSetPushButtonConfig_OnSetThumbCornerRadiusDisabled( WidgetSetPushButtonConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->ThumbCornerRadiusDisabled == value )
    return;

  _this->ThumbCornerRadiusDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetThumbCornerRadiusDefault()' */
void WidgetSetPushButtonConfig_OnSetThumbCornerRadiusDefault( WidgetSetPushButtonConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->ThumbCornerRadiusDefault == value )
    return;

  _this->ThumbCornerRadiusDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetLabelColorActive()' */
void WidgetSetPushButtonConfig_OnSetLabelColorActive( WidgetSetPushButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->LabelColorActive, value ))
    return;

  _this->LabelColorActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetLabelColorFocused()' */
void WidgetSetPushButtonConfig_OnSetLabelColorFocused( WidgetSetPushButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->LabelColorFocused, value ))
    return;

  _this->LabelColorFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetLabelColorDisabled()' */
void WidgetSetPushButtonConfig_OnSetLabelColorDisabled( WidgetSetPushButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->LabelColorDisabled, value ))
    return;

  _this->LabelColorDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetLabelColorDefault()' */
void WidgetSetPushButtonConfig_OnSetLabelColorDefault( WidgetSetPushButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->LabelColorDefault, value ))
    return;

  _this->LabelColorDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetLabelMarginBottom()' */
void WidgetSetPushButtonConfig_OnSetLabelMarginBottom( WidgetSetPushButtonConfig _this, 
  XInt32 value )
{
  if ( _this->LabelMarginBottom == value )
    return;

  _this->LabelMarginBottom = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetLabelMarginTop()' */
void WidgetSetPushButtonConfig_OnSetLabelMarginTop( WidgetSetPushButtonConfig _this, 
  XInt32 value )
{
  if ( _this->LabelMarginTop == value )
    return;

  _this->LabelMarginTop = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetLabelMarginRight()' */
void WidgetSetPushButtonConfig_OnSetLabelMarginRight( WidgetSetPushButtonConfig _this, 
  XInt32 value )
{
  if ( _this->LabelMarginRight == value )
    return;

  _this->LabelMarginRight = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetLabelMarginLeft()' */
void WidgetSetPushButtonConfig_OnSetLabelMarginLeft( WidgetSetPushButtonConfig _this, 
  XInt32 value )
{
  if ( _this->LabelMarginLeft == value )
    return;

  _this->LabelMarginLeft = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetIconTintActive()' */
void WidgetSetPushButtonConfig_OnSetIconTintActive( WidgetSetPushButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->IconTintActive, value ))
    return;

  _this->IconTintActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetIconTintFocused()' */
void WidgetSetPushButtonConfig_OnSetIconTintFocused( WidgetSetPushButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->IconTintFocused, value ))
    return;

  _this->IconTintFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetIconTintDisabled()' */
void WidgetSetPushButtonConfig_OnSetIconTintDisabled( WidgetSetPushButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->IconTintDisabled, value ))
    return;

  _this->IconTintDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetIconTintDefault()' */
void WidgetSetPushButtonConfig_OnSetIconTintDefault( WidgetSetPushButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->IconTintDefault, value ))
    return;

  _this->IconTintDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetIconMarginBottom()' */
void WidgetSetPushButtonConfig_OnSetIconMarginBottom( WidgetSetPushButtonConfig _this, 
  XInt32 value )
{
  if ( _this->IconMarginBottom == value )
    return;

  _this->IconMarginBottom = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetIconMarginTop()' */
void WidgetSetPushButtonConfig_OnSetIconMarginTop( WidgetSetPushButtonConfig _this, 
  XInt32 value )
{
  if ( _this->IconMarginTop == value )
    return;

  _this->IconMarginTop = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetIconMarginRight()' */
void WidgetSetPushButtonConfig_OnSetIconMarginRight( WidgetSetPushButtonConfig _this, 
  XInt32 value )
{
  if ( _this->IconMarginRight == value )
    return;

  _this->IconMarginRight = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetIconMarginLeft()' */
void WidgetSetPushButtonConfig_OnSetIconMarginLeft( WidgetSetPushButtonConfig _this, 
  XInt32 value )
{
  if ( _this->IconMarginLeft == value )
    return;

  _this->IconMarginLeft = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetLabelFont()' */
void WidgetSetPushButtonConfig_OnSetLabelFont( WidgetSetPushButtonConfig _this, 
  ResourcesFont value )
{
  if ( _this->LabelFont == value )
    return;

  _this->LabelFont = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetFaceFrameActive()' */
void WidgetSetPushButtonConfig_OnSetFaceFrameActive( WidgetSetPushButtonConfig _this, 
  XInt32 value )
{
  if ( _this->FaceFrameActive == value )
    return;

  _this->FaceFrameActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetFaceFrameFocused()' */
void WidgetSetPushButtonConfig_OnSetFaceFrameFocused( WidgetSetPushButtonConfig _this, 
  XInt32 value )
{
  if ( _this->FaceFrameFocused == value )
    return;

  _this->FaceFrameFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetFaceFrameDisabled()' */
void WidgetSetPushButtonConfig_OnSetFaceFrameDisabled( WidgetSetPushButtonConfig _this, 
  XInt32 value )
{
  if ( _this->FaceFrameDisabled == value )
    return;

  _this->FaceFrameDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetFaceFrameDefault()' */
void WidgetSetPushButtonConfig_OnSetFaceFrameDefault( WidgetSetPushButtonConfig _this, 
  XInt32 value )
{
  if ( _this->FaceFrameDefault == value )
    return;

  _this->FaceFrameDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetFaceBitmapActive()' */
void WidgetSetPushButtonConfig_OnSetFaceBitmapActive( WidgetSetPushButtonConfig _this, 
  ResourcesBitmap value )
{
  if ( _this->FaceBitmapActive == value )
    return;

  _this->FaceBitmapActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetFaceBitmapFocused()' */
void WidgetSetPushButtonConfig_OnSetFaceBitmapFocused( WidgetSetPushButtonConfig _this, 
  ResourcesBitmap value )
{
  if ( _this->FaceBitmapFocused == value )
    return;

  _this->FaceBitmapFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetFaceBitmapDisabled()' */
void WidgetSetPushButtonConfig_OnSetFaceBitmapDisabled( WidgetSetPushButtonConfig _this, 
  ResourcesBitmap value )
{
  if ( _this->FaceBitmapDisabled == value )
    return;

  _this->FaceBitmapDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetFaceBitmapDefault()' */
void WidgetSetPushButtonConfig_OnSetFaceBitmapDefault( WidgetSetPushButtonConfig _this, 
  ResourcesBitmap value )
{
  if ( _this->FaceBitmapDefault == value )
    return;

  _this->FaceBitmapDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetWidgetMinSize()' */
void WidgetSetPushButtonConfig_OnSetWidgetMinSize( WidgetSetPushButtonConfig _this, 
  XPoint value )
{
  if ( value.X < 0 )
    value.X = 0;

  if ( value.Y < 0 )
    value.Y = 0;

  if ( !EwCompPoint( _this->WidgetMinSize, value ))
    return;

  _this->WidgetMinSize = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* Variants derived from the class : 'WidgetSet::PushButtonConfig' */
EW_DEFINE_CLASS_VARIANTS( WidgetSetPushButtonConfig )
EW_END_OF_CLASS_VARIANTS( WidgetSetPushButtonConfig )

/* Virtual Method Table (VMT) for the class : 'WidgetSet::PushButtonConfig' */
EW_DEFINE_CLASS( WidgetSetPushButtonConfig, WidgetSetWidgetConfig, LabelFont, LabelFont, 
                 StateTransitionDuration, StateTransitionDuration, StateTransitionDuration, 
                 StateTransitionDuration, "WidgetSet::PushButtonConfig" )
EW_END_OF_CLASS( WidgetSetPushButtonConfig )

/* Initializer for the class 'WidgetSet::WidgetConfig' */
void WidgetSetWidgetConfig__Init( WidgetSetWidgetConfig _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  XObject__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( WidgetSetWidgetConfig );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( WidgetSetWidgetConfig );
}

/* Re-Initializer for the class 'WidgetSet::WidgetConfig' */
void WidgetSetWidgetConfig__ReInit( WidgetSetWidgetConfig _this )
{
  /* At first re-initialize the super class ... */
  XObject__ReInit( &_this->_.Super );
}

/* Finalizer method for the class 'WidgetSet::WidgetConfig' */
void WidgetSetWidgetConfig__Done( WidgetSetWidgetConfig _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( XObject );

  /* Don't forget to deinitialize the super class ... */
  XObject__Done( &_this->_.Super );
}

/* 'C' function for method : 'WidgetSet::WidgetConfig.onInvalidate()' */
void WidgetSetWidgetConfig_onInvalidate( WidgetSetWidgetConfig _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  EwNotifyObjObservers((XObject)_this, 0 );
}

/* Variants derived from the class : 'WidgetSet::WidgetConfig' */
EW_DEFINE_CLASS_VARIANTS( WidgetSetWidgetConfig )
EW_END_OF_CLASS_VARIANTS( WidgetSetWidgetConfig )

/* Virtual Method Table (VMT) for the class : 'WidgetSet::WidgetConfig' */
EW_DEFINE_CLASS( WidgetSetWidgetConfig, XObject, _.VMT, _.VMT, _.VMT, _.VMT, _.VMT, 
                 _.VMT, "WidgetSet::WidgetConfig" )
EW_END_OF_CLASS( WidgetSetWidgetConfig )

/* Initializer for the class 'WidgetSet::HorizontalSlider' */
void WidgetSetHorizontalSlider__Init( WidgetSetHorizontalSlider _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( WidgetSetHorizontalSlider );

  /* ... then construct all embedded objects */
  CoreTimer__Init( &_this->RepetitionTimer, &_this->_.XObject, 0 );
  CoreKeyPressHandler__Init( &_this->KeyHandlerLeft, &_this->_.XObject, 0 );
  CoreKeyPressHandler__Init( &_this->KeyHandlerRight, &_this->_.XObject, 0 );
  CoreSimpleTouchHandler__Init( &_this->TouchHandler, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( WidgetSetHorizontalSlider );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0007 );
  CoreTimer_OnSetPeriod( &_this->RepetitionTimer, 0 );
  CoreTimer_OnSetBegin( &_this->RepetitionTimer, 50 );
  _this->KeyHandlerLeft.Filter = CoreKeyCodeLeft;
  _this->KeyHandlerRight.Filter = CoreKeyCodeRight;
  CoreView_OnSetLayout((CoreView)&_this->TouchHandler, CoreLayoutAlignToBottom | 
  CoreLayoutAlignToLeft | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz 
  | CoreLayoutResizeVert );
  CoreQuadView_OnSetPoint4((CoreQuadView)&_this->TouchHandler, _Const0008 );
  CoreQuadView_OnSetPoint3((CoreQuadView)&_this->TouchHandler, _Const0009 );
  CoreQuadView_OnSetPoint2((CoreQuadView)&_this->TouchHandler, _Const000A );
  CoreQuadView_OnSetPoint1((CoreQuadView)&_this->TouchHandler, _Const000B );
  CoreSimpleTouchHandler_OnSetRetargetOffset( &_this->TouchHandler, 16 );
  CoreSimpleTouchHandler_OnSetMaxStrikeCount( &_this->TouchHandler, 100 );
  _this->CurrentValue = 50;
  CoreGroup__Add( _this, ((CoreView)&_this->TouchHandler ), 0 );
  _this->RepetitionTimer.OnTrigger = EwNewSlot( _this, WidgetSetHorizontalSlider_onRepetitionTimer );
  _this->KeyHandlerLeft.OnRelease = EwNewSlot( _this, WidgetSetHorizontalSlider_onReleaseKey );
  _this->KeyHandlerLeft.OnPress = EwNewSlot( _this, WidgetSetHorizontalSlider_onPressKey );
  _this->KeyHandlerRight.OnRelease = EwNewSlot( _this, WidgetSetHorizontalSlider_onReleaseKey );
  _this->KeyHandlerRight.OnPress = EwNewSlot( _this, WidgetSetHorizontalSlider_onPressKey );
  _this->TouchHandler.OnDrag = EwNewSlot( _this, WidgetSetHorizontalSlider_onDragTouch );
  _this->TouchHandler.OnRelease = EwNewSlot( _this, WidgetSetHorizontalSlider_onReleaseTouch );
  _this->TouchHandler.OnPress = EwNewSlot( _this, WidgetSetHorizontalSlider_onPressTouch );
}

/* Re-Initializer for the class 'WidgetSet::HorizontalSlider' */
void WidgetSetHorizontalSlider__ReInit( WidgetSetHorizontalSlider _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  CoreTimer__ReInit( &_this->RepetitionTimer );
  CoreKeyPressHandler__ReInit( &_this->KeyHandlerLeft );
  CoreKeyPressHandler__ReInit( &_this->KeyHandlerRight );
  CoreSimpleTouchHandler__ReInit( &_this->TouchHandler );
}

/* Finalizer method for the class 'WidgetSet::HorizontalSlider' */
void WidgetSetHorizontalSlider__Done( WidgetSetHorizontalSlider _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  CoreTimer__Done( &_this->RepetitionTimer );
  CoreKeyPressHandler__Done( &_this->KeyHandlerLeft );
  CoreKeyPressHandler__Done( &_this->KeyHandlerRight );
  CoreSimpleTouchHandler__Done( &_this->TouchHandler );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_.Super );
}

/* 'C' function for method : 'WidgetSet::HorizontalSlider.OnSetBounds()' */
void WidgetSetHorizontalSlider_OnSetBounds( WidgetSetHorizontalSlider _this, XRect 
  value )
{
  if ( _this->Appearance != 0 )
  {
    XPoint cs = EwGetRectSize( value );
    XPoint ns = cs;
    XPoint delta;

    if ( ns.X < _this->Appearance->WidgetMinSize.X )
      ns.X = _this->Appearance->WidgetMinSize.X;

    if ( ns.Y < _this->Appearance->WidgetMinSize.Y )
      ns.Y = _this->Appearance->WidgetMinSize.Y;

    delta = EwMovePointNeg( ns, cs );

    if ( delta.X != 0 )
    {
      XBool alignToLeft = (( _this->Super3.Layout & CoreLayoutAlignToLeft ) == CoreLayoutAlignToLeft );
      XBool alignToRight = (( _this->Super3.Layout & CoreLayoutAlignToRight ) == 
        CoreLayoutAlignToRight );

      if ( alignToLeft && !alignToRight )
        value.Point2.X = ( value.Point2.X + delta.X );
      else
        if ( !alignToLeft && alignToRight )
          value.Point1.X = ( value.Point1.X - delta.X );
        else
        {
          value.Point1.X = ( value.Point1.X - ( delta.X / 2 ));
          value.Point2.X = ( value.Point1.X + ns.X );
        }
    }

    if ( delta.Y != 0 )
    {
      XBool alignToTop = (( _this->Super3.Layout & CoreLayoutAlignToTop ) == CoreLayoutAlignToTop );
      XBool alignToBottom = (( _this->Super3.Layout & CoreLayoutAlignToBottom ) 
        == CoreLayoutAlignToBottom );

      if ( alignToTop && !alignToBottom )
        value.Point2.Y = ( value.Point2.Y + delta.Y );
      else
        if ( !alignToTop && alignToBottom )
          value.Point1.Y = ( value.Point1.Y - delta.Y );
        else
        {
          value.Point1.Y = ( value.Point1.Y - ( delta.Y / 2 ));
          value.Point2.Y = ( value.Point1.Y + ns.Y );
        }
    }
  }

  CoreGroup_OnSetBounds((CoreGroup)_this, value );
}

/* The method UpdateViewState() is invoked automatically after the state of the 
   component has been changed. This method can be overridden and filled with logic 
   to ensure the visual aspect of the component does reflect its current state. 
   For example, the 'enabled' state of the component can affect its colors (disabled 
   components may appear pale). In this case the logic of the method should modify 
   the respective color properties accordingly to the current 'enabled' state. 
   The current state of the component is passed as a set in the parameter aState. 
   It reflects the very basic component state like its visibility or the ability 
   to react to user inputs. Beside this common state, the method can also involve 
   any other variables used in the component as long as they reflect its current 
   state. For example, the toggle switch component can take in account its toggle 
   state 'on' or 'off' and change accordingly the location of the slider, etc.
   Usually, this method will be invoked automatically by the framework. Optionally 
   you can request its invocation by using the method @InvalidateViewState(). */
void WidgetSetHorizontalSlider_UpdateViewState( WidgetSetHorizontalSlider _this, 
  XSet aState )
{
  XBool needsFrame2;
  XBool needsFrame3;
  XBool needsImage;
  XRect area;
  XChar isState;
  XInt32 marginLeft;
  XInt32 marginRight;
  XInt32 minPos;
  XInt32 maxPos;
  XInt32 newThumbPos;
  XRect r;

  CoreGroup_UpdateViewState((CoreGroup)_this, aState );
  needsFrame2 = (XBool)(( _this->Appearance != 0 ) && (((( _this->Appearance->TrackLeftBitmapDefault 
  != 0 ) || ( _this->Appearance->TrackLeftBitmapDisabled != 0 )) || ( _this->Appearance->TrackLeftBitmapFocused 
  != 0 )) || ( _this->Appearance->TrackLeftBitmapActive != 0 )));
  needsFrame3 = (XBool)(( _this->Appearance != 0 ) && (((( _this->Appearance->TrackRightBitmapDefault 
  != 0 ) || ( _this->Appearance->TrackRightBitmapDisabled != 0 )) || ( _this->Appearance->TrackRightBitmapFocused 
  != 0 )) || ( _this->Appearance->TrackRightBitmapActive != 0 )));
  needsImage = (XBool)(( _this->Appearance != 0 ) && (((( _this->Appearance->ThumbBitmapDefault 
  != 0 ) || ( _this->Appearance->ThumbBitmapDisabled != 0 )) || ( _this->Appearance->ThumbBitmapFocused 
  != 0 )) || ( _this->Appearance->ThumbBitmapActive != 0 )));
  area = EwGetRectORect( _this->Super2.Bounds );

  if ( needsFrame2 && !( _this->frameView2 != 0 ))
  {
    _this->frameView2 = EwNewObject( ViewsFrame, 0 );
    CoreGroup__Add( _this, ((CoreView)_this->frameView2 ), 0 );
  }
  else
    if ( !needsFrame2 && ( _this->frameView2 != 0 ))
    {
      CoreGroup__Remove( _this, ((CoreView)_this->frameView2 ));
      _this->frameView2 = 0;
    }

  if ( needsFrame3 && !( _this->frameView3 != 0 ))
  {
    _this->frameView3 = EwNewObject( ViewsFrame, 0 );
    CoreGroup__Add( _this, ((CoreView)_this->frameView3 ), 0 );
  }
  else
    if ( !needsFrame3 && ( _this->frameView3 != 0 ))
    {
      CoreGroup__Remove( _this, ((CoreView)_this->frameView3 ));
      _this->frameView3 = 0;
    }

  if ( needsImage && !( _this->imageView != 0 ))
  {
    _this->imageView = EwNewObject( ViewsImage, 0 );
    CoreGroup__Add( _this, ((CoreView)_this->imageView ), 0 );
  }
  else
    if ( !needsImage && ( _this->imageView != 0 ))
    {
      CoreGroup__Remove( _this, ((CoreView)_this->imageView ));
      _this->imageView = 0;
    }

  if ( !(( aState & CoreViewStateEnabled ) == CoreViewStateEnabled ))
    isState = 'D';
  else
    if (( _this->touchActive || _this->KeyHandlerRight.Down ) || _this->KeyHandlerLeft.Down )
      isState = 'A';
    else
      if ((( aState & CoreViewStateFocused ) == CoreViewStateFocused ))
        isState = 'F';
      else
        isState = 'E';

  _this->prevState = isState;

  if ( _this->frameView2 != 0 )
  {
    ResourcesBitmap bitmap;
    XInt32 frameNo;

    switch ( isState )
    {
      case 'D' :
      {
        bitmap = _this->Appearance->TrackLeftBitmapDisabled;
        frameNo = _this->Appearance->TrackLeftFrameDisabled;
      }
      break;

      case 'A' :
      {
        bitmap = _this->Appearance->TrackLeftBitmapActive;
        frameNo = _this->Appearance->TrackLeftFrameActive;
      }
      break;

      case 'F' :
      {
        bitmap = _this->Appearance->TrackLeftBitmapFocused;
        frameNo = _this->Appearance->TrackLeftFrameFocused;
      }
      break;

      default : 
      {
        bitmap = _this->Appearance->TrackLeftBitmapDefault;
        frameNo = _this->Appearance->TrackLeftFrameDefault;
      }
    }

    ViewsFrame_OnSetAnimated( _this->frameView2, (XBool)( frameNo < 0 ));
    ViewsFrame_OnSetColor( _this->frameView2, _Const0000 );

    if ( frameNo < 0 )
      frameNo = 0;

    ViewsFrame_OnSetFrameNumber( _this->frameView2, frameNo );
    ViewsFrame_OnSetBitmap( _this->frameView2, bitmap );
    ViewsFrame_OnSetEdges( _this->frameView2, GraphicsEdgesBottom | GraphicsEdgesInterior 
    | GraphicsEdgesLeft | GraphicsEdgesTop );
    CoreView_OnSetStackingPriority((CoreView)_this->frameView2, 54 );
  }

  if ( _this->frameView3 != 0 )
  {
    ResourcesBitmap bitmap;
    XInt32 frameNo;

    switch ( isState )
    {
      case 'D' :
      {
        bitmap = _this->Appearance->TrackRightBitmapDisabled;
        frameNo = _this->Appearance->TrackRightFrameDisabled;
      }
      break;

      case 'A' :
      {
        bitmap = _this->Appearance->TrackRightBitmapActive;
        frameNo = _this->Appearance->TrackRightFrameActive;
      }
      break;

      case 'F' :
      {
        bitmap = _this->Appearance->TrackRightBitmapFocused;
        frameNo = _this->Appearance->TrackRightFrameFocused;
      }
      break;

      default : 
      {
        bitmap = _this->Appearance->TrackRightBitmapDefault;
        frameNo = _this->Appearance->TrackRightFrameDefault;
      }
    }

    ViewsFrame_OnSetAnimated( _this->frameView3, (XBool)( frameNo < 0 ));
    ViewsFrame_OnSetColor( _this->frameView3, _Const0000 );

    if ( frameNo < 0 )
      frameNo = 0;

    ViewsFrame_OnSetFrameNumber( _this->frameView3, frameNo );
    ViewsFrame_OnSetBitmap( _this->frameView3, bitmap );
    ViewsFrame_OnSetEdges( _this->frameView3, GraphicsEdgesBottom | GraphicsEdgesInterior 
    | GraphicsEdgesRight | GraphicsEdgesTop );
    CoreView_OnSetStackingPriority((CoreView)_this->frameView3, 35 );
  }

  if ( _this->imageView != 0 )
  {
    ResourcesBitmap bitmap;
    XInt32 frameNo;

    switch ( isState )
    {
      case 'D' :
      {
        bitmap = _this->Appearance->ThumbBitmapDisabled;
        frameNo = _this->Appearance->ThumbFrameDisabled;
      }
      break;

      case 'A' :
      {
        bitmap = _this->Appearance->ThumbBitmapActive;
        frameNo = _this->Appearance->ThumbFrameActive;
      }
      break;

      case 'F' :
      {
        bitmap = _this->Appearance->ThumbBitmapFocused;
        frameNo = _this->Appearance->ThumbFrameFocused;
      }
      break;

      default : 
      {
        bitmap = _this->Appearance->ThumbBitmapDefault;
        frameNo = _this->Appearance->ThumbFrameDefault;
      }
    }

    ViewsImage_OnSetAnimated( _this->imageView, (XBool)( frameNo < 0 ));
    ViewsImage_OnSetColor( _this->imageView, _Const0000 );

    if ( frameNo < 0 )
      frameNo = 0;

    ViewsImage_OnSetFrameNumber( _this->imageView, frameNo );
    ViewsImage_OnSetBitmap( _this->imageView, bitmap );
    CoreView_OnSetStackingPriority((CoreView)_this->imageView, 74 );
  }

  marginLeft = (( _this->Appearance != 0 )? _this->Appearance->ThumbMarginLeft : 
  0 );
  marginRight = (( _this->Appearance != 0 )? _this->Appearance->ThumbMarginRight 
  : 0 );

  if (( _this->imageView != 0 ) && ( _this->imageView->Bitmap != 0 ))
  {
    XInt32 width = _this->imageView->Bitmap->FrameSize.X;
    marginLeft += ( width / 2 );
    marginRight += ( width - ( width / 2 ));
  }

  minPos = marginLeft;
  maxPos = EwGetRectW( area ) - marginRight;
  newThumbPos = (XInt32)(((XFloat)WidgetSetHorizontalSlider_OnGetCurrentValue( _this ) 
  * (XFloat)( maxPos - minPos )) / 100.0f ) + minPos;

  if ( newThumbPos < marginLeft )
    newThumbPos = marginLeft;

  if ( newThumbPos > ( EwGetRectW( area ) - marginRight ))
    newThumbPos = EwGetRectW( area ) - marginRight;

  if (( _this->frameView2 != 0 ) && ( _this->frameView2->Bitmap != 0 ))
  {
    XPoint s = _this->frameView2->Bitmap->FrameSize;
    XInt32 x2 = EwGetRectW( area );
    XInt32 x = newThumbPos;

    if ( x > x2 )
      x = x2;

    CoreRectView__OnSetBounds( _this->frameView2, EwNewRect( 0, ( EwGetRectH( area ) 
    / 2 ) - ( s.Y / 2 ), x, (( EwGetRectH( area ) / 2 ) - ( s.Y / 2 )) + s.Y ));
    ViewsFrame_OnSetNoEdgesLimit( _this->frameView2, EwSetPointX( _this->frameView2->NoEdgesLimit, 
    x2 - ( s.X / 3 )));
    ViewsFrame_OnSetVisible( _this->frameView2, 1 );
  }

  if (( _this->frameView3 != 0 ) && ( _this->frameView3->Bitmap != 0 ))
  {
    XPoint s = _this->frameView3->Bitmap->FrameSize;
    XInt32 x2 = EwGetRectW( area );
    XInt32 x = newThumbPos;

    if ( x < 0 )
      x = 0;

    CoreRectView__OnSetBounds( _this->frameView3, EwNewRect( x, ( EwGetRectH( area ) 
    / 2 ) - ( s.Y / 2 ), x2, (( EwGetRectH( area ) / 2 ) - ( s.Y / 2 )) + s.Y ));
    ViewsFrame_OnSetNoEdgesLimit( _this->frameView3, EwSetPointX( _this->frameView3->NoEdgesLimit, 
    x2 - ( s.X / 3 )));
    ViewsFrame_OnSetVisible( _this->frameView3, 1 );
  }

  if (( _this->imageView != 0 ) && ( _this->imageView->Bitmap != 0 ))
  {
    XRect thumbArea = EwNewRect2Point( _Const000B, _this->imageView->Bitmap->FrameSize );
    CoreRectView__OnSetBounds( _this->imageView, EwMoveRectPos( EwMoveRectNeg( thumbArea, 
    EwGetRectCenter( thumbArea )), EwNewPoint( newThumbPos, EwGetRectH( area ) / 
    2 )));
  }

  r = _Const000C;

  if ( _this->imageView != 0 )
    r = EwUnionRect( r, _this->imageView->Super1.Bounds );

  CoreGroup__ExtendClipping( _this, EwGetInt32Max( 2, -r.Point1.X, 0 ), EwGetInt32Max( 
  2, r.Point2.X - area.Point2.X, 0 ), EwGetInt32Max( 2, -r.Point1.Y, 0 ), EwGetInt32Max( 
  2, r.Point2.Y - area.Point2.Y, 0 ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSlider.onConfigChanged()' */
void WidgetSetHorizontalSlider_onConfigChanged( WidgetSetHorizontalSlider _this, 
  XObject sender )
{
  XEnum oldKeyCodeRight;
  XEnum oldKeyCodeLeft;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  oldKeyCodeRight = _this->KeyHandlerRight.Filter;
  oldKeyCodeLeft = _this->KeyHandlerLeft.Filter;
  _this->KeyHandlerRight.Filter = CoreKeyCodeRight;
  _this->KeyHandlerLeft.Filter = CoreKeyCodeLeft;

  if (((( oldKeyCodeRight == CoreKeyCodeNoKey ) || ( oldKeyCodeLeft == CoreKeyCodeNoKey )) 
      && ( _this->KeyHandlerRight.Filter != CoreKeyCodeNoKey )) && ( _this->KeyHandlerLeft.Filter 
      != CoreKeyCodeNoKey ))
    CoreView__ChangeViewState( _this, CoreViewStateFocusable, 0 );

  if ((( oldKeyCodeRight != CoreKeyCodeNoKey ) && ( oldKeyCodeLeft != CoreKeyCodeNoKey )) 
      && (( _this->KeyHandlerRight.Filter == CoreKeyCodeNoKey ) || ( _this->KeyHandlerLeft.Filter 
      == CoreKeyCodeNoKey )))
    CoreView__ChangeViewState( _this, 0, CoreViewStateFocusable );

  if ( _this->Appearance != 0 )
  {
    CoreTimer_OnSetBegin( &_this->RepetitionTimer, _this->Appearance->KeyRepeatDelay );
    CoreTimer_OnSetPeriod( &_this->RepetitionTimer, _this->Appearance->KeyRepeatPeriod );
  }
  else
  {
    CoreTimer_OnSetBegin( &_this->RepetitionTimer, 0 );
    CoreTimer_OnSetPeriod( &_this->RepetitionTimer, 0 );
  }

  if ( _this->Appearance != 0 )
    CoreRectView__OnSetBounds( _this, _this->Super2.Bounds );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'WidgetSet::HorizontalSlider.onOutlet()' */
void WidgetSetHorizontalSlider_onOutlet( WidgetSetHorizontalSlider _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->Outlet.Object != 0 )
    WidgetSetHorizontalSlider_OnSetCurrentValue( _this, EwOnGetInt32( _this->Outlet ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSlider.onRepetitionTimer()' */
void WidgetSetHorizontalSlider_onRepetitionTimer( WidgetSetHorizontalSlider _this, 
  XObject sender )
{
  XInt32 oldValue;
  XInt32 newValue;
  XInt32 delta;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  oldValue = WidgetSetHorizontalSlider_OnGetCurrentValue( _this );
  newValue = oldValue;
  delta = 1;

  if ( _this->KeyHandlerLeft.Down )
    delta = -1;

  if ( oldValue < 0 )
  {
    newValue = -newValue;
    delta = -delta;
  }

  if ( delta > 0 )
    newValue = ( newValue + delta ) - (( newValue + delta ) % delta );

  if ( delta < 0 )
  {
    if (( newValue % -delta ) != 0 )
      newValue = ( newValue - delta ) - ( newValue % -delta );

    newValue = newValue + delta;
  }

  if ( oldValue < 0 )
    newValue = -newValue;

  WidgetSetHorizontalSlider_OnSetCurrentValue( _this, newValue );

  if ( oldValue == WidgetSetHorizontalSlider_OnGetCurrentValue( _this ))
    return;

  if ( _this->Outlet.Object != 0 )
  {
    EwOnSetInt32( _this->Outlet, WidgetSetHorizontalSlider_OnGetCurrentValue( _this ));
    EwNotifyRefObservers( _this->Outlet, 0 );
  }
}

/* 'C' function for method : 'WidgetSet::HorizontalSlider.onReleaseKey()' */
void WidgetSetHorizontalSlider_onReleaseKey( WidgetSetHorizontalSlider _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreSimpleTouchHandler_OnSetEnabled( &_this->TouchHandler, 1 );
  CoreGroup_InvalidateViewState((CoreGroup)_this );
  CoreTimer_OnSetEnabled( &_this->RepetitionTimer, 0 );
}

/* 'C' function for method : 'WidgetSet::HorizontalSlider.onPressKey()' */
void WidgetSetHorizontalSlider_onPressKey( WidgetSetHorizontalSlider _this, XObject 
  sender )
{
  XInt32 oldValue;
  XInt32 newValue;
  XInt32 delta;

  CoreSimpleTouchHandler_OnSetEnabled( &_this->TouchHandler, 0 );
  CoreGroup_InvalidateViewState((CoreGroup)_this );
  CoreTimer_OnSetEnabled( &_this->RepetitionTimer, 1 );
  oldValue = WidgetSetHorizontalSlider_OnGetCurrentValue( _this );
  newValue = oldValue;
  delta = 1;

  if ( sender == ((XObject)&_this->KeyHandlerLeft ))
    delta = -1;

  if ( oldValue < 0 )
  {
    newValue = -newValue;
    delta = -delta;
  }

  if ( delta > 0 )
    newValue = ( newValue + delta ) - (( newValue + delta ) % delta );

  if ( delta < 0 )
  {
    if (( newValue % -delta ) != 0 )
      newValue = ( newValue - delta ) - ( newValue % -delta );

    newValue = newValue + delta;
  }

  if ( oldValue < 0 )
    newValue = -newValue;

  WidgetSetHorizontalSlider_OnSetCurrentValue( _this, newValue );

  if ( oldValue == WidgetSetHorizontalSlider_OnGetCurrentValue( _this ))
    return;

  if ( _this->Outlet.Object != 0 )
  {
    EwOnSetInt32( _this->Outlet, WidgetSetHorizontalSlider_OnGetCurrentValue( _this ));
    EwNotifyRefObservers( _this->Outlet, 0 );
  }
}

/* 'C' function for method : 'WidgetSet::HorizontalSlider.onDragTouch()' */
void WidgetSetHorizontalSlider_onDragTouch( WidgetSetHorizontalSlider _this, XObject 
  sender )
{
  XInt32 marginLeft;
  XInt32 marginRight;
  XPoint delta;
  XInt32 minPos;
  XInt32 maxPos;
  XInt32 oldValue;
  XInt32 newValue;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( !_this->touchActive )
    return;

  marginLeft = 0;
  marginRight = 0;

  if ( _this->Appearance != 0 )
  {
    marginLeft = _this->Appearance->ThumbMarginLeft;
    marginRight = _this->Appearance->ThumbMarginRight;
  }

  delta = EwMovePointNeg( _this->TouchHandler.CurrentPos, _this->TouchHandler.HittingPos );
  minPos = marginLeft;
  maxPos = EwGetRectW( _this->Super2.Bounds ) - marginRight;
  oldValue = WidgetSetHorizontalSlider_OnGetCurrentValue( _this );
  newValue = oldValue;

  if (( _this->imageView != 0 ) && ( _this->imageView->Bitmap != 0 ))
    maxPos = maxPos - EwGetRectW( _this->imageView->Super1.Bounds );

  if ( maxPos > minPos )
    newValue = (XInt32)(((XFloat)delta.X * 100.0f ) / (XFloat)( maxPos - minPos )) 
    + _this->touchStartValue;

  WidgetSetHorizontalSlider_OnSetCurrentValue( _this, newValue );

  if ( oldValue == WidgetSetHorizontalSlider_OnGetCurrentValue( _this ))
    return;

  if ( _this->Outlet.Object != 0 )
  {
    EwOnSetInt32( _this->Outlet, WidgetSetHorizontalSlider_OnGetCurrentValue( _this ));
    EwNotifyRefObservers( _this->Outlet, 0 );
  }
}

/* 'C' function for method : 'WidgetSet::HorizontalSlider.onReleaseTouch()' */
void WidgetSetHorizontalSlider_onReleaseTouch( WidgetSetHorizontalSlider _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( !_this->touchActive )
    return;

  _this->touchActive = 0;
  _this->KeyHandlerRight.Enabled = 1;
  _this->KeyHandlerLeft.Enabled = 1;
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'WidgetSet::HorizontalSlider.onPressTouch()' */
void WidgetSetHorizontalSlider_onPressTouch( WidgetSetHorizontalSlider _this, XObject 
  sender )
{
  XRect touchArea;
  XBool hasThumb;
  XBool insideThumb;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  touchArea = EwMoveRectPos( _Const000D, _this->TouchHandler.CurrentPos );
  hasThumb = 0;
  insideThumb = 0;

  if (( _this->imageView != 0 ) && ( _this->imageView->Bitmap != 0 ))
  {
    hasThumb = 1;
    insideThumb = (XBool)!EwIsRectEmpty( EwIntersectRect( _this->imageView->Super1.Bounds, 
    touchArea ));
  }

  if ( hasThumb && !insideThumb )
  {
    CoreRoot root = CoreView__GetRoot( _this );
    CoreSimpleTouchHandler_OnSetEnabled( &_this->TouchHandler, 0 );
    CoreRoot_RetargetCursor( root, ((CoreView)root ), 0, ((CoreView)_this ));
    CoreSimpleTouchHandler_OnSetEnabled( &_this->TouchHandler, 1 );
    return;
  }

  _this->touchActive = 1;
  _this->KeyHandlerRight.Enabled = 0;
  _this->KeyHandlerLeft.Enabled = 0;
  CoreGroup_InvalidateViewState((CoreGroup)_this );
  _this->touchStartValue = WidgetSetHorizontalSlider_OnGetCurrentValue( _this );
}

/* 'C' function for method : 'WidgetSet::HorizontalSlider.OnSetOutlet()' */
void WidgetSetHorizontalSlider_OnSetOutlet( WidgetSetHorizontalSlider _this, XRef 
  value )
{
  if ( !EwCompRef( _this->Outlet, value ))
    return;

  if ( _this->Outlet.Object != 0 )
    EwDetachRefObserver( EwNewSlot( _this, WidgetSetHorizontalSlider_onOutlet ), 
      _this->Outlet, 0 );

  _this->Outlet = value;

  if ( value.Object != 0 )
    EwAttachRefObserver( EwNewSlot( _this, WidgetSetHorizontalSlider_onOutlet ), 
      value, 0 );

  if ( value.Object != 0 )
    EwSignal( EwNewSlot( _this, WidgetSetHorizontalSlider_onOutlet ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSlider.OnGetCurrentValue()' */
XInt32 WidgetSetHorizontalSlider_OnGetCurrentValue( WidgetSetHorizontalSlider _this )
{
  XInt32 value = _this->CurrentValue;

  if ( value < 0 )
    value = 0;

  if ( value > 100 )
    value = 100;

  return value;
}

/* 'C' function for method : 'WidgetSet::HorizontalSlider.OnSetCurrentValue()' */
void WidgetSetHorizontalSlider_OnSetCurrentValue( WidgetSetHorizontalSlider _this, 
  XInt32 value )
{
  if ( _this->CurrentValue == value )
    return;

  _this->CurrentValue = value;
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'WidgetSet::HorizontalSlider.OnSetAppearance()' */
void WidgetSetHorizontalSlider_OnSetAppearance( WidgetSetHorizontalSlider _this, 
  WidgetSetHorizontalSliderConfig value )
{
  if ( _this->Appearance == value )
    return;

  if ( _this->Appearance != 0 )
    EwDetachObjObserver( EwNewSlot( _this, WidgetSetHorizontalSlider_onConfigChanged ), 
      (XObject)_this->Appearance, 0 );

  _this->Appearance = value;

  if ( value != 0 )
    EwAttachObjObserver( EwNewSlot( _this, WidgetSetHorizontalSlider_onConfigChanged ), 
      (XObject)value, 0 );

  EwPostSignal( EwNewSlot( _this, WidgetSetHorizontalSlider_onConfigChanged ), ((XObject)_this ));
}

/* Variants derived from the class : 'WidgetSet::HorizontalSlider' */
EW_DEFINE_CLASS_VARIANTS( WidgetSetHorizontalSlider )
EW_END_OF_CLASS_VARIANTS( WidgetSetHorizontalSlider )

/* Virtual Method Table (VMT) for the class : 'WidgetSet::HorizontalSlider' */
EW_DEFINE_CLASS( WidgetSetHorizontalSlider, CoreGroup, RepetitionTimer, imageView, 
                 Outlet, Outlet, touchStartValue, touchStartValue, "WidgetSet::HorizontalSlider" )
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
  WidgetSetHorizontalSlider_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetOpacity,
  CoreGroup_ExtendClipping,
  CoreGroup_SwitchToDialog,
  CoreGroup_PresentDialog,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  WidgetSetHorizontalSlider_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_FadeGroup,
  CoreGroup_RestackTop,
  CoreGroup_Restack,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( WidgetSetHorizontalSlider )

/* Initializer for the class 'WidgetSet::PushButton' */
void WidgetSetPushButton__Init( WidgetSetPushButton _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( WidgetSetPushButton );

  /* ... then construct all embedded objects */
  CoreTimer__Init( &_this->FlashTimer, &_this->_.XObject, 0 );
  CoreKeyPressHandler__Init( &_this->KeyHandler, &_this->_.XObject, 0 );
  CoreSimpleTouchHandler__Init( &_this->TouchHandler, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( WidgetSetPushButton );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const000E );
  CoreTimer_OnSetPeriod( &_this->FlashTimer, 0 );
  CoreTimer_OnSetBegin( &_this->FlashTimer, 50 );
  _this->KeyHandler.Filter = CoreKeyCodeEnter;
  CoreView_OnSetLayout((CoreView)&_this->TouchHandler, CoreLayoutAlignToBottom | 
  CoreLayoutAlignToLeft | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz 
  | CoreLayoutResizeVert );
  CoreQuadView_OnSetPoint4((CoreQuadView)&_this->TouchHandler, _Const0008 );
  CoreQuadView_OnSetPoint3((CoreQuadView)&_this->TouchHandler, _Const000F );
  CoreQuadView_OnSetPoint2((CoreQuadView)&_this->TouchHandler, _Const0010 );
  CoreQuadView_OnSetPoint1((CoreQuadView)&_this->TouchHandler, _Const000B );
  CoreSimpleTouchHandler_OnSetRetargetOffset( &_this->TouchHandler, 16 );
  CoreSimpleTouchHandler_OnSetMaxStrikeCount( &_this->TouchHandler, 100 );
  CoreGroup__Add( _this, ((CoreView)&_this->TouchHandler ), 0 );
  _this->FlashTimer.OnTrigger = EwNewSlot( _this, WidgetSetPushButton_onFlashTimer );
  _this->KeyHandler.OnRelease = EwNewSlot( _this, WidgetSetPushButton_onReleaseKey );
  _this->KeyHandler.OnPress = EwNewSlot( _this, WidgetSetPushButton_onPressKey );
  _this->TouchHandler.OnLeave = EwNewSlot( _this, WidgetSetPushButton_onLeaveTouch );
  _this->TouchHandler.OnEnter = EwNewSlot( _this, WidgetSetPushButton_onEnterTouch );
  _this->TouchHandler.OnRelease = EwNewSlot( _this, WidgetSetPushButton_onReleaseTouch );
  _this->TouchHandler.OnPress = EwNewSlot( _this, WidgetSetPushButton_onPressTouch );
}

/* Re-Initializer for the class 'WidgetSet::PushButton' */
void WidgetSetPushButton__ReInit( WidgetSetPushButton _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  CoreTimer__ReInit( &_this->FlashTimer );
  CoreKeyPressHandler__ReInit( &_this->KeyHandler );
  CoreSimpleTouchHandler__ReInit( &_this->TouchHandler );
}

/* Finalizer method for the class 'WidgetSet::PushButton' */
void WidgetSetPushButton__Done( WidgetSetPushButton _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  CoreTimer__Done( &_this->FlashTimer );
  CoreKeyPressHandler__Done( &_this->KeyHandler );
  CoreSimpleTouchHandler__Done( &_this->TouchHandler );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_.Super );
}

/* 'C' function for method : 'WidgetSet::PushButton.OnSetBounds()' */
void WidgetSetPushButton_OnSetBounds( WidgetSetPushButton _this, XRect value )
{
  if ( _this->Appearance != 0 )
  {
    XPoint cs = EwGetRectSize( value );
    XPoint ns = cs;
    XPoint delta;

    if ( ns.X < _this->Appearance->WidgetMinSize.X )
      ns.X = _this->Appearance->WidgetMinSize.X;

    if ( ns.Y < _this->Appearance->WidgetMinSize.Y )
      ns.Y = _this->Appearance->WidgetMinSize.Y;

    delta = EwMovePointNeg( ns, cs );

    if ( delta.X != 0 )
    {
      XBool alignToLeft = (( _this->Super3.Layout & CoreLayoutAlignToLeft ) == CoreLayoutAlignToLeft );
      XBool alignToRight = (( _this->Super3.Layout & CoreLayoutAlignToRight ) == 
        CoreLayoutAlignToRight );

      if ( alignToLeft && !alignToRight )
        value.Point2.X = ( value.Point2.X + delta.X );
      else
        if ( !alignToLeft && alignToRight )
          value.Point1.X = ( value.Point1.X - delta.X );
        else
        {
          value.Point1.X = ( value.Point1.X - ( delta.X / 2 ));
          value.Point2.X = ( value.Point1.X + ns.X );
        }
    }

    if ( delta.Y != 0 )
    {
      XBool alignToTop = (( _this->Super3.Layout & CoreLayoutAlignToTop ) == CoreLayoutAlignToTop );
      XBool alignToBottom = (( _this->Super3.Layout & CoreLayoutAlignToBottom ) 
        == CoreLayoutAlignToBottom );

      if ( alignToTop && !alignToBottom )
        value.Point2.Y = ( value.Point2.Y + delta.Y );
      else
        if ( !alignToTop && alignToBottom )
          value.Point1.Y = ( value.Point1.Y - delta.Y );
        else
        {
          value.Point1.Y = ( value.Point1.Y - ( delta.Y / 2 ));
          value.Point2.Y = ( value.Point1.Y + ns.Y );
        }
    }
  }

  CoreGroup_OnSetBounds((CoreGroup)_this, value );
}

/* The method UpdateViewState() is invoked automatically after the state of the 
   component has been changed. This method can be overridden and filled with logic 
   to ensure the visual aspect of the component does reflect its current state. 
   For example, the 'enabled' state of the component can affect its colors (disabled 
   components may appear pale). In this case the logic of the method should modify 
   the respective color properties accordingly to the current 'enabled' state. 
   The current state of the component is passed as a set in the parameter aState. 
   It reflects the very basic component state like its visibility or the ability 
   to react to user inputs. Beside this common state, the method can also involve 
   any other variables used in the component as long as they reflect its current 
   state. For example, the toggle switch component can take in account its toggle 
   state 'on' or 'off' and change accordingly the location of the slider, etc.
   Usually, this method will be invoked automatically by the framework. Optionally 
   you can request its invocation by using the method @InvalidateViewState(). */
void WidgetSetPushButton_UpdateViewState( WidgetSetPushButton _this, XSet aState )
{
  XBool needsFrame;
  XBool needsText;
  XBool needsRect1;
  XBool needsBorder1;
  XBool needsShadow;
  XRect area;
  XRect thumbArea;
  XInt32 thumbCornerRadius;
  XChar isState;
  XBool needsAnimation;
  XBool startAnimation;

  CoreGroup_UpdateViewState((CoreGroup)_this, aState );
  needsFrame = (XBool)(( _this->Appearance != 0 ) && (((( _this->Appearance->FaceBitmapDefault 
  != 0 ) || ( _this->Appearance->FaceBitmapDisabled != 0 )) || ( _this->Appearance->FaceBitmapFocused 
  != 0 )) || ( _this->Appearance->FaceBitmapActive != 0 )));
  needsText = (XBool)((( _this->Appearance != 0 ) && !EwIsStringEmpty( _this->Label )) 
  && ( _this->Appearance->LabelFont != 0 ));
  needsRect1 = (XBool)(( _this->Appearance != 0 ) && ((( !EwIsColorNull( _this->Appearance->ThumbColorDefault ) 
  || !EwIsColorNull( _this->Appearance->ThumbColorDisabled )) || !EwIsColorNull( 
  _this->Appearance->ThumbColorFocused )) || !EwIsColorNull( _this->Appearance->ThumbColorActive )));
  needsBorder1 = (XBool)((( _this->Appearance != 0 ) && ((( !EwIsColorNull( _this->Appearance->ThumbBorderColorDefault ) 
  || !EwIsColorNull( _this->Appearance->ThumbBorderColorDisabled )) || !EwIsColorNull( 
  _this->Appearance->ThumbBorderColorFocused )) || !EwIsColorNull( _this->Appearance->ThumbBorderColorActive ))) 
  && ((( !!_this->Appearance->ThumbBorderWidthDefault || !!_this->Appearance->ThumbBorderWidthDisabled ) 
  || !!_this->Appearance->ThumbBorderWidthFocused ) || !!_this->Appearance->ThumbBorderWidthActive ));
  needsShadow = (XBool)(( _this->Appearance != 0 ) && ( !EwIsColorNull( _this->Appearance->ThumbShadowColorDefault ) 
  || !EwIsColorNull( _this->Appearance->ThumbShadowColorFocused )));
  area = EwGetRectORect( _this->Super2.Bounds );
  thumbArea = _Const000C;
  thumbCornerRadius = 0;

  if ( needsFrame && !( _this->frameView != 0 ))
  {
    _this->frameView = EwNewObject( ViewsFrame, 0 );
    CoreGroup__Add( _this, ((CoreView)_this->frameView ), 0 );
  }
  else
    if ( !needsFrame && ( _this->frameView != 0 ))
    {
      CoreGroup__Remove( _this, ((CoreView)_this->frameView ));
      _this->frameView = 0;
    }

  if ( needsText && !( _this->textView != 0 ))
  {
    _this->textView = EwNewObject( ViewsText, 0 );
    CoreGroup__Add( _this, ((CoreView)_this->textView ), 0 );
    ViewsText_OnSetEnableBidiText( _this->textView, 1 );
  }
  else
    if ( !needsText && ( _this->textView != 0 ))
    {
      CoreGroup__Remove( _this, ((CoreView)_this->textView ));
      _this->textView = 0;
    }

  if ( needsRect1 && !( _this->rectView1 != 0 ))
  {
    _this->rectView1 = EwNewObject( ViewsRectangle, 0 );
    CoreGroup__Add( _this, ((CoreView)_this->rectView1 ), 0 );
  }
  else
    if ( !needsRect1 && ( _this->rectView1 != 0 ))
    {
      CoreGroup__Remove( _this, ((CoreView)_this->rectView1 ));
      _this->rectView1 = 0;
    }

  if ( needsBorder1 && !( _this->borderView1 != 0 ))
  {
    _this->borderView1 = EwNewObject( ViewsBorder, 0 );
    CoreGroup__Add( _this, ((CoreView)_this->borderView1 ), 0 );
  }
  else
    if ( !needsBorder1 && ( _this->borderView1 != 0 ))
    {
      CoreGroup__Remove( _this, ((CoreView)_this->borderView1 ));
      _this->borderView1 = 0;
    }

  if ( needsShadow && !( _this->shadowView != 0 ))
  {
    _this->shadowView = EwNewObject( ViewsShadow, 0 );
    CoreGroup__Add( _this, ((CoreView)_this->shadowView ), 0 );
  }
  else
    if ( !needsShadow && ( _this->shadowView != 0 ))
    {
      CoreGroup__Remove( _this, ((CoreView)_this->shadowView ));
      _this->shadowView = 0;
    }

  if ( !(( aState & CoreViewStateEnabled ) == CoreViewStateEnabled ))
    isState = 'D';
  else
    if ((( _this->TouchHandler.Down && _this->TouchHandler.Inside ) || _this->KeyHandler.Down ) 
        || _this->FlashTimer.Enabled )
      isState = 'A';
    else
      if ((( aState & CoreViewStateFocused ) == CoreViewStateFocused ))
        isState = 'F';
      else
        isState = 'E';

  needsAnimation = (XBool)(( _this->Appearance != 0 ) && !!_this->Appearance->StateTransitionDuration );
  startAnimation = (XBool)(( needsAnimation && ( _this->prevState != isState )) 
  && !!_this->prevState );

  if ((( startAnimation && ( _this->animation != 0 )) && !_this->animation->Super1.Reversed ) 
      && ( isState == _this->animStartState ))
  {
    EffectsEffect_OnSetReversed((EffectsEffect)_this->animation, 1 );
    startAnimation = 0;
  }

  if ((( startAnimation && ( _this->animation != 0 )) && _this->animation->Super1.Reversed ) 
      && ( isState == _this->animEndState ))
  {
    EffectsEffect_OnSetReversed((EffectsEffect)_this->animation, 0 );
    startAnimation = 0;
  }

  if (( _this->animation != 0 ) && (( !_this->animation->Super1.Enabled || startAnimation ) 
      || !needsAnimation ))
  {
    EffectsEffect_OnSetEnabled((EffectsEffect)_this->animation, 0 );
    _this->animation->Super1.OnAnimate = EwNullSlot;
    _this->animation->Super1.OnFinished = EwNullSlot;
    _this->animation = 0;
  }

  if ( startAnimation )
  {
    _this->animation = EwNewObject( EffectsFloatEffect, 0 );
    _this->animation->Super1.OnAnimate = EwNewSlot( _this, WidgetSetPushButton_onAnimate );
    _this->animation->Super1.OnFinished = EwNewSlot( _this, WidgetSetPushButton_onAnimate );
    EffectsEffect_OnSetCycleDuration((EffectsEffect)_this->animation, _this->Appearance->StateTransitionDuration );
    EffectsEffect_OnSetNoOfCycles((EffectsEffect)_this->animation, 1 );
    EffectsEffect_OnSetEnabled((EffectsEffect)_this->animation, 1 );
    _this->animStartState = _this->prevState;
    _this->animEndState = isState;
  }

  _this->prevState = isState;

  if ((( _this->shadowView != 0 ) || ( _this->borderView1 != 0 )) || ( _this->rectView1 
      != 0 ))
  {
    XRect r = area;
    XPoint thumbSize;

    switch ((( _this->animation != 0 )? _this->animEndState : isState ))
    {
      case 'D' :
      {
        thumbSize = _Const000B;
        thumbCornerRadius = _this->Appearance->ThumbCornerRadiusDisabled;
      }
      break;

      case 'A' :
      {
        thumbSize = _Const000B;
        thumbCornerRadius = _this->Appearance->ThumbCornerRadiusActive;
      }
      break;

      case 'F' :
      {
        thumbSize = _Const000B;
        thumbCornerRadius = _this->Appearance->ThumbCornerRadiusFocused;
      }
      break;

      default : 
      {
        thumbSize = _Const000B;
        thumbCornerRadius = _this->Appearance->ThumbCornerRadiusDefault;
      }
    }

    thumbSize.X = ( thumbSize.X + EwGetRectW( r ));
    thumbSize.Y = ( thumbSize.Y + EwGetRectH( r ));
    thumbSize = EwGetPointMax( 2, thumbSize, _Const000B );

    if ( _this->animation != 0 )
    {
      XPoint thumbSizeS;
      XInt32 thumbCornerRadiusS;

      switch ( _this->animStartState )
      {
        case 'D' :
        {
          thumbSizeS = _Const000B;
          thumbCornerRadiusS = _this->Appearance->ThumbCornerRadiusDisabled;
        }
        break;

        case 'A' :
        {
          thumbSizeS = _Const000B;
          thumbCornerRadiusS = _this->Appearance->ThumbCornerRadiusActive;
        }
        break;

        case 'F' :
        {
          thumbSizeS = _Const000B;
          thumbCornerRadiusS = _this->Appearance->ThumbCornerRadiusFocused;
        }
        break;

        default : 
        {
          thumbSizeS = _Const000B;
          thumbCornerRadiusS = _this->Appearance->ThumbCornerRadiusDefault;
        }
      }

      thumbSizeS.X = ( thumbSizeS.X + EwGetRectW( r ));
      thumbSizeS.Y = ( thumbSizeS.Y + EwGetRectH( r ));
      thumbSizeS = EwGetPointMax( 2, thumbSizeS, _Const000B );
      thumbCornerRadius = EwMathMixInt32( thumbCornerRadiusS, thumbCornerRadius, 
      _this->animation->Value );
      thumbSize = EwMathMixPoint( thumbSizeS, thumbSize, _this->animation->Value );
    }

    r.Point1.X = (( EwGetRectW( r ) / 2 ) - ( thumbSize.X / 2 ));
    r.Point2.X = ( r.Point1.X + thumbSize.X );
    r.Point1.Y = (( EwGetRectH( r ) / 2 ) - ( thumbSize.Y / 2 ));
    r.Point2.Y = ( r.Point1.Y + thumbSize.Y );
    thumbArea = r;
  }

  if ( _this->shadowView != 0 )
  {
    XInt32 blur;
    XColor clr;

    switch ((( _this->animation != 0 )? _this->animEndState : isState ))
    {
      case 'D' :
      case 'A' :
      {
        blur = 0;
        clr = _Const0011;
      }
      break;

      case 'F' :
      {
        blur = _this->Appearance->ThumbShadowBlurRadiusFocused;
        clr = _this->Appearance->ThumbShadowColorFocused;
      }
      break;

      default : 
      {
        blur = _this->Appearance->ThumbShadowBlurRadiusDefault;
        clr = _this->Appearance->ThumbShadowColorDefault;
      }
    }

    if ( _this->animation != 0 )
    {
      XInt32 blurS;
      XColor clrS;

      switch ( _this->animStartState )
      {
        case 'D' :
        case 'A' :
        {
          blurS = 0;
          clrS = _Const0011;
        }
        break;

        case 'F' :
        {
          blurS = _this->Appearance->ThumbShadowBlurRadiusFocused;
          clrS = _this->Appearance->ThumbShadowColorFocused;
        }
        break;

        default : 
        {
          blurS = _this->Appearance->ThumbShadowBlurRadiusDefault;
          clrS = _this->Appearance->ThumbShadowColorDefault;
        }
      }

      blur = EwMathMixInt32( blurS, blur, _this->animation->Value );
      clr = EwMathMixColor( clrS, clr, _this->animation->Value );
    }

    CoreRectView__OnSetBounds( _this->shadowView, thumbArea );
    ViewsShadow_OnSetBlurRadius( _this->shadowView, blur );
    ViewsShadow_OnSetRadius( _this->shadowView, thumbCornerRadius );
    ViewsShadow_OnSetColor( _this->shadowView, clr );
    ViewsShadow_OnSetOffset( _this->shadowView, _Const000B );
    CoreView_OnSetStackingPriority((CoreView)_this->shadowView, 39 );
  }

  if ( _this->borderView1 != 0 )
  {
    XColor clr;
    XInt32 width;

    switch ((( _this->animation != 0 )? _this->animEndState : isState ))
    {
      case 'D' :
      {
        clr = _this->Appearance->ThumbBorderColorDisabled;
        width = _this->Appearance->ThumbBorderWidthDisabled;
      }
      break;

      case 'A' :
      {
        clr = _this->Appearance->ThumbBorderColorActive;
        width = _this->Appearance->ThumbBorderWidthActive;
      }
      break;

      case 'F' :
      {
        clr = _this->Appearance->ThumbBorderColorFocused;
        width = _this->Appearance->ThumbBorderWidthFocused;
      }
      break;

      default : 
      {
        clr = _this->Appearance->ThumbBorderColorDefault;
        width = _this->Appearance->ThumbBorderWidthDefault;
      }
    }

    if ( _this->animation != 0 )
    {
      XColor clrS;
      XInt32 widthS;

      switch ( _this->animStartState )
      {
        case 'D' :
        {
          clrS = _this->Appearance->ThumbBorderColorDisabled;
          widthS = _this->Appearance->ThumbBorderWidthDisabled;
        }
        break;

        case 'A' :
        {
          clrS = _this->Appearance->ThumbBorderColorActive;
          widthS = _this->Appearance->ThumbBorderWidthActive;
        }
        break;

        case 'F' :
        {
          clrS = _this->Appearance->ThumbBorderColorFocused;
          widthS = _this->Appearance->ThumbBorderWidthFocused;
        }
        break;

        default : 
        {
          clrS = _this->Appearance->ThumbBorderColorDefault;
          widthS = _this->Appearance->ThumbBorderWidthDefault;
        }
      }

      clr = EwMathMixColor( clrS, clr, _this->animation->Value );
      width = EwMathMixInt32( widthS, width, _this->animation->Value );
    }

    CoreRectView__OnSetBounds( _this->borderView1, thumbArea );
    ViewsBorder_OnSetRadius( _this->borderView1, thumbCornerRadius );
    ViewsBorder_OnSetColor( _this->borderView1, clr );
    ViewsBorder_OnSetWidth( _this->borderView1, width );
    CoreView_OnSetStackingPriority((CoreView)_this->borderView1, 41 );
  }

  if ( _this->rectView1 != 0 )
  {
    XRect r = thumbArea;
    XColor clr;

    switch ((( _this->animation != 0 )? _this->animEndState : isState ))
    {
      case 'D' :
        clr = _this->Appearance->ThumbColorDisabled;
      break;

      case 'A' :
        clr = _this->Appearance->ThumbColorActive;
      break;

      case 'F' :
        clr = _this->Appearance->ThumbColorFocused;
      break;

      default : 
        clr = _this->Appearance->ThumbColorDefault;
    }

    if ( _this->animation != 0 )
    {
      XColor clrS;

      switch ( _this->animStartState )
      {
        case 'D' :
          clrS = _this->Appearance->ThumbColorDisabled;
        break;

        case 'A' :
          clrS = _this->Appearance->ThumbColorActive;
        break;

        case 'F' :
          clrS = _this->Appearance->ThumbColorFocused;
        break;

        default : 
          clrS = _this->Appearance->ThumbColorDefault;
      }

      clr = EwMathMixColor( clrS, clr, _this->animation->Value );
    }

    if ((( _this->borderView1 != 0 ) && !!_this->borderView1->Width ) && ( _this->borderView1->Color.Alpha 
        == 255 ))
      r = EwInflateRect( r, _Const0012 );

    CoreRectView__OnSetBounds( _this->rectView1, r );
    ViewsRectangle_OnSetRadius( _this->rectView1, thumbCornerRadius );
    ViewsRectangle_OnSetColor( _this->rectView1, clr );
    CoreView_OnSetStackingPriority((CoreView)_this->rectView1, 40 );
  }

  if ( _this->frameView != 0 )
  {
    ResourcesBitmap bitmap;
    XInt32 frameNo;
    XRect r = EwNewRect( area.Point1.X, area.Point1.Y, area.Point2.X, area.Point2.Y );

    switch ( isState )
    {
      case 'D' :
      {
        bitmap = _this->Appearance->FaceBitmapDisabled;
        frameNo = _this->Appearance->FaceFrameDisabled;
      }
      break;

      case 'A' :
      {
        bitmap = _this->Appearance->FaceBitmapActive;
        frameNo = _this->Appearance->FaceFrameActive;
      }
      break;

      case 'F' :
      {
        bitmap = _this->Appearance->FaceBitmapFocused;
        frameNo = _this->Appearance->FaceFrameFocused;
      }
      break;

      default : 
      {
        bitmap = _this->Appearance->FaceBitmapDefault;
        frameNo = _this->Appearance->FaceFrameDefault;
      }
    }

    ViewsFrame_OnSetAnimated( _this->frameView, (XBool)( frameNo < 0 ));
    ViewsFrame_OnSetColor( _this->frameView, _Const0000 );

    if ( frameNo < 0 )
      frameNo = 0;

    ViewsFrame_OnSetFrameNumber( _this->frameView, frameNo );
    ViewsFrame_OnSetBitmap( _this->frameView, bitmap );
    CoreRectView__OnSetBounds( _this->frameView, r );
    CoreView_OnSetStackingPriority((CoreView)_this->frameView, 16 );
  }

  if ( _this->textView != 0 )
  {
    XColor clr;

    switch ((( _this->animation != 0 )? _this->animEndState : isState ))
    {
      case 'D' :
        clr = _this->Appearance->LabelColorDisabled;
      break;

      case 'A' :
        clr = _this->Appearance->LabelColorActive;
      break;

      case 'F' :
        clr = _this->Appearance->LabelColorFocused;
      break;

      default : 
        clr = _this->Appearance->LabelColorDefault;
    }

    if ( _this->animation != 0 )
    {
      XColor clrS;

      switch ( _this->animStartState )
      {
        case 'D' :
          clrS = _this->Appearance->LabelColorDisabled;
        break;

        case 'A' :
          clrS = _this->Appearance->LabelColorActive;
        break;

        case 'F' :
          clrS = _this->Appearance->LabelColorFocused;
        break;

        default : 
          clrS = _this->Appearance->LabelColorDefault;
      }

      clr = EwMathMixColor( clrS, clr, _this->animation->Value );
    }

    CoreRectView__OnSetBounds( _this->textView, EwNewRect( area.Point1.X + _this->Appearance->LabelMarginLeft, 
    area.Point1.Y + _this->Appearance->LabelMarginTop, area.Point2.X - _this->Appearance->LabelMarginRight, 
    area.Point2.Y - _this->Appearance->LabelMarginBottom ));
    ViewsText_OnSetAlignment( _this->textView, ViewsTextAlignmentAlignHorzCenter 
    | ViewsTextAlignmentAlignVertCenter );
    ViewsText_OnSetWrapText( _this->textView, 1 );
    ViewsText_OnSetEllipsis( _this->textView, 1 );
    ViewsText_OnSetFont( _this->textView, _this->Appearance->LabelFont );
    ViewsText_OnSetString( _this->textView, _this->Label );
    ViewsText_OnSetColor( _this->textView, clr );
    CoreView_OnSetStackingPriority((CoreView)_this->textView, 76 );
  }

  if ( !EwIsRectNull( thumbArea ))
  {
    XRect r = thumbArea;

    if ( _this->shadowView != 0 )
      r = EwUnionRect( r, CoreView__GetClipping( _this->shadowView ));

    if ( _this->frameView != 0 )
      r = EwUnionRect( r, CoreView__GetExtent( _this->frameView ));

    CoreGroup__ExtendClipping( _this, EwGetInt32Max( 2, -r.Point1.X, 0 ), EwGetInt32Max( 
    2, r.Point2.X - area.Point2.X, 0 ), EwGetInt32Max( 2, -r.Point1.Y, 0 ), EwGetInt32Max( 
    2, r.Point2.Y - area.Point2.Y, 0 ));
  }
  else
    CoreGroup__ExtendClipping( _this, 0, 0, 0, 0 );
}

/* 'C' function for method : 'WidgetSet::PushButton.onAnimate()' */
void WidgetSetPushButton_onAnimate( WidgetSetPushButton _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'WidgetSet::PushButton.onConfigChanged()' */
void WidgetSetPushButton_onConfigChanged( WidgetSetPushButton _this, XObject sender )
{
  XEnum oldKeyCode;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  oldKeyCode = _this->KeyHandler.Filter;
  _this->KeyHandler.Filter = CoreKeyCodeEnter;

  if (( oldKeyCode == CoreKeyCodeNoKey ) && ( _this->KeyHandler.Filter != CoreKeyCodeNoKey ))
    CoreView__ChangeViewState( _this, CoreViewStateFocusable, 0 );

  if (( oldKeyCode != CoreKeyCodeNoKey ) && ( _this->KeyHandler.Filter == CoreKeyCodeNoKey ))
    CoreView__ChangeViewState( _this, 0, CoreViewStateFocusable );

  if ( _this->Appearance != 0 )
    CoreRectView__OnSetBounds( _this, _this->Super2.Bounds );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'WidgetSet::PushButton.onFlashTimer()' */
void WidgetSetPushButton_onFlashTimer( WidgetSetPushButton _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
  EwPostSignal( _this->OnActivate, ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButton.onReleaseKey()' */
void WidgetSetPushButton_onReleaseKey( WidgetSetPushButton _this, XObject sender )
{
  XInt32 pressFeedbackDuration;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  pressFeedbackDuration = 0;

  if ( _this->Appearance != 0 )
    pressFeedbackDuration = _this->Appearance->PressedFeedbackDuration;

  CoreSimpleTouchHandler_OnSetEnabled( &_this->TouchHandler, 1 );
  CoreGroup_InvalidateViewState((CoreGroup)_this );

  if ((XInt32)( _this->KeyHandler.Time - _this->onPressKeyTime ) >= pressFeedbackDuration )
    EwPostSignal( _this->OnActivate, ((XObject)_this ));
  else
  {
    CoreTimer_OnSetBegin( &_this->FlashTimer, pressFeedbackDuration - (XInt32)( 
    _this->KeyHandler.Time - _this->onPressKeyTime ));
    CoreTimer_OnSetEnabled( &_this->FlashTimer, 1 );
  }
}

/* 'C' function for method : 'WidgetSet::PushButton.onPressKey()' */
void WidgetSetPushButton_onPressKey( WidgetSetPushButton _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreSimpleTouchHandler_OnSetEnabled( &_this->TouchHandler, 0 );
  CoreGroup_InvalidateViewState((CoreGroup)_this );

  if ( _this->FlashTimer.Enabled )
  {
    EwPostSignal( _this->OnActivate, ((XObject)_this ));
    CoreTimer_OnSetEnabled( &_this->FlashTimer, 0 );
  }

  _this->onPressKeyTime = _this->KeyHandler.Time;
}

/* 'C' function for method : 'WidgetSet::PushButton.onLeaveTouch()' */
void WidgetSetPushButton_onLeaveTouch( WidgetSetPushButton _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'WidgetSet::PushButton.onEnterTouch()' */
void WidgetSetPushButton_onEnterTouch( WidgetSetPushButton _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'WidgetSet::PushButton.onReleaseTouch()' */
void WidgetSetPushButton_onReleaseTouch( WidgetSetPushButton _this, XObject sender )
{
  XInt32 pressFeedbackDuration;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  pressFeedbackDuration = 0;

  if ( _this->Appearance != 0 )
    pressFeedbackDuration = _this->Appearance->PressedFeedbackDuration;

  _this->KeyHandler.Enabled = 1;

  if ( !_this->TouchHandler.Inside )
    return;

  if ( _this->TouchHandler.AutoDeflected )
    return;

  if ( _this->TouchHandler.HoldPeriod >= pressFeedbackDuration )
    EwPostSignal( _this->OnActivate, ((XObject)_this ));
  else
  {
    CoreTimer_OnSetBegin( &_this->FlashTimer, pressFeedbackDuration - _this->TouchHandler.HoldPeriod );
    CoreTimer_OnSetEnabled( &_this->FlashTimer, 1 );
  }
}

/* 'C' function for method : 'WidgetSet::PushButton.onPressTouch()' */
void WidgetSetPushButton_onPressTouch( WidgetSetPushButton _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  _this->KeyHandler.Enabled = 0;

  if ( _this->FlashTimer.Enabled )
  {
    EwPostSignal( _this->OnActivate, ((XObject)_this ));
    CoreTimer_OnSetEnabled( &_this->FlashTimer, 0 );
  }
}

/* 'C' function for method : 'WidgetSet::PushButton.OnSetLabel()' */
void WidgetSetPushButton_OnSetLabel( WidgetSetPushButton _this, XString value )
{
  if ( !EwCompString( _this->Label, value ))
    return;

  _this->Label = EwShareString( value );
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'WidgetSet::PushButton.OnSetAppearance()' */
void WidgetSetPushButton_OnSetAppearance( WidgetSetPushButton _this, WidgetSetPushButtonConfig 
  value )
{
  if ( _this->Appearance == value )
    return;

  if ( _this->Appearance != 0 )
    EwDetachObjObserver( EwNewSlot( _this, WidgetSetPushButton_onConfigChanged ), 
      (XObject)_this->Appearance, 0 );

  _this->Appearance = value;

  if ( value != 0 )
    EwAttachObjObserver( EwNewSlot( _this, WidgetSetPushButton_onConfigChanged ), 
      (XObject)value, 0 );

  EwPostSignal( EwNewSlot( _this, WidgetSetPushButton_onConfigChanged ), ((XObject)_this ));
}

/* Variants derived from the class : 'WidgetSet::PushButton' */
EW_DEFINE_CLASS_VARIANTS( WidgetSetPushButton )
EW_END_OF_CLASS_VARIANTS( WidgetSetPushButton )

/* Virtual Method Table (VMT) for the class : 'WidgetSet::PushButton' */
EW_DEFINE_CLASS( WidgetSetPushButton, CoreGroup, FlashTimer, animation, OnActivate, 
                 Label, Label, onPressKeyTime, "WidgetSet::PushButton" )
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
  WidgetSetPushButton_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetOpacity,
  CoreGroup_ExtendClipping,
  CoreGroup_SwitchToDialog,
  CoreGroup_PresentDialog,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  WidgetSetPushButton_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_FadeGroup,
  CoreGroup_RestackTop,
  CoreGroup_Restack,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( WidgetSetPushButton )

/* This autoobject provides the default customization for the 'push button' widget 
   (WidgetSet::PushButton) in its medium size variant. */
EW_DEFINE_AUTOOBJECT( WidgetSetPushButton_Mono_Medium, WidgetSetPushButtonConfig )

/* Initializer for the auto object 'WidgetSet::PushButton_Mono_Medium' */
void WidgetSetPushButton_Mono_Medium__Init( WidgetSetPushButtonConfig _this )
{
  WidgetSetPushButtonConfig_OnSetStateTransitionDuration( _this, 50 );
  WidgetSetPushButtonConfig_OnSetPressedFeedbackDuration( _this, 100 );
  WidgetSetPushButtonConfig_OnSetThumbShadowColorFocused( _this, _Const0013 );
  WidgetSetPushButtonConfig_OnSetThumbShadowColorDefault( _this, _Const0014 );
  WidgetSetPushButtonConfig_OnSetThumbShadowBlurRadiusFocused( _this, 4 );
  WidgetSetPushButtonConfig_OnSetThumbShadowBlurRadiusDefault( _this, 3 );
  WidgetSetPushButtonConfig_OnSetThumbBorderColorActive( _this, _Const0015 );
  WidgetSetPushButtonConfig_OnSetThumbBorderColorFocused( _this, _Const0016 );
  WidgetSetPushButtonConfig_OnSetThumbBorderColorDisabled( _this, _Const0015 );
  WidgetSetPushButtonConfig_OnSetThumbBorderColorDefault( _this, _Const0015 );
  WidgetSetPushButtonConfig_OnSetThumbBorderWidthActive( _this, 1 );
  WidgetSetPushButtonConfig_OnSetThumbBorderWidthFocused( _this, 1 );
  WidgetSetPushButtonConfig_OnSetThumbBorderWidthDisabled( _this, 1 );
  WidgetSetPushButtonConfig_OnSetThumbBorderWidthDefault( _this, 1 );
  WidgetSetPushButtonConfig_OnSetThumbColorActive( _this, _Const0000 );
  WidgetSetPushButtonConfig_OnSetThumbColorFocused( _this, _Const0000 );
  WidgetSetPushButtonConfig_OnSetThumbColorDisabled( _this, _Const0000 );
  WidgetSetPushButtonConfig_OnSetThumbColorDefault( _this, _Const0000 );
  WidgetSetPushButtonConfig_OnSetThumbCornerRadiusActive( _this, 8 );
  WidgetSetPushButtonConfig_OnSetThumbCornerRadiusFocused( _this, 8 );
  WidgetSetPushButtonConfig_OnSetThumbCornerRadiusDisabled( _this, 8 );
  WidgetSetPushButtonConfig_OnSetThumbCornerRadiusDefault( _this, 8 );
  WidgetSetPushButtonConfig_OnSetLabelColorActive( _this, _Const0017 );
  WidgetSetPushButtonConfig_OnSetLabelColorFocused( _this, _Const0017 );
  WidgetSetPushButtonConfig_OnSetLabelColorDisabled( _this, _Const0018 );
  WidgetSetPushButtonConfig_OnSetLabelColorDefault( _this, _Const0017 );
  WidgetSetPushButtonConfig_OnSetLabelMarginBottom( _this, 6 );
  WidgetSetPushButtonConfig_OnSetLabelMarginTop( _this, 6 );
  WidgetSetPushButtonConfig_OnSetLabelMarginRight( _this, 6 );
  WidgetSetPushButtonConfig_OnSetLabelMarginLeft( _this, 6 );
  WidgetSetPushButtonConfig_OnSetIconTintActive( _this, _Const0017 );
  WidgetSetPushButtonConfig_OnSetIconTintFocused( _this, _Const0017 );
  WidgetSetPushButtonConfig_OnSetIconTintDisabled( _this, _Const0018 );
  WidgetSetPushButtonConfig_OnSetIconTintDefault( _this, _Const0017 );
  WidgetSetPushButtonConfig_OnSetIconMarginBottom( _this, 6 );
  WidgetSetPushButtonConfig_OnSetIconMarginTop( _this, 6 );
  WidgetSetPushButtonConfig_OnSetIconMarginRight( _this, 6 );
  WidgetSetPushButtonConfig_OnSetIconMarginLeft( _this, 6 );
  WidgetSetPushButtonConfig_OnSetLabelFont( _this, EwLoadResource( &ResourcesFontMedium, 
  ResourcesFont ));
  WidgetSetPushButtonConfig_OnSetWidgetMinSize( _this, _Const0019 );
}

/* Re-Initializer for the auto object 'WidgetSet::PushButton_Mono_Medium' */
void WidgetSetPushButton_Mono_Medium__ReInit( WidgetSetPushButtonConfig _this )
{
  EW_UNUSED_ARG( _this );
}

/* Table with links to derived variants of the auto object : 'WidgetSet::PushButton_Mono_Medium' */
EW_DEFINE_AUTOOBJECT_VARIANTS( WidgetSetPushButton_Mono_Medium )
EW_END_OF_AUTOOBJECT_VARIANTS( WidgetSetPushButton_Mono_Medium )

/* Embedded Wizard */
