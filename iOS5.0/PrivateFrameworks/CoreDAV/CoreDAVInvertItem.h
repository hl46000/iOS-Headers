/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVPrincipalItem;

@interface CoreDAVInvertItem : CoreDAVItem
{
    CoreDAVPrincipalItem *_principal;
}

@property(retain) CoreDAVPrincipalItem *principal; // @synthesize principal=_principal;
- (id)copyParseRules;
- (id)description;
- (void)write:(id)arg1;
- (void)dealloc;
- (id)init;

@end

