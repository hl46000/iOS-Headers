//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIImage;

@protocol RUTrackActioning <NSObject>
+ (struct CGSize)artworkSize;
@property(copy, nonatomic) NSString *songText;
@property(nonatomic) int onActions;
@property(nonatomic) int enabledActions;
@property(nonatomic) __weak id <RUTrackActionsDelegate> trackActionsDelegate;
@property(readonly, nonatomic) struct CGSize contentSize;
@property(readonly, nonatomic) int cancelIndex;
@property(retain, nonatomic) UIImage *artworkImage;
@property(copy, nonatomic) NSString *artistText;
- (int)actionForButtonIndex:(int)arg1;
@end
