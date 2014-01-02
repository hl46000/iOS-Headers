/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/TSSStyle.h>

#import "TSSPreset-Protocol.h"

@class NSString;

// Not exported
@interface TSWPCharacterStyle : TSSStyle <TSSPreset>
{
}

+ (id)nullStyleWithContext:(id)arg1;
+ (id)nullStyleName;
+ (id)propertiesAllowingNSNull;
+ (id)nonEmphasisCharacterProperties;
+ (id)emphasisProperties;
+ (id)properties;
- (_Bool)transformsFontSizes;
- (void)saveToArchiver:(id)arg1;
- (void)saveToArchive:(struct CharacterStyleArchive *)arg1 archiver:(id)arg2;
- (id)initFromUnarchiver:(id)arg1;
- (void)loadFromArchive:(const struct CharacterStyleArchive *)arg1 unarchiver:(id)arg2;
@property(readonly, nonatomic) NSString *presetKind;

@end
