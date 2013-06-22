/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIViewController.h"

#import "PKServiceAddPassesViewControllerProtocol-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"
#import "WLCardGroupsControllerDelegate-Protocol.h"
#import "WLCardStackViewDatasource-Protocol.h"
#import "WLCardStackViewDelegate-Protocol.h"
#import "WLXPCProxyTarget-Protocol.h"

@class NSMutableArray, NSMutableData, NSURLConnection, PKIngestibleCard, PKPassLibrary, PKUIServiceView, UINavigationBar, UIProgressView, WLCardGroupStackView, WLCardGroupsController;

@interface PKServiceAddPassesViewController : UIViewController <WLXPCProxyTarget, WLCardStackViewDelegate, WLCardStackViewDatasource, WLCardGroupsControllerDelegate, UIScrollViewDelegate, PKServiceAddPassesViewControllerProtocol>
{
    NSURLConnection *_downloadPassURLConnection;
    long long _downloadPassExpectedBytes;
    NSMutableData *_downloadPassData;
    int _containsCard;
    PKPassLibrary *_passesStore;
    BOOL _viewAppeared;
    BOOL _haveStartedIngestibleCardAnimation;
    NSMutableArray *_minimumCardHeightFromHereToTop;
    PKIngestibleCard *_ingestibleCard;
    WLCardGroupStackView *_cardStackView;
    BOOL _giveUpOnPreppingCards;
    id _remoteViewControllerProxy;
    int _presentationState;
    UINavigationBar *_navigationBar;
    UIProgressView *_progressView;
    BOOL _haveKickedOffCardFetch;
    WLCardGroupsController *_cardGroupsController;
    PKUIServiceView *_serviceView;
}

+ (id)requiredWhitelistClassNames;
@property(retain) PKUIServiceView *serviceView; // @synthesize serviceView=_serviceView;
@property(retain, nonatomic) WLCardGroupsController *cardGroupsController; // @synthesize cardGroupsController=_cardGroupsController;
@property(nonatomic) BOOL haveKickedOffCardFetch; // @synthesize haveKickedOffCardFetch=_haveKickedOffCardFetch;
@property(retain, nonatomic) UIProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain) UINavigationBar *navigationBar; // @synthesize navigationBar=_navigationBar;
@property(nonatomic) int presentationState; // @synthesize presentationState=_presentationState;
@property(retain) id remoteViewControllerProxy; // @synthesize remoteViewControllerProxy=_remoteViewControllerProxy;
@property BOOL giveUpOnPreppingCards; // @synthesize giveUpOnPreppingCards=_giveUpOnPreppingCards;
@property(retain, nonatomic) WLCardGroupStackView *cardStackView; // @synthesize cardStackView=_cardStackView;
@property(retain, nonatomic) PKIngestibleCard *ingestibleCard; // @synthesize ingestibleCard=_ingestibleCard;
@property(retain, nonatomic) NSMutableArray *minimumCardHeightFromHereToTop; // @synthesize minimumCardHeightFromHereToTop=_minimumCardHeightFromHereToTop;
@property(nonatomic) BOOL haveStartedIngestibleCardAnimation; // @synthesize haveStartedIngestibleCardAnimation=_haveStartedIngestibleCardAnimation;
@property(nonatomic) BOOL viewAppeared; // @synthesize viewAppeared=_viewAppeared;
@property(retain, nonatomic) PKPassLibrary *passesStore; // @synthesize passesStore=_passesStore;
- (void)groupsController:(id)arg1 didMoveGroup:(id)arg2 fromIndex:(unsigned int)arg3 toIndex:(unsigned int)arg4;
- (void)groupsController:(id)arg1 didRemoveGroup:(id)arg2 atIndex:(unsigned int)arg3;
- (void)groupsController:(id)arg1 didInsertGroup:(id)arg2 atIndex:(unsigned int)arg3;
- (void)_calculateMinimumCardHeights;
- (void)cardStackView:(id)arg1 didAnimateToState:(int)arg2;
- (int)suppressedContent;
- (BOOL)passesGrowWhenFlipped;
- (void)cardStackView:(id)arg1 deleteConfirmedForCard:(id)arg2;
- (float)minimumItemHeightStartingAtIndex:(unsigned int)arg1;
- (unsigned int)indexOfGroup:(id)arg1;
- (float)groupHeightAtIndex:(unsigned int)arg1;
- (unsigned int)numberOfGroups;
- (id)groupAtIndex:(unsigned int)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (void)cancelCard:(id)arg1;
- (void)acceptCard:(id)arg1;
- (void)ingestCardWithData:(id)arg1;
- (void)ingestCardAtURL:(id)arg1;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)tearDownDownloadConnection;
- (void)showDownloadingPassUI;
- (void)updateAddButtonAndSettings;
- (void)cardBackSwitchesDidChangeNotification:(id)arg1;
- (void)updateAddButton;
- (void)animateInCardIfNeeded;
- (void)dealloc;
- (void)tearDown;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)willAppearInRemoteViewController:(id)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (id)proxy:(id)arg1 detailedSignatureForSelector:(SEL)arg2;

@end
