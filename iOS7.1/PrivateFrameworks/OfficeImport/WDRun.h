//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class WDParagraph;

__attribute__((visibility("hidden")))
@interface WDRun : NSObject
{
    WDParagraph *mParagraph;
}

- (void)clearProperties;
- (BOOL)isEmpty;
- (void)dealloc;
- (id)initWithParagraph:(id)arg1;
- (id)init;
- (id)paragraph;
- (int)runType;

@end

