/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSDictionary;

// Not exported
@interface TSWPPhonetics : NSObject
{
    NSDictionary *_transcribers;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedDictionary;
+ (id)_singletonAlloc;
- (id)transcriberWithIdentifier:(id)arg1;
- (id)pronunciationForBaseText:(id)arg1 locale:(id)arg2 inputLanguage:(id)arg3;
- (void)dealloc;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)autorelease;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)retain;

@end

