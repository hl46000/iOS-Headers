//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SBWindowContextHostViewDelegate.h"

@class NSHashTable, NSMutableDictionary, NSString, SBOrderedRequesters, SBWindowContextHostView, SBWindowContextManager, UIColor, UIScreen;

@interface SBWindowContextHostManager : NSObject <SBWindowContextHostViewDelegate>
{
    SBWindowContextManager *_contextManager;
    UIScreen *_screen;
    NSString *_identifier;
    int _jailBehavior;
    UIColor *_defaultBackgroundColorWhileHosting;
    UIColor *_defaultBackgroundColorWhileNotHosting;
    SBWindowContextHostView *_hostView;
    _Bool _suspended;
    _Bool _invalidated;
    SBOrderedRequesters *_hostRequesters;
    NSMutableDictionary *_hostRequesterInfo;
    NSHashTable *_observers;
    id <SBWindowContextHostManagerDelegate> _delegate;
    struct {
        unsigned int delegateOverrideRequester:1;
        unsigned int delegateShouldEnableContextHostingForRequester:1;
    } _flags;
}

@property(readonly, nonatomic) int jailBehavior; // @synthesize jailBehavior=_jailBehavior;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) UIScreen *screen; // @synthesize screen=_screen;
- (void)windowContextHostViewHostedContextsDidChange:(id)arg1;
- (void)_notePropertiesSetOnRealContextHostViewWhichIReallyNeedToChangeAndIKnowWhatImDoingISwear:(id)arg1 originalProperties:(id)arg2 forRequester:(id)arg3;
- (id)_realContextHostViewWhichIReallyNeedToAccessAndIKnowWhatImDoingISwear;
- (void)_hostOnDefaultWindowForRequester:(id)arg1 priority:(int)arg2 hide:(_Bool)arg3;
- (id)_overrideRequesterIfNecessary:(id)arg1;
- (void)_removeRequesterInfo:(id)arg1;
- (void)_applyRequesterInfo:(id)arg1;
- (id)_infoForRequester:(id)arg1;
- (void *)createIOSurfaceForFrame:(struct CGRect)arg1 excludeContext:(unsigned int)arg2 outTransform:(struct CGAffineTransform *)arg3;
- (void *)createIOSurfaceForFrame:(struct CGRect)arg1 outTransform:(struct CGAffineTransform *)arg2;
- (void *)createIOSurfaceForFrame:(struct CGRect)arg1;
- (void)setContextId:(unsigned int)arg1 hidden:(_Bool)arg2 forRequester:(id)arg3;
- (void)hideHostViewOnDefaultWindowForRequester:(id)arg1 priority:(int)arg2;
- (void)hideHostViewOnDefaultWindowForRequester:(id)arg1;
- (void)unhideHostViewOnDefaultWindowForRequester:(id)arg1;
- (void)orderRequesterFront:(id)arg1;
- (void)disableHostingForRequester:(id)arg1;
- (void)resumeContextHosting;
- (void)suspendContextHosting;
- (void)invalidate;
- (void)enableHostingForRequester:(id)arg1 priority:(int)arg2;
- (void)enableHostingForRequester:(id)arg1 orderFront:(_Bool)arg2;
- (id)hostViewForRequester:(id)arg1 enableAndOrderFront:(_Bool)arg2;
- (id)hostViewForRequester:(id)arg1;
- (id)description;
@property(readonly, nonatomic) unsigned long long contextCount;
@property(copy, nonatomic) UIColor *defaultBackgroundColorWhileNotHosting;
@property(copy, nonatomic) UIColor *defaultBackgroundColorWhileHosting;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
@property(nonatomic) id <SBWindowContextHostManagerDelegate> delegate;
- (void)dealloc;
- (id)initWithContextManager:(id)arg1 screen:(id)arg2 jailBehavior:(int)arg3;
- (id)initWithContextManager:(id)arg1 screen:(id)arg2;

@end

