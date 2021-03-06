/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "TSSPresetSource-Protocol.h"

// Not exported
@interface TSWPPresetSource : NSObject <TSSPresetSource>
{
}

+ (void)p_bootstrapTextStylePresetsInTheme:(id)arg1 alternate:(int)arg2 reservedCount:(unsigned long long)arg3;
+ (void)p_bootstrapListPresetsInTheme:(id)arg1 alternate:(int)arg2;
+ (void)bootstrapPresetsOfKind:(id)arg1 inTheme:(id)arg2 alternate:(int)arg3 reservedCount:(unsigned long long)arg4;
+ (void)bootstrapPresetsOfKind:(id)arg1 inTheme:(id)arg2 alternate:(int)arg3;
+ (id)presetKinds;
+ (void)p_bootstrapShapePresetsInTheme:(id)arg1 alternate:(int)arg2 reservedCount:(unsigned long long)arg3;
+ (void)p_bootstrapTextboxPresetsInTheme:(id)arg1 alternate:(int)arg2 reservedCount:(unsigned long long)arg3;
+ (void)p_bootstrapLinePresetsInTheme:(id)arg1 alternate:(int)arg2 reservedCount:(unsigned long long)arg3;
+ (id)p_bootstrapStrokeInTheme:(id)arg1 alternate:(int)arg2 index:(unsigned long long)arg3;

@end

