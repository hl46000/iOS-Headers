/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <MusicUI/MusicSongTableViewCell.h>

@class NSString, UILabel, UIView;

@interface MusicCollectionTrackTableViewCell : MusicSongTableViewCell
{
    UILabel *_durationLabel;
    UILabel *_subtitleLabel;
    UILabel *_titleLabel;
    UIView *_topSeparatorView;
    UILabel *_trackNumberLabel;
    double _maximumDurationWidth;
}

@property(nonatomic) double maximumDurationWidth; // @synthesize maximumDurationWidth=_maximumDurationWidth;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *trackNumberText;
@property(copy, nonatomic) NSString *title;
@property(copy, nonatomic) NSString *subtitle;
- (void)setPlaying:(_Bool)arg1;
@property(copy, nonatomic) NSString *durationText;
- (void)setDisplayAsDisabled:(_Bool)arg1;
- (void)layoutSubviews;

@end
