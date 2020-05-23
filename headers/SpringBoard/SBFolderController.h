/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <Foundation/NSObject.h>

#import "SBFolderControllerDelegate-Protocol.h"
#import "SBFolderObserver-Protocol.h"
#import "SBFolderViewDelegate-Protocol.h"

@class NSArray, NSMapTable, NSTimer, SBFolder, SBFolderContext, SBFolderView, SBIcon, SBIconZoomAnimator, _UILegibilitySettings;

@interface SBFolderController : NSObject <SBFolderControllerDelegate, SBFolderViewDelegate, SBFolderObserver>
{
    SBFolderView *_contentView;
    BOOL _didAutoScroll;
    NSTimer *_autoScrollTimer;
    struct CGPoint _dragPausePoint;
    NSTimer *_dragPauseTimer;
    NSTimer *_closeFolderTimer;
    BOOL _grabbedIconHasEverEnteredFolderView;
    NSMapTable *_editingContextsByFolder;
    SBIconZoomAnimator *_zoomAnimator;
    BOOL _isOpen;
    BOOL _isEditing;
    BOOL _isAnimating;
    BOOL _active;
    BOOL _rotating;
    id <SBFolderControllerDelegate> _delegate;
    SBFolder *_folder;
    int _orientation;
    _UILegibilitySettings *_legibilitySettings;
    SBFolderController *_outerFolderController;
    SBFolderController *_innerFolderController;
    SBIcon *_grabbedIcon;
    SBFolderContext *_lastContext;
}

