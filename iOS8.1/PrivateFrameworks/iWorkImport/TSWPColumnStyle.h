//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSSStyle.h>

#import "TSWPColumnMetrics.h"

@class TSWPPadding;

__attribute__((visibility("hidden")))
@interface TSWPColumnStyle : TSSStyle <TSWPColumnMetrics>
{
}

+ (id)defaultStyleWithContext:(id)arg1;
+ (id)defaultValueForProperty:(int)arg1;
+ (float)defaultFloatValueForProperty:(int)arg1;
+ (int)defaultIntValueForProperty:(int)arg1;
+ (id)propertiesAllowingNSNull;
+ (id)properties;
- (void)saveToArchiver:(id)arg1;
- (void)saveToArchive:(struct ColumnStyleArchive *)arg1 archiver:(id)arg2;
- (id)initFromUnarchiver:(id)arg1;
- (void)loadFromArchive:(const struct ColumnStyleArchive *)arg1 unarchiver:(id)arg2;
@property(readonly, nonatomic) BOOL columnsAreLeftToRight;
@property(readonly, nonatomic) BOOL shrinkTextToFit;
@property(readonly, nonatomic) BOOL alwaysStartsNewTarget;
- (float)positionForColumnIndex:(unsigned int)arg1 bodyWidth:(float)arg2 target:(id)arg3 outWidth:(float *)arg4 outGap:(float *)arg5;
- (float)gapForColumnIndex:(unsigned int)arg1 bodyWidth:(float)arg2;
- (float)widthForColumnIndex:(unsigned int)arg1 bodyWidth:(float)arg2;
@property(readonly, nonatomic) unsigned int columnCount;
- (BOOL)equalWidth;
@property(readonly, nonatomic) TSWPPadding *layoutMargins;
- (struct CGSize)adjustedInsetsForTarget:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) float textScaleFactor;

@end
