/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class HSConnectionConfiguration, HSConnectionStream, HSFairPlayInfo, NSObject<OS_dispatch_queue>, NSString, NSURL;

@interface HSConnection : NSObject
{
    HSConnectionConfiguration *_configuration;
    long long _connectionState;
    HSConnectionStream *_connectionStream;
    long long _connectionType;
    NSObject<OS_dispatch_queue> *_queue;
    struct __CFReadStream *_readStream;
    _Bool authenticationRequired;
    _Bool tokenCheckRequired;
    _Bool _tokenCheckRequred;
    unsigned int basePlaylistContainerID;
    unsigned int databaseID;
    unsigned int databaseRevision;
    unsigned int sessionID;
    unsigned int _interfaceID;
    unsigned int _controlKey;
    unsigned int _controlPort;
    unsigned int _promptID;
    HSFairPlayInfo *fairPlayInfo;
    NSString *homeSharingGroupID;
    NSString *password;
    NSString *username;
}

@property(nonatomic) unsigned int promptID; // @synthesize promptID=_promptID;
@property unsigned int controlPort; // @synthesize controlPort=_controlPort;
@property unsigned int controlKey; // @synthesize controlKey=_controlKey;
@property unsigned int interfaceID; // @synthesize interfaceID=_interfaceID;
@property(readonly, getter=isTokenCheckRequired) _Bool tokenCheckRequred; // @synthesize tokenCheckRequred=_tokenCheckRequred;
@property(copy) NSString *username; // @synthesize username;
@property _Bool tokenCheckRequired; // @synthesize tokenCheckRequired;
@property unsigned int sessionID; // @synthesize sessionID;
@property(copy) NSString *password; // @synthesize password;
@property(copy) NSString *homeSharingGroupID; // @synthesize homeSharingGroupID;
@property(retain) HSFairPlayInfo *fairPlayInfo; // @synthesize fairPlayInfo;
@property unsigned int databaseRevision; // @synthesize databaseRevision;
@property unsigned int databaseID; // @synthesize databaseID;
@property(readonly) long long connectionType; // @synthesize connectionType=_connectionType;
@property long long connectionState; // @synthesize connectionState=_connectionState;
@property unsigned int basePlaylistContainerID; // @synthesize basePlaylistContainerID;
@property(getter=isAuthenticationRequired) _Bool authenticationRequired; // @synthesize authenticationRequired;
- (void)_setupControlConnectionWithInternalConnectionCompletionHandler:(id)arg1;
- (void)_sendRequest:(id)arg1 withInternalResponseHandler:(id)arg2;
- (unsigned int)_sapVersionForConnectionType;
- (void)_notifyServerOfActivity;
- (void)_loadDatabaseWithInternalConnectionCompletionHandler:(id)arg1;
- (void)_continueFPSetupNegotiationWithData:(id)arg1 internalConnectionCompletionHandler:(id)arg2;
- (void)checkForDatabaseUpdatesWithCompletionHandler:(id)arg1;
- (void)sendRequest:(id)arg1 withResponseHandler:(id)arg2;
- (id)newControlConnection;
- (void)disconnect;
- (void)connectWithCompletionHandler:(id)arg1;
@property(readonly) NSURL *baseURL;
- (void)dealloc;
- (id)initWithConfiguration:(id)arg1 connectionType:(long long)arg2;
- (id)initWithBaseURL:(id)arg1 connectionType:(long long)arg2;
- (id)initWithBaseURL:(id)arg1;

@end

