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

#ifndef _ApplicationListBox1_H
#define _ApplicationListBox1_H

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

#include "_CoreKeyPressHandler.h"
#include "_CoreSlideTouchHandler.h"
#include "_CoreVerticalList.h"
#include "_TemplatesList.h"
#include "_ViewsBorder.h"
#include "_ViewsRectangle.h"

/* Forward declaration of the class Application::ListBox1 */
#ifndef _ApplicationListBox1_
  EW_DECLARE_CLASS( ApplicationListBox1 )
#define _ApplicationListBox1_
#endif

/* Forward declaration of the class Application::ListBoxItem1 */
#ifndef _ApplicationListBoxItem1_
  EW_DECLARE_CLASS( ApplicationListBoxItem1 )
#define _ApplicationListBoxItem1_
#endif

/* Forward declaration of the class Core::DialogContext */
#ifndef _CoreDialogContext_
  EW_DECLARE_CLASS( CoreDialogContext )
#define _CoreDialogContext_
#endif

/* Forward declaration of the class Core::Group */
#ifndef _CoreGroup_
  EW_DECLARE_CLASS( CoreGroup )
#define _CoreGroup_
#endif

/* Forward declaration of the class Core::LayoutContext */
#ifndef _CoreLayoutContext_
  EW_DECLARE_CLASS( CoreLayoutContext )
#define _CoreLayoutContext_
#endif

/* Forward declaration of the class Core::TaskQueue */
#ifndef _CoreTaskQueue_
  EW_DECLARE_CLASS( CoreTaskQueue )
#define _CoreTaskQueue_
#endif

/* Forward declaration of the class Core::View */
#ifndef _CoreView_
  EW_DECLARE_CLASS( CoreView )
#define _CoreView_
#endif

/* Forward declaration of the class Effects::Fader */
#ifndef _EffectsFader_
  EW_DECLARE_CLASS( EffectsFader )
#define _EffectsFader_
#endif


/* This class implements the Application::ListBox1 widget. This widget is intended 
   to display a list of options and permit the user to select the desired option. 
   Selecting the option sends a signal to the slot method stored in the property 
   @OnSelect.
   Alternatively the property @Outlet can refer to any other 'int32' property the 
   widget should remain synchronized with. When the user selects an option, the 
   affected property is automatically updated to reflect the number of the selected 
   option. On the other hand, when the referred property is modified by another 
   one, the ListBox is automatically notified to remain in sync with the property.
   The total number of available ListBox items (the number of options) is determined 
   by the property @NoOfItems. Which option is actually selected is controlled by 
   the property @SelectedItem.
   The items are loaded dynamically at the runtime. For this purpose a slot method 
   has to be implemented and assigned to the @OnLoadItem property. The ListBox will 
   invoke the slot method automatically each time it needs an item to be loaded. 
   Within the slot method the implementation can access and initialize the affected 
   item by using the variable @View.
   In order to trigger the list to reload one or more items, invoke the method @InvalidateItems(). 
   The list box will thereupon schedule the necessary loading steps automatically. */
EW_DEFINE_FIELDS( ApplicationListBox1, TemplatesList )
  EW_OBJECT  ( KeyDownHandler,  CoreKeyPressHandler )
  EW_OBJECT  ( KeyUpHandler,    CoreKeyPressHandler )
  EW_OBJECT  ( Background,      ViewsRectangle )
  EW_OBJECT  ( Border,          ViewsBorder )
  EW_OBJECT  ( SlideTouchHandler, CoreSlideTouchHandler )
  EW_OBJECT  ( VerticalList,    CoreVerticalList )
  EW_VARIABLE( View,            ApplicationListBoxItem1 )
  EW_PROPERTY( OnSelect,        XSlot )
  EW_PROPERTY( OnLoadItem,      XSlot )
  EW_PROPERTY( SelectedItem,    XInt32 )
  EW_PROPERTY( NoOfItems,       XInt32 )
  EW_VARIABLE( initialized,     XBool )
  EW_VARIABLE( selected,        XBool )
  EW_VARIABLE( enabled,         XBool )
EW_END_OF_FIELDS( ApplicationListBox1 )

