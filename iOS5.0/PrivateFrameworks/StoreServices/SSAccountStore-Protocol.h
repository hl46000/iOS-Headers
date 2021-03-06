/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@class NSArray, SSAccount;

@protocol SSAccountStore <NSObject>
@property(readonly, getter=isExpired) BOOL expired;
@property(readonly) NSArray *accounts;
@property(readonly) SSAccount *activeLockerAccount;
@property(readonly) SSAccount *activeAccount;
- (void)resetExpirationForTokenType:(int)arg1;
- (void)resetExpiration;
- (BOOL)isExpiredForTokenType:(int)arg1;
- (id)setActiveLockerAccount:(id)arg1;
- (id)setActiveAccount:(id)arg1;
- (id)addAccount:(id)arg1;
- (void)signOutAllAccounts;
- (void)signOutAccount:(id)arg1;
- (void)setAccountCredits:(id)arg1 forAccountWithUniqueIdentifier:(id)arg2;
- (id)accountWithUniqueIdentifier:(id)arg1 reloadIfNecessary:(BOOL)arg2;
- (id)accountWithUniqueIdentifier:(id)arg1;
@end

