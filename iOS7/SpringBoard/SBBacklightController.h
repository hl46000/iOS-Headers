/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableSet, NSTimer;

@interface SBBacklightController : NSObject
{
    double _minimumLockIdleTime;
    NSTimer *_autoLockTimer;
    double _lastTimeIdleCausedDim;
    double _nextLockDurationAfterDim;
    unsigned int _disableAutoDimming:1;
    unsigned int _lockScreenCameraWantsIdleTimerDisabled:1;
    NSMutableSet *_idleTimerDisabledReasons;
    NSMutableSet *_spuriousScreenUndimmingAssertions;
    BOOL _isActivatingBacklightWhileUILocked;
}

+ (BOOL)deviceSupportsBacklightRamping;
+ (id)sharedInstanceIfExists;
+ (id)sharedInstance;
+ (id)_sharedInstanceCreateIfNeeded:(BOOL)arg1;
@property(readonly, nonatomic) BOOL isActivatingBacklightWhileUILocked; // @synthesize isActivatingBacklightWhileUILocked=_isActivatingBacklightWhileUILocked;
- (void)preventIdleSleepForNumberOfSeconds:(float)arg1;
- (void)preventIdleSleep;
- (void)allowIdleSleep;
- (void)_userEventPresenceTimerExpired;
- (void)_userEventOccurred;
- (void)_userEventsDidIdle;
- (void)_lockScreenDimTimerFired;
- (void)_didIdle;
- (void)_autoLockTimerFired:(id)arg1;
- (void)_startFadeOutAnimationIfNecessary;
- (BOOL)_lockScreenWantsUserEventNotifications;
- (void)removeSpuriousScreenUndimmingAssertion:(id)arg1;
- (void)addSpuriousScreenUndimmingAssertion:(id)arg1;
- (void)autoLockPrefsChanged;
- (void)animateBacklightToFactor:(float)arg1 duration:(double)arg2 completion:(id)arg3;
- (void)setBacklightFactor:(float)arg1 source:(int)arg2;
- (void)setBacklightFactorPending:(float)arg1;
- (id)idleTimerDisabledReasons;
@property(readonly, nonatomic) BOOL screenIsOff;
- (void)turnOnScreenFullyWithBacklightSource:(int)arg1;
- (void)setIdleTimerDisabled:(BOOL)arg1 forReason:(id)arg2;
- (void)setIdleTimerDisabled:(BOOL)arg1;
- (void)_resetLockScreenIdleTimerWithDuration:(double)arg1 mode:(int)arg2;
- (void)resetLockScreenIdleTimerWithDuration:(double)arg1;
- (void)resetLockScreenIdleTimer;
- (void)cancelLockScreenIdleTimer;
- (double)_currentLockScreenIdleTimerInterval;
- (void)resetIdleTimerAndUndim:(BOOL)arg1;
- (void)undim;
- (double)_nextLockTimeDuration;
- (double)_nextIdleTimeDuration;
- (void)clearIdleTimer;
- (void)setBacklightFactorToZeroAfterDelay;
- (void)cancelSetBacklightFactorToZeroAfterDelay;
- (void)_setBacklightFactorToZero;
- (void)_clearAutoLockTimer;
- (id)init;

@end
