/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <GameKit/GKDataRequest.h>

@class GKGame, GKLeaderboard;

@interface GKGetLeaderboardDataRequest : GKDataRequest
{
    GKGame *_game;
    GKLeaderboard *_leaderboard;
}

@property(retain, nonatomic) GKLeaderboard *leaderboard; // @synthesize leaderboard=_leaderboard;
@property(retain, nonatomic) GKGame *game; // @synthesize game=_game;
- (id)request;
- (id)_playerScope:(int)arg1;
- (id)_timeScope:(int)arg1;
- (id)key;
- (void)dealloc;
- (Class)responseClass;

@end

