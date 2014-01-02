/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <AirPortAssistant/AssistantCallbackController.h>

#import "AutoGuessSetup-Protocol.h"
#import "BaseStationSetup-Protocol.h"
#import "SetupUIConfigDelegateResult-Protocol.h"

@class NSDate, NSDictionary, NSMutableSet, NSString;

@interface AUSetupController : AssistantCallbackController <SetupUIConfigDelegateResult, AutoGuessSetup, BaseStationSetup>
{
    id _context;
    _Bool _autoJoinState;
    _Bool _scanningState;
    _Bool _busy;
    _Bool _initializedBasePasswordFlag;
    _Bool _performingManualRead;
    _Bool _needToNilBonjour;
    struct BSConfigurationContext *_configContext;
    NSMutableSet *_setupDelegates;
    id _uiConfigDelegate;
    NSString *_autoGuessSetupRecommendation;
    NSDictionary *_lastInstrumentation;
    _Bool _rememberDiskPassword;
    NSDate *_lastHeardFromDevice;
    NSString *_lastSystemName;
    NSString *_lastDNSName;
    NSString *_keychainBasePassword;
    NSString *_keychainWiFiPassword;
    NSString *_keychainDiskPassword;
    _Bool _activeTask;
}

+ (id)setupController;
+ (void)initialize;
@property(nonatomic) _Bool activeTask; // @synthesize activeTask=_activeTask;
@property(retain, nonatomic) NSString *lastDNSName; // @synthesize lastDNSName=_lastDNSName;
@property(retain, nonatomic) NSString *lastSystemName; // @synthesize lastSystemName=_lastSystemName;
@property(nonatomic) _Bool rememberDiskPassword; // @synthesize rememberDiskPassword=_rememberDiskPassword;
@property(retain, nonatomic) NSDictionary *lastInstrumentation; // @synthesize lastInstrumentation=_lastInstrumentation;
@property(retain, nonatomic) NSString *autoGuessSetupRecommendation; // @synthesize autoGuessSetupRecommendation=_autoGuessSetupRecommendation;
@property(nonatomic) id <SetupUIConfigDelegate> uiConfigDelegate; // @synthesize uiConfigDelegate=_uiConfigDelegate;
@property(readonly, nonatomic) NSMutableSet *setupDelegates; // @synthesize setupDelegates=_setupDelegates;
@property(nonatomic) id context; // @synthesize context=_context;
- (int)setupWithTargetBaseStation:(id)arg1 andSettings:(id)arg2;
- (int)setupWithTargetNetwork:(id)arg1;
- (int)setupFromAutoguessRecommendation:(id)arg1 withOptions:(id)arg2;
- (void)setupUIConfigResult:(int)arg1 withOptions:(id)arg2;
- (long long)ethernetPortCount;
- (struct _BaseStation *)bsRef;
- (_Bool)dirty;
@property(retain, nonatomic) NSDictionary *bonjourRecord;
@property(nonatomic) _Bool rememberWiFiPassword;
@property(nonatomic) _Bool rememberBasePassword;
@property(readonly, nonatomic) NSDate *lastHeardFromDevice; // @synthesize lastHeardFromDevice=_lastHeardFromDevice;
- (_Bool)isMonitoring;
- (int)setMonitorForChanges:(_Bool)arg1;
- (int)taskArchiveDiskAsync:(id)arg1;
- (int)taskEraseDiskAsync:(id)arg1;
- (int)taskUploadFirmwareAsync:(id)arg1;
- (int)taskRestoreDefaultsAsync:(_Bool)arg1;
- (int)taskRestartAsync;
- (int)busyState;
- (unsigned int)taskCode;
- (int)taskState;
- (int)rpcWPSAllowClientAsync:(id)arg1;
- (int)rpcWPSStopAsync;
- (int)rpcWPSStartAsync:(_Bool)arg1 dayPass:(_Bool)arg2 timeout:(unsigned int)arg3;
- (int)rpcRenewDHCPLeaseAsync;
- (int)rpcDisconnectAllDiskUsersWithMessageAsync:(id)arg1;
- (int)rpcRefreshBSSettingAsync:(int)arg1;
- (int)rpcStartRemoteBrowse:(id)arg1 withService:(id)arg2;
- (int)rpcSystemInterfacesAsync;
- (void)deleteKeychainWirelessPassword;
- (void)saveKeychainWirelessPassword;
- (void)loadKeychainWirelessPassword;
- (void)deleteKeychainBasePassword;
- (void)saveKeychainBasePassword;
- (void)loadKeychainBasePassword;
- (int)updateKeychainWithPasswords;
- (int)updateKeychainWithPasswordsWithStatus:(int)arg1;
- (void)updateRememberKeychainFlagsButSkipBasePassword:(_Bool)arg1;
- (void)updateRememberKeychainFlagsIfInitializing;
- (id)allKeychainMACAddresses;
- (id)bestKeychainMACAddress;
- (int)snapshotPop:(_Bool)arg1;
- (int)snapshotPush;
- (_Bool)snapshotDirty;
- (void)snapshotResetAll;
- (id)snapshotChangedKeys;
- (int)updateSettingsAsync;
- (int)readPropertyListFromBaseAsync:(id)arg1;
- (int)readAllPropertiesFromBaseAsync;
- (int)joinAndBrowseAsync;
- (int)joinAsync;
@property(retain, nonatomic) NSString *keychainDiskPassword; // @dynamic keychainDiskPassword;
@property(retain, nonatomic) NSString *keychainWiFiPassword; // @dynamic keychainWiFiPassword;
@property(retain, nonatomic) NSString *keychainBasePassword; // @dynamic keychainBasePassword;
- (int)unIgnoreProblemCode:(unsigned int)arg1;
- (int)ignoreProblemCode:(unsigned int)arg1;
- (id)validateSettingsAndGetErrors:(id)arg1;
- (id)validateAllSettingsAndGetErrors;
- (long long)unignoredProblemCount;
- (int)stateForProblem:(unsigned int)arg1;
- (_Bool)hasACPFeature:(unsigned int)arg1;
- (int)getValue:(id *)arg1 forSettingPath:(id)arg2;
- (int)copyValue:(id *)arg1 forSettingPath:(id)arg2;
- (int)setValue:(id)arg1 forSettingPath:(id)arg2;
- (int)getValue:(id *)arg1 forBSSetting:(int)arg2;
- (int)copyValue:(id *)arg1 forBSSetting:(int)arg2;
- (int)setValue:(id)arg1 forBSSetting:(int)arg2;
- (int)cancelSetup;
- (int)cancelTask;
- (int)subclassAssistantCallback:(struct AssistantCallbackContext *)arg1;
- (int)closeAllConnections;
- (void)applicationDidEnterBackgroundNotification:(id)arg1;
- (int)closeAllConnections:(_Bool)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(retain) NSDictionary *restoreRecommendation;

@end
