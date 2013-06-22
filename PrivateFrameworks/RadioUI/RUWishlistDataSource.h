/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, RadioModel;

@interface RUWishlistDataSource : NSObject
{
    RadioModel *_model;
    NSArray *_wishlistedTracks;
    id <RUWishlistDataSourceDelegate> _delegate;
}

@property(nonatomic) id <RUWishlistDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_radioModelDidChangeNotification:(id)arg1;
@property(readonly, nonatomic) NSArray *wishlistedTracks;
- (void)deleteWishlistedTrack:(id)arg1;
- (void)deleteAllWishlistedTracks;
- (void)dealloc;
- (id)init;

@end
