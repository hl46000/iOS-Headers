/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSString.h"

#import "NSCopying-Protocol.h"

@interface AXAttributedString : NSString <NSCopying>
{
    struct __CFAttributedString *_string;
}

+ (id)string;
+ (id)axAttributedStringWithString:(id)arg1;
- (id)description;
- (id)axAttributedStringDescription;
- (id)substringFromIndex:(unsigned int)arg1;
- (BOOL)hasAttribute:(id)arg1;
- (id)coalescedFontAttributes;
- (id)attributedSubstringFromRange:(struct _NSRange)arg1;
- (id)uppercaseString;
- (id)lowercaseString;
- (id)string;
- (BOOL)isAXAttributedString;
- (void)enumerateAttributesUsingBlock:(id)arg1;
- (id)attributeValueForKey:(id)arg1;
- (id)attributesAtIndex:(int)arg1 effectiveRange:(struct _NSRange *)arg2;
- (void)appendAXAttributedString:(id)arg1;
- (void)appendString:(id)arg1;
- (void)setAttributes:(id)arg1 withRange:(struct _NSRange)arg2;
- (void)setAttribute:(id)arg1 forKey:(id)arg2 withRange:(struct _NSRange)arg3;
- (void)setAttribute:(id)arg1 forKey:(id)arg2;
- (void)setAttributes:(id)arg1;
- (struct __CFAttributedString *)cfAttributedString;
- (void)replaceString:(struct __CFString *)arg1;
- (unsigned short)characterAtIndex:(unsigned int)arg1;
- (unsigned int)length;
- (void)convertAttachmentsWithBlock:(id)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCFAttributedString:(struct __CFAttributedString *)arg1;
- (id)initWithString:(id)arg1;

@end
