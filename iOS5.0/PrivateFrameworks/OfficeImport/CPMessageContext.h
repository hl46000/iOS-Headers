/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary, NSMutableSet;

@interface CPMessageContext : NSObject
{
    NSMutableSet *m_warnings;
    NSMutableSet *m_errors;
    NSMutableArray *m_currentObjectStack;
    NSMutableDictionary *m_placeholderToObjectIdMap;
}

+ (void)initialize;
+ (void)reportObjectOrPlaceholder:(id)arg1 withWarning:(struct CPTaggedMessageStructure *)arg2 parameters:(char *)arg3;
+ (id)currentObjectOrPlaceholder;
+ (void)reportObject:(id)arg1 withWarning:(struct CPTaggedMessageStructure *)arg2;
+ (void)reportWarning:(struct CPTaggedMessageStructure *)arg1;
+ (void)reportError:(struct CPTaggedMessageStructure *)arg1;
+ (void)reportWarningException:(id)arg1;
+ (void)reportErrorException:(id)arg1;
+ (void)createContextForCurrentThread;
+ (void)removeContextForCurrentThread;
+ (id)getWarningArray;
+ (id)getErrorArray;
+ (void)setIsFileStructuredStorage:(BOOL)arg1;
+ (BOOL)isFileStructuredStorage;
+ (void)pushCurrentObject:(id)arg1;
+ (void)popCurrentObject;
+ (id)pushCurrentPlaceholder;
+ (void)popCurrentPlaceholder:(id)arg1;
+ (void)setObject:(id)arg1 forPlaceholder:(id)arg2;
+ (void)replacePlaceholdersWithObjects;
+ (unsigned int)saveObjectStack;
+ (void)restoreObjectStack:(unsigned int)arg1;
+ (id)errorsUsingName:(id)arg1;
+ (id)warningsUsingName:(id)arg1;
- (id)init;
- (void)dealloc;

@end

