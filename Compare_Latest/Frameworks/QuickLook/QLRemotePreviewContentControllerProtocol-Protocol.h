/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "QLPreviewContentControllerProtocol-Protocol.h"

@protocol QLRemotePreviewContentControllerProtocol <QLPreviewContentControllerProtocol>
- (void)_setNavigationBarVerticalOffset:(double)arg1;
- (void)_getPDFPageAtIndex:(long long)arg1 size:(struct CGSize)arg2 handler:(id)arg3;
- (void)_prepareForDrawingPages:(struct _NSRange)arg1;
- (void)_getNumberOfPagesForSize:(struct CGSize)arg1 withHandler:(id)arg2;
- (void)_willAnimateRotationTo:(long long)arg1;
- (void)_setNumberOfPreviewItems:(long long)arg1;
- (void)_setTransitioning:(_Bool)arg1;
@end
