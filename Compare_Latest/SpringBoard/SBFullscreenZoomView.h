/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "SBZoomView.h"

@interface SBFullscreenZoomView : SBZoomView
{
    _Bool _hasImage;
    _Bool _hasFullSizedImage;
    id _surface;
}

- (void)dealloc;
- (id)surface;
- (id)initWithView:(id)arg1 screen:(id)arg2;
- (id)initWithImage:(id)arg1 screen:(id)arg2;
- (id)initWithSnapshotFrame:(struct CGRect)arg1 screen:(id)arg2 ioSurface:(void *)arg3 opaque:(_Bool)arg4 snapshotTransform:(struct CGAffineTransform)arg5;
- (id)initWithSnapshotFrame:(struct CGRect)arg1 screen:(id)arg2 image:(id)arg3 originalImageOrientation:(long long)arg4 currentImageOrientation:(long long)arg5 interfaceOrientation:(long long)arg6 doubleHeightStatusBar:(_Bool)arg7 preventSplit:(_Bool)arg8 needsZoomFilter:(_Bool)arg9 asyncDecodeImage:(_Bool)arg10 blackMatForJail:(_Bool)arg11;
- (id)_initWithFrame:(struct CGRect)arg1;

@end
