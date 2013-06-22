/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iPodUI/IUSectionInfo.h>

@class MPMediaQuerySectionInfo;

@interface IUQuerySectionInfo : IUSectionInfo
{
    MPMediaQuerySectionInfo *_sectionInfo;
}

- (unsigned int)indexOfSectionForSectionIndexTitleAtIndex:(unsigned int)arg1;
- (id)titleOfSectionAtIndex:(unsigned int)arg1;
- (id)titleOfIndexBarSectionAtIndex:(unsigned int)arg1;
- (unsigned int)numberOfIndexBarTitles;
- (unsigned int)numberOfSections;
- (unsigned int)indexOfSectionAtIndex:(unsigned int)arg1;
- (void)dealloc;
- (id)initWithMediaQuerySectionInfo:(id)arg1;

@end
