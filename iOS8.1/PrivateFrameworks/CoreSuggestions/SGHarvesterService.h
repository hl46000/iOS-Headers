//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SGHarvesterService : NSObject
{
}

- (void)addMessages:(id)arg1 source:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)addMessages:(id)arg1 source:(id)arg2;
- (void)updateMessages:(id)arg1 state:(unsigned int)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)updateMessages:(id)arg1 state:(unsigned int)arg2;
- (id)messagesToRefresh;
- (id)availableDataTypes;
- (void)harvestDataForAllDataTypesWithCompletion:(CDUnknownBlockType)arg1;
- (void)harvestDataForDataType:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;

@end

