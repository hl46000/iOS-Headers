/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <DataAccess/DALocalDBGateKeeper.h>

@class NSMutableDictionary, NSString;

@interface DAConcreteLocalDBGateKeeper : DALocalDBGateKeeper
{
    NSString *_buildVersion;
    NSMutableDictionary *_refreshingWaiters;
    NSMutableDictionary *_failedWaiters;
    NSMutableDictionary *_restrictedWaiters;
}

- (void)_setUnitTestHackRunLoopMode:(id)arg1;
- (id)stateString;
- (void)claimedOwnershipOfDataclasses:(int)arg1;
- (void)relinquishLocksForWaiter:(id)arg1 dataclasses:(int)arg2 moreComing:(BOOL)arg3;
- (void)unregisterWaiterForDataclassLocks:(id)arg1;
- (void)_sendAllClearNotifications;
- (void)registerWaiter:(id)arg1 forDataclassLocks:(int)arg2 completionHandler:(id)arg3;
- (void)registerPreemptiveWaiter:(id)arg1 forDataclassLocks:(int)arg2 completionHandler:(id)arg3;
- (void)_registerWaiter:(id)arg1 forDataclassLocks:(int)arg2 preempt:(BOOL)arg3 completionHandler:(id)arg4;
- (void)_notifyWaitersForDataclasses:(id)arg1;
- (void)_removeRestrictedWaitersFromAllQueues;
- (void)_abortWaiterForWrappers:(id)arg1;
- (void)_decrementRefreshCountForWaiterID:(id)arg1 didFinish:(BOOL)arg2;
- (BOOL)_canWakenWaiter:(id)arg1;
- (void)setBookmarksLockHolder:(id)arg1;
- (void)setNotesLockHolder:(id)arg1;
- (void)setEventsLockHolder:(id)arg1;
- (void)setContactsLockHolder:(id)arg1;
- (void)giveAccountWithIDAnotherChance:(id)arg1;
- (void)dealloc;
- (id)init;
- (BOOL)babysitterEnabled;
- (void)_reloadBabysitterProperties;

@end
