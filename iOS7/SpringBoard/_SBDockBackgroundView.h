/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

@class SBWallpaperEffectView, UIImage;

@interface _SBDockBackgroundView : UIView
{
    UIImage *_maskImage;
    double _maskHeight;
    SBWallpaperEffectView *_maskedView;
    SBWallpaperEffectView *_unmaskedView;
}

- (void)setStyle:(long long)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithMaskImage:(id)arg1;

@end

