//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HMActionSet, NSUUID;

@interface HMAction : NSObject
{
    unsigned int _actionType;
    NSUUID *_uuid;
    HMActionSet *_actionSet;
}

+ (id)actionWithInfo:(id)arg1 home:(id)arg2;
+ (id)lookupActionWithInfo:(id)arg1 inArray:(id)arg2;
@property(nonatomic) __weak HMActionSet *actionSet; // @synthesize actionSet=_actionSet;
@property(retain, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(nonatomic) unsigned int actionType; // @synthesize actionType=_actionType;
- (void).cxx_destruct;
- (void)invalidate;
- (void)configure:(id)arg1 actionSet:(id)arg2;
- (BOOL)handleUpdates:(id)arg1;
- (id)serializeForAdd;

@end

