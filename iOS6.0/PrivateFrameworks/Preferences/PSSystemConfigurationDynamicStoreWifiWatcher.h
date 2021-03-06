/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface PSSystemConfigurationDynamicStoreWifiWatcher : NSObject
{
    struct __SCDynamicStore *_prefs;
    struct __CFString *_wifiKey;
    struct __CFString *_wifiInterface;
    struct __CFString *_tetheringLink;
}

+ (BOOL)wifiEnabled;
+ (void)releaseSharedInstance;
+ (id)sharedInstance;
- (void)dealloc;
- (id)init;
- (id)wifiConfig;
- (id)_wifiNameWithState:(id)arg1;
- (id)_wifiPowerWithState:(id)arg1;
- (id)_wifiTetheringWithState:(id)arg1;
- (void)findKeysAirPortState:(id *)arg1 andTetheringState:(id *)arg2;

@end

