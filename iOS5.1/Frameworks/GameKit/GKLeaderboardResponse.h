/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <GameKit/GKResponse.h>

@class GKScoreInternal, NSArray;

@interface GKLeaderboardResponse : GKResponse
{
    NSArray *_scores;
    GKScoreInternal *_localScore;
}

+ (id)codedPropertyKeys;
@property(retain, nonatomic) GKScoreInternal *localScore; // @synthesize localScore=_localScore;
@property(retain, nonatomic) NSArray *scores; // @synthesize scores=_scores;
- (id)description;
- (void)dealloc;

@end
