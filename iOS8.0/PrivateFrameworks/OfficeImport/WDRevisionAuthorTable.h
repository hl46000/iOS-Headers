//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, WDDocument;

__attribute__((visibility("hidden")))
@interface WDRevisionAuthorTable : NSObject
{
    NSMutableArray *mAuthors;
    WDDocument *mDocument;
}

- (unsigned int)authorAddLookup:(id)arg1;
- (void)addAuthor:(id)arg1;
- (id)authorAt:(unsigned int)arg1;
- (unsigned int)authorCount;
- (id)authors;
- (void)dealloc;
- (id)initWithDocument:(id)arg1;

@end