+ (float)wallpaperScaleForDepth:(unsigned int)arg1;
+ (unsigned int)maxFolderDepth;
@property(retain, nonatomic) SBFolderContext *lastContext; // @synthesize lastContext=_lastContext;
@property(retain, nonatomic) SBIcon *grabbedIcon; // @synthesize grabbedIcon=_grabbedIcon;
@property(nonatomic, getter=isRotating) BOOL rotating; // @synthesize rotating=_rotating;
@property(nonatomic, getter=isActive) BOOL active; // @synthesize active=_active;
@property(retain, nonatomic) SBFolderController *innerFolderController; // @synthesize innerFolderController=_innerFolderController;
@property(nonatomic) SBFolderController *outerFolderController; // @synthesize outerFolderController=_outerFolderController;
@property(readonly, nonatomic) SBFolderView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings; // @synthesize legibilitySettings=_legibilitySettings;
@property(nonatomic) int orientation; // @synthesize orientation=_orientation;
@property(retain, nonatomic) SBFolder *folder; // @synthesize folder=_folder;
@property(nonatomic) id <SBFolderControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isAnimating) BOOL animating; // @synthesize animating=_isAnimating;
@property(readonly, nonatomic, getter=isEditing) BOOL editing; // @synthesize editing=_isEditing;
@property(nonatomic, getter=isOpen) BOOL open; // @synthesize open=_isOpen;
- (void)folder:(id)arg1 didRemoveLists:(id)arg2 atIndexes:(id)arg3;
- (void)folder:(id)arg1 didAddList:(id)arg2;
- (void)_noteFolderListsDidChange;
- (void)folderViewShouldBeginEditing:(id)arg1;
- (void)folderViewShouldClose:(id)arg1;
- (void)folderViewDidEndScrolling:(id)arg1;
- (void)folderViewWillBeginScrolling:(id)arg1;
- (void)folderView:(id)arg1 currentPageIndexDidChange:(int)arg2;
- (void)folderControllerDidEndScrolling:(id)arg1;
- (void)folderControllerShouldBeginEditing:(id)arg1;
- (void)folderControllerShouldClose:(id)arg1;
- (void)folderController:(id)arg1 draggedIconShouldDropFromListView:(id)arg2;
- (BOOL)folderController:(id)arg1 draggedIconMightDropFromListView:(id)arg2;
- (BOOL)folderController:(id)arg1 draggedIconDidMoveFromListView:(id)arg2 toListView:(id)arg3;
- (BOOL)folderController:(id)arg1 draggedIconDidPauseAtLocation:(struct CGPoint)arg2 inListView:(id)arg3;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1;
- (void)willRotateToInterfaceOrientation:(int)arg1;
- (void)popToIndexPath:(id)arg1;
- (BOOL)popFolderAnimated:(BOOL)arg1 completion:(id)arg2;
- (BOOL)pushFolder:(id)arg1 animated:(BOOL)arg2 completion:(id)arg3;
- (void)_animateFloatyFolderOpen:(BOOL)arg1 settings:(id)arg2 completion:(id)arg3;
- (void)_animateNewsstandFolderOpen:(BOOL)arg1 settings:(id)arg2 completion:(id)arg3;
- (void)_setInnerFolderOpen:(BOOL)arg1 animated:(BOOL)arg2 completion:(id)arg3;
- (BOOL)_iconAppearsOnCurrentPage:(id)arg1;
- (BOOL)_listIndexIsVisible:(unsigned int)arg1;
- (unsigned int)_depth;
- (id)_newZoomAnimatorForZoomUp:(BOOL)arg1;
- (void)_clearZoomAnimator;
- (void)unscatterAnimated:(BOOL)arg1 afterDelay:(double)arg2 withCompletion:(id)arg3;
- (void)scatterAnimated:(BOOL)arg1 withCompletion:(id)arg2;
- (void)noteGrabbedIcon:(id)arg1 locationDidChangeWithTouch:(id)arg2;
- (void)noteGrabbedIconDidChange:(id)arg1;
- (void)noteUserIsInteractingWithIcons;
- (void)_updateAutoScrollForTouch:(id)arg1;
- (void)_cancelAutoScroll;
- (void)_doAutoScrollByPageCount:(int)arg1;
- (void)_scrollRight:(id)arg1;
- (void)_scrollLeft:(id)arg1;
- (void)_updateDragPauseForTouch:(id)arg1;
- (void)_dragPauseTimerFired:(id)arg1;
- (BOOL)_canDropIconInListView:(id)arg1;
- (void)_resetDragPauseTimerForPoint:(struct CGPoint)arg1 inIconListView:(id)arg2;
- (void)_cancelDragPauseTimer;
- (void)_updateCloseFolderForTouch:(id)arg1;
- (void)_setCloseFolderTimerIfNecessary;
- (void)_closeFolderTimerFired;
- (void)_cancelCloseFolderTimer;
- (void)_cancelAllInteractionTimers;
- (BOOL)_allowUserInteraction;
- (unsigned int)_indexOfIconListForIcon:(id)arg1; // There we go! Gives us the page of our thing
- (void)_compactFolder;
- (id)_addEmptyListForce:(BOOL)arg1;
- (id)addEmptyListView;
- (void)layoutIconLists:(double)arg1 domino:(BOOL)arg2 forceRelayout:(BOOL)arg3;
- (void)_resetIconLists;
- (void)prepareToTearDown;
- (void)_updateAssociatedControllerStateAnimated:(BOOL)arg1;
- (void)fadeContentForMinificationFraction:(float)arg1;
- (void)fadeContentForMagnificationFraction:(float)arg1;
- (void)didAnimate;
- (void)willAnimate;
- (void)setDockVerticalStretch:(float)arg1;
- (void)setDockOffscreenFraction:(float)arg1;
- (id)dockListView;
- (BOOL)hasDock;
- (BOOL)isDisplayingIcon:(id)arg1;
- (id)iconListViewContainingIcon:(id)arg1;
- (id)iconListViewForTouch:(id)arg1;
- (id)iconListViewAtIndex:(unsigned int)arg1;
- (id)currentIconListView;
@property(readonly, nonatomic) NSArray *iconListViews;
- (BOOL)_restoreFromContext:(id)arg1;
- (id)_createContext;
- (id)folderControllerForFolder:(id)arg1;
- (id)deepestFolderController;
- (BOOL)setCurrentPageIndexToListContainingIcon:(id)arg1 animated:(BOOL)arg2;
- (BOOL)setCurrentPageIndex:(int)arg1 animated:(BOOL)arg2;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
@property(readonly, nonatomic) int currentPageIndex;
@property(readonly, nonatomic, getter=isScrolling) BOOL scrolling;
- (Class)_contentViewClass;
- (void)_invalidate;
- (void)dealloc;
- (id)initWithFolder:(id)arg1 orientation:(int)arg2;

- (void)handleReachabilityActivated:(BOOL)activated animated:(BOOL)animated completion:(id)completion; 

@end

