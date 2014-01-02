/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "XPCClientDelegate-Protocol.h"

@class NSObject<OS_dispatch_queue>, XPCClient;

@interface WPTransfer : NSObject <XPCClientDelegate>
{
    long long _advertiserState;
    long long _scannerState;
    id <WPTransferDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
    XPCClient *_connection;
}

@property(retain) XPCClient *connection; // @synthesize connection=_connection;
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property __weak id <WPTransferDelegate> delegate; // @synthesize delegate=_delegate;
@property long long scannerState; // @synthesize scannerState=_scannerState;
@property long long advertiserState; // @synthesize advertiserState=_advertiserState;
- (void).cxx_destruct;
- (void)updateAdvertiserState:(long long)arg1;
- (void)updateScannerState:(long long)arg1;
- (void)connectionDied;
- (void)connectionInterrupted;
- (void)messageArrived:(id)arg1;
- (void)stopAdvertising;
- (void)startAdvertising;
- (void)stopScan;
- (void)startScan;
- (id)description;
- (id)stateToString:(long long)arg1;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;

@end
