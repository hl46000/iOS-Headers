//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ACAccountStore;

@interface ACRemoteCommandHandler : NSObject
{
    ACAccountStore *_accountStore;
}

- (void).cxx_destruct;
- (void)_deleteAccount:(id)arg1;
- (void)_promptUserForAccountCredential:(id)arg1;
- (void)_authenticateAccount:(id)arg1;
- (void)_updateAccount:(id)arg1;
- (void)_addAccount:(id)arg1;
- (void)handleCommand:(id)arg1 forAccount:(id)arg2;
- (id)init;

@end

