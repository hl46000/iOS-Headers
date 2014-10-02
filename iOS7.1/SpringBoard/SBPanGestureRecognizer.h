//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBFluidSlideGestureRecognizer.h"

@interface SBPanGestureRecognizer : SBFluidSlideGestureRecognizer
{
    double _arcCenter;
    double _arcSize;
    _Bool _recognizesHorizontalPanning;
    _Bool _recognizesVerticalPanning;
}

- (void)updateForBeganOrMovedTouches:(struct __SBGestureContext *)arg1;
- (double)computeIncrementalGestureMotion:(struct __SBGestureContext *)arg1;
- (id)initForVerticalPanning;
- (id)initForHorizontalPanning;
- (id)init;

@end
