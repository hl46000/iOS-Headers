/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "_UISettings.h"

@interface SBFolderSettings : _UISettings
{
    _Bool _allowNestedFolders;
    _Bool _pinchToClose;
    _Bool _blurFolderBackground;
}

+ (id)settingsControllerModule;
@property(nonatomic) _Bool blurFolderBackground; // @synthesize blurFolderBackground=_blurFolderBackground;
@property(nonatomic) _Bool pinchToClose; // @synthesize pinchToClose=_pinchToClose;
@property(nonatomic) _Bool allowNestedFolders; // @synthesize allowNestedFolders=_allowNestedFolders;
- (void)setDefaultValues;

@end
