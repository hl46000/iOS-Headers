/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <GameKitServices/GKVoiceChatServicePrivate.h>

@class NSMutableArray, NSString;

@interface GKVoiceChatServiceFocus : GKVoiceChatServicePrivate
{
    NSMutableArray *outgoingCallDictList;
    NSMutableArray *incomingCallDictList;
    int incomingUID;
    NSString *currentFocus;
    int packetsPerBundle;
    BOOL hasMic;
}

+ (id)defaultVoiceChatService;
- (id)init;
- (void)dealloc;
- (BOOL)startVoiceChatWithParticipantID:(id)arg1 error:(id *)arg2;
- (id)dictionaryForNonce:(int)arg1 participantID:(id)arg2 isIncomingDictonary:(BOOL)arg3;
- (id)dictionaryForParticipantID:(id)arg1 isIncomingDictonary:(BOOL)arg2;
- (id)dictionaryForCallID:(int)arg1 isIncomingDictonary:(BOOL)arg2;
- (void)remoteCancelled:(id)arg1;
- (void)remoteCancelledProc:(id)arg1;
- (void)stopVoiceChatProc:(id)arg1;
- (void)stopVoiceChatProc:(id)arg1 participantDidCancel:(BOOL)arg2;
- (BOOL)acceptCallID:(int)arg1 error:(id *)arg2;
- (void)denyCallID:(int)arg1;
- (void)receivedData:(id)arg1 fromParticipantID:(id)arg2;
- (BOOL)processInviteDictionaryForTie:(id)arg1 fromParticipantID:(id)arg2;
- (id)openOutgoingDictionaryForParticipantID:(id)arg1;
- (BOOL)processInviteDictionary:(id)arg1 fromParticipantID:(id)arg2;
- (BOOL)processReplyDict:(id)arg1;
- (id)incomingDictionaryMatchingOriginalCallID:(int)arg1 participantID:(id)arg2;
- (BOOL)processCancelDict:(id)arg1;
- (BOOL)processFocusDict:(id)arg1 fromParticipantID:(id)arg2;
- (BOOL)processFocusChange:(id)arg1 fromParticipantID:(id)arg2;
- (void)sendFocusChange:(BOOL)arg1;
- (void)setChatMode:(int)arg1;
@property(copy, nonatomic) NSString *currentFocus; // @synthesize currentFocus;
- (void)setFocus:(BOOL)arg1;
@property int packetsPerBundle; // @synthesize packetsPerBundle;
@property BOOL hasMic; // @synthesize hasMic;
- (void)updatedMutedPeers:(id)arg1 forParticipantID:(id)arg2;
- (void)updatedConnectedPeers:(id)arg1;
- (void)setSpeakingDelegate:(id)arg1;
- (void)setQualityDelegate:(id)arg1;
- (void)setTalkingPeersLimit:(unsigned int)arg1;
- (void)setIsUsingSuppression:(BOOL)arg1;
- (void)setShouldTimeoutPackets:(BOOL)arg1;
- (void)videoConference:(id)arg1 didStartSession:(BOOL)arg2 withCallID:(int)arg3 error:(id)arg4;
- (void)videoConference:(id)arg1 didStopWithCallID:(int)arg2 error:(id)arg3;
- (void)setLocalVideoLayer:(void *)arg1;
- (void *)localVideoLayer;
- (void)setRemoteVideoLayer:(void *)arg1;
- (void *)remoteVideoLayer;
- (double)getLocalFramerate;
- (double)getLocalBitrate;
- (double)getRemoteFramerate;
- (double)getRemoteBitrate;
- (id)localDisplayNameForCallID:(int)arg1;
- (id)remoteDisplayNameForCallID:(int)arg1;
- (BOOL)isAudioPausedToParticipantID:(id)arg1;
- (void)pauseAudio:(BOOL)arg1 toParticipantID:(id)arg2;

@end
