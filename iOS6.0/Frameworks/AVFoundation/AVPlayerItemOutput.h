/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class AVPlayerItemOutputInternal;

@interface AVPlayerItemOutput : NSObject
{
    AVPlayerItemOutputInternal *_outputInternal;
}

- (void)_setTimebase:(struct OpaqueCMTimebase *)arg1;
- (void)_detachFromPlayerItem;
- (void)_attachToPlayerItem:(id)arg1;
- (id)_weakReference;
@property(nonatomic) BOOL suppressesPlayerRendering;
- (CDStruct_1b6d18a9)itemTimeForMachAbsoluteTime:(long long)arg1;
- (CDStruct_1b6d18a9)itemTimeForHostTime:(double)arg1;
- (void)dealloc;
- (id)init;

@end