/* Virtual Method Table (VMT) for the class : 'Application::ListBox1' */
EW_DEFINE_METHODS( ApplicationListBox1, TemplatesList )
  EW_METHOD( initLayoutContext, void )( CoreRectView _this, XRect aBounds, CoreOutline 
    aOutline )
  EW_METHOD( GetRoot,           CoreRoot )( CoreView _this )
  EW_METHOD( Draw,              void )( CoreGroup _this, GraphicsCanvas aCanvas, 
    XRect aClip, XPoint aOffset, XInt32 aOpacity, XBool aBlend )
  EW_METHOD( GetClipping,       XRect )( CoreGroup _this )
  EW_METHOD( HandleEvent,       XObject )( CoreView _this, CoreEvent aEvent )
  EW_METHOD( CursorHitTest,     CoreCursorHit )( CoreGroup _this, XRect aArea, XInt32 
    aFinger, XInt32 aStrikeCount, CoreView aDedicatedView, CoreView aStartView, 
    XSet aRetargetReason )
  EW_METHOD( AdjustDrawingArea, XRect )( CoreGroup _this, XRect aArea )
  EW_METHOD( ArrangeView,       XPoint )( CoreRectView _this, XRect aBounds, XEnum 
    aFormation )
  EW_METHOD( MoveView,          void )( CoreRectView _this, XPoint aOffset, XBool 
    aFastMove )
  EW_METHOD( GetExtent,         XRect )( CoreRectView _this )
  EW_METHOD( ChangeViewState,   void )( CoreGroup _this, XSet aSetState, XSet aClearState )
  EW_METHOD( OnSetBounds,       void )( CoreGroup _this, XRect value )
  EW_METHOD( OnSetFocus,        void )( CoreGroup _this, CoreView value )
  EW_METHOD( OnSetOpacity,      void )( CoreGroup _this, XInt32 value )
  EW_METHOD( ExtendClipping,    void )( CoreGroup _this, XInt32 aExtClipLeft, XInt32 
    aExtClipRight, XInt32 aExtClipTop, XInt32 aExtClipBottom )
  EW_METHOD( SwitchToDialog,    void )( CoreGroup _this, CoreGroup aDialogGroup, 
    EffectsTransition aPresentTransition, EffectsTransition aDismissTransition, 
    EffectsTransition aOverlayTransition, EffectsTransition aRestoreTransition, 
    EffectsTransition aOverrideDismissTransition, EffectsTransition aOverrideOverlayTransition, 
    EffectsTransition aOverrideRestoreTransition, XSlot aComplete, XSlot aCancel, 
    XBool aCombine )
  EW_METHOD( PresentDialog,     void )( CoreGroup _this, CoreGroup aDialogGroup, 
    EffectsTransition aPresentTransition, EffectsTransition aDismissTransition, 
    EffectsTransition aOverlayTransition, EffectsTransition aRestoreTransition, 
    EffectsTransition aOverrideOverlayTransition, EffectsTransition aOverrideRestoreTransition, 
    XSlot aComplete, XSlot aCancel, XBool aCombine )
  EW_METHOD( DispatchEvent,     XObject )( CoreGroup _this, CoreEvent aEvent )
  EW_METHOD( BroadcastEvent,    XObject )( CoreGroup _this, CoreEvent aEvent, XSet 
    aFilter )
  EW_METHOD( UpdateViewState,   void )( ApplicationListBox1 _this, XSet aState )
  EW_METHOD( InvalidateArea,    void )( CoreGroup _this, XRect aArea )
  EW_METHOD( FindSiblingView,   CoreView )( CoreGroup _this, CoreView aView, XSet 
    aFilter )
  EW_METHOD( FadeGroup,         void )( CoreGroup _this, CoreGroup aGroup, EffectsFader 
    aFader, XSlot aComplete, XSlot aCancel, XBool aCombine )
  EW_METHOD( RestackTop,        void )( CoreGroup _this, CoreView aView )
  EW_METHOD( Restack,           void )( CoreGroup _this, CoreView aView, XInt32 
    aOrder )
  EW_METHOD( Remove,            void )( CoreGroup _this, CoreView aView )
  EW_METHOD( Add,               void )( CoreGroup _this, CoreView aView, XInt32 
    aOrder )
EW_END_OF_METHODS( ApplicationListBox1 )

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
void ApplicationListBox1_UpdateViewState( ApplicationListBox1 _this, XSet aState );

/* This internal slot method is called when the user has made a selection within 
   the ListBox. This notification is forwarded to the slot method stored in @OnSelect 
   property. */
void ApplicationListBox1_onSelectItem( ApplicationListBox1 _this, XObject sender );

/* This internal slot method is called by the embedded 'VerticalList' in order to 
   load a list item with its appropriate content. The invocation is relayed to the 
   slot method stored in the property @OnLoadItem. */
void ApplicationListBox1_onLoadItemSlot( ApplicationListBox1 _this, XObject sender );

/* This internal slot method is called when the '@KeyDownHandler' is activated (when 
   the user has pressed the key specified in the property 'Filter' of the key handler). */
void ApplicationListBox1_onKeyDown( ApplicationListBox1 _this, XObject sender );

/* This internal slot method is called when the '@KeyUpHandler' is activated (when 
   the user has pressed the key specified in the property 'Filter' of the key handler). */
void ApplicationListBox1_onKeyUp( ApplicationListBox1 _this, XObject sender );

/* 'C' function for method : 'Application::ListBox1.OnSetSelectedItem()' */
void ApplicationListBox1_OnSetSelectedItem( ApplicationListBox1 _this, XInt32 value );

/* 'C' function for method : 'Application::ListBox1.OnSetNoOfItems()' */
void ApplicationListBox1_OnSetNoOfItems( ApplicationListBox1 _this, XInt32 value );

#ifdef __cplusplus
  }
#endif

#endif /* _ApplicationListBox1_H */

/* Embedded Wizard */
