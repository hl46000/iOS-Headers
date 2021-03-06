/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/TSPSaveOperationState.h>

@class NSURL, NSUUID, TSPDocumentProperties, TSPObject;

// Not exported
@interface TSPDocumentSaveOperationState : TSPSaveOperationState
{
    _Bool _shouldLeavePendingEndSave;
    NSURL *_URL;
    TSPDocumentProperties *_documentProperties;
    TSPObject *_documentObject;
    TSPObject *_supportObject;
    id <TSPPackage> _documentPackage;
    id <TSPPackage> _supportPackage;
    NSUUID *_documentUUID;
}

@property(nonatomic) _Bool shouldLeavePendingEndSave; // @synthesize shouldLeavePendingEndSave=_shouldLeavePendingEndSave;
@property(copy, nonatomic) NSUUID *documentUUID; // @synthesize documentUUID=_documentUUID;
@property(retain, nonatomic) id <TSPPackage> supportPackage; // @synthesize supportPackage=_supportPackage;
@property(retain, nonatomic) id <TSPPackage> documentPackage; // @synthesize documentPackage=_documentPackage;
@property(retain, nonatomic) TSPObject *supportObject; // @synthesize supportObject=_supportObject;
@property(retain, nonatomic) TSPObject *documentObject; // @synthesize documentObject=_documentObject;
@property(retain, nonatomic) TSPDocumentProperties *documentProperties; // @synthesize documentProperties=_documentProperties;
@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (void).cxx_destruct;
- (id)initWithURL:(id)arg1 updateType:(unsigned long long)arg2;
- (id)init;

@end

