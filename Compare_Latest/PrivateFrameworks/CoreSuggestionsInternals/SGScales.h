//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface SGScales : NSObject
{
    NSMutableDictionary *_series;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)description;
- (void)enumerateStats:(CDUnknownBlockType)arg1;
- (void)recordTime:(double)arg1 forKey:(id)arg2;
- (void)reset;
- (id)init;

@end

