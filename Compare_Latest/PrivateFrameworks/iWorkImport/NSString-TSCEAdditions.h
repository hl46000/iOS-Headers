//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSString.h"

@interface NSString (TSCEAdditions)
+ (id)stringWithCellRange:(struct)arg1 stickyBits:(unsigned char)arg2;
+ (id)stringWithCellReference:(CDStruct_78b871e1)arg1 stickyBits:(unsigned char)arg2;
+ (id)stringWithCellID:(CDStruct_0441cfb5)arg1 stickyBits:(unsigned char)arg2;
+ (id)stringWithSignedCellID:(CDStruct_f2a491fb)arg1 stickyBits:(unsigned char)arg2;
- (id)stringByFoldingForNamedReferenceMatchingWithLocale:(id)arg1;
- (id)referenceComponentsSeparatedBySpace;
- (id)referenceComponentsSeparatedByColon;
- (id)p_referenceComponentsSeparatedByCharacterInSet:(id)arg1;
- (id)referenceComponentsSeparatedByPathDelimiter;
- (id)stringByRemovingNewlines;
- (id)stringByReplacingTabsAndNewlinesWithASingleSpace;
- (id)newStringByAddingDoubleQuoteEscapesIfNecessary;
- (id)stringByUnescapingPartialQuotedStringWithEmptyQuotedStringOK:(BOOL)arg1 preserveTrailingUnquotedWhitespace:(BOOL)arg2;
- (id)stringByUnescapingPartialQuotedStringWithEmptyQuotedStringOK:(BOOL)arg1;
- (id)stringByUnescapingPartialQuotedString;
- (BOOL)isSingleQuoted;
- (id)stringByUnescapingSingleQuotes;
- (id)stringByUnescapingSingleQuotesAndGettingTrailingWhitespaceCount:(unsigned int *)arg1;
- (id)newStringByAddingSingleQuoteEscapesIfNecessary;
- (id)stringByForcingSingleQuoteEscapes:(BOOL)arg1;
- (id)stringByAddingSingleQuoteEscapesIfNecessary;
- (id)stringByAddingSingleQuoteEscapes;
- (id)newStringByForcingSingleQuoteEscapes:(BOOL)arg1;
- (BOOL)needsReferenceSingleQuoteEscaping;
- (void)p_initializeQuotes;
- (BOOL)hasBoolValue:(char *)arg1;
- (CDStruct_0441cfb5)coordinateValueGettingStickyBits:(char *)arg1;
- (CDStruct_0441cfb5)coordinateValue;
- (id)initWithCellID:(CDStruct_f2a491fb)arg1 stickyBits:(unsigned char)arg2;
@end

