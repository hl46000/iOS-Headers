//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Message/MFAccount.h>

@class MFError, MFLock, MFMailboxUid, MFMessageLibrary, MFWeakObjectCache, NSMutableDictionary, NSString;

@interface MailAccount : MFAccount
{
    NSString *_path;
    NSString *_nonPersistentPath;
    MFMailboxUid *_rootMailboxUid;
    struct {
        unsigned int cacheDirtyCount:16;
        unsigned int synchronizationThreadIsRunning:1;
        unsigned int cacheHasBeenRead:1;
        unsigned int disableCacheWrite:1;
        unsigned int _UNUSED_:13;
    } _flags;
    MFMailboxUid *_inboxMailboxUid;
    MFMailboxUid *_draftsMailboxUid;
    MFMailboxUid *_sentMessagesMailboxUid;
    MFMailboxUid *_trashMailboxUid;
    MFMailboxUid *_archiveMailboxUid;
    MFMailboxUid *_junkMailboxUid;
    MFLock *_cachedMailboxenLock;
    MFLock *_deletionLock;
    MFError *_lastConnectionError;
    MFMessageLibrary *_library;
    NSMutableDictionary *_currentChokedActions;
    NSString *_mailboxCachePath;
    MFWeakObjectCache *_messageStoresCache;
    int _cachedLibraryID;
    MFLock *_cachedLibraryIDLock;
    NSString *_lastKnownHostname;
}

+ (void)_removeLookAsideValuesNotInAccountList:(id)arg1;
+ (BOOL)canMoveMessagesFromAccount:(id)arg1 toAccount:(id)arg2;
+ (void)_setOutboxMailboxUid:(id)arg1;
+ (void)setDataclassesConsideredActive:(id)arg1;
+ (id)_accountWithPath:(id)arg1;
+ (BOOL)getConfigurationFromServerForEmail:(id)arg1;
+ (BOOL)usernameIsEmailAddress;
+ (id)predefinedValueForKey:(id)arg1;
+ (id)standardAccountClass:(Class)arg1 valueForKey:(id)arg2;
+ (void)updateEmailAliasesForActiveAccounts;
+ (id)mailboxUidFromActiveAccountsForURL:(id)arg1;
+ (id)accountWithURLString:(id)arg1;
+ (id)URLForInfo:(id)arg1;
+ (id)infoForURL:(id)arg1;
+ (id)_accountForURL:(id)arg1;
+ (id)mailboxUidForFileSystemPath:(id)arg1 create:(BOOL)arg2;
+ (void)synchronouslyEmptyMailboxUidType:(int)arg1 inAccounts:(id)arg2;
+ (void)saveStateForAllAccounts;
+ (BOOL)isPredefinedAccountType;
+ (BOOL)primaryDeliveryAccountIsDynamic;
+ (id)defaultDeliveryAccount;
+ (id)_defaultMailAccountForDeliveryIncludingRestricted:(BOOL)arg1;
+ (id)defaultMailAccountForDeliveryExcludingRestricted;
+ (id)defaultMailAccountForDelivery;
+ (void)setGlobalPathForAccounts:(id)arg1;
+ (id)defaultPathNameForAccountWithHostname:(id)arg1 username:(id)arg2;
+ (id)defaultAccountDirectory;
+ (id)defaultPathForAccountWithHostname:(id)arg1 username:(id)arg2;
+ (id)newAccountWithDictionary:(id)arg1;
+ (id)newAccountWithPath:(id)arg1;
+ (id)accountWithPath:(id)arg1;
+ (id)allMailboxUids;
+ (id)outboxMessageStore:(BOOL)arg1;
+ (id)outboxMailboxUid;
+ (id)addressesThatReceivedMessage:(id)arg1;
+ (id)accountThatMessageIsFrom:(id)arg1;
+ (id)accountThatMessageIsFrom:(id)arg1 includingInactive:(BOOL)arg2;
+ (id)accountUsingHeadersFromMessage:(id)arg1;
+ (id)accountForHeaders:(id)arg1 message:(id)arg2 includingInactive:(BOOL)arg3;
+ (id)accountContainingEmailAddress:(id)arg1;
+ (id)accountContainingEmailAddress:(id)arg1 includingInactive:(BOOL)arg2;
+ (id)_accountContainingEmailAddress:(id)arg1 matchingAddress:(id *)arg2 fullUserName:(id *)arg3 includingInactive:(BOOL)arg4;
+ (id)allEmailAddressesIncludingFullUserName:(BOOL)arg1 includeReceiveAliases:(BOOL)arg2;
+ (void)updateAutoFetchSettings;
+ (void)resetMailboxTimers;
+ (id)existingAccountWithType:(id)arg1 hostname:(id)arg2 username:(id)arg3;
+ (id)accountWithUniqueId:(id)arg1;
+ (id)activeAccountsWithError:(id *)arg1;
+ (id)activeAccounts;
+ (void)_removeAccountFromSortedPaths:(id)arg1;
+ (void)setMailAccounts:(id)arg1 saveIfChanged:(BOOL)arg2;
+ (void)setMailAccounts:(id)arg1;
+ (void)removeMailAccount:(id)arg1 saveIfChanged:(BOOL)arg2;
+ (void)addMailAccount:(id)arg1 saveIfChanged:(BOOL)arg2;
+ (id)lastMailAccountsReloadError;
+ (id)lastMailAccountsReloadDate;
+ (id)mailAccountsWithError:(id *)arg1;
+ (id)mailAccounts;
+ (void)reloadAccounts;
+ (void)_invalidateAccounts:(id)arg1 missingFromNewAccounts:(id)arg2;
+ (id)_loadDataAccessAccountsWithError:(id *)arg1;
+ (id)_loadAllAccountsWithError:(id *)arg1;
+ (void)_unregisterPendingAccount:(id)arg1;
+ (void)_registerPendingAccount:(id)arg1;
+ (id)existingDAMailAccountForDAAccount:(id)arg1;
+ (id)existingAccountForUniqueID:(id)arg1;
+ (void)_setupSortedPathsForAccounts:(id)arg1;
+ (void)_addAccountToSortedPaths:(id)arg1;
+ (void)enableMailboxListingNotifications:(BOOL)arg1;
+ (void)disableMailboxListingNotifications;
+ (BOOL)mailboxListingNotificationAreEnabled;
+ (void)initialize;
@property(readonly) BOOL sourceIsManaged;
@property(readonly) BOOL shouldArchiveByDefault;
- (int)archiveDestinationForMailbox:(id)arg1;
- (BOOL)canArchiveForMailbox:(id)arg1;
- (BOOL)preventArchiveForMailbox:(id)arg1;
- (BOOL)supportsArchiving;
- (void)setCustomSignature:(id)arg1;
- (id)customSignature;
- (id)fetchLimits;
- (BOOL)restrictedFromSyncingRecents;
- (BOOL)restrictedFromSendingExternally;
- (BOOL)restrictedFromTransferingMessagesToOtherAccounts;
- (id)copyDataForRemoteEncryptionCertificatesForAddress:(id)arg1 error:(id *)arg2;
- (int)secureCompositionEncryptionPolicyForAddress:(id)arg1;
- (int)secureCompositionSigningPolicyForAddress:(id)arg1;
- (BOOL)secureMIMEEnabled;
- (void)setEncryptionIdentityPersistentReference:(id)arg1 forAddress:(id)arg2;
- (id)encryptionIdentityPersistentReferenceForAddress:(id)arg1;
- (void)setSigningIdentityPersistentReference:(id)arg1 forAddress:(id)arg2;
- (id)signingIdentityPersistentReferenceForAddress:(id)arg1;
- (void)_setValueInAccountLookAsideProperties:(id)arg1 forKey:(id)arg2 subKey:(id)arg3;
- (void)setValueInAccountLookAsideProperties:(id)arg1 forKey:(id)arg2;
- (id)valueInAccountLookAsidePropertiesForKey:(id)arg1;
- (id)saveSentFolder;
- (id)iconString;
- (BOOL)shouldFetchBodiesWhenMovingToTrash;
- (BOOL)shouldRestoreMessagesAfterFailedDelete;
- (id)allLocalMailboxUids;
- (BOOL)isMailboxLocalForType:(int)arg1;
- (id)_localMailboxNameForType:(int)arg1 usingDisplayName:(id)arg2;
- (BOOL)moveMessages:(id)arg1 fromMailbox:(id)arg2 toMailbox:(id)arg3 markAsRead:(BOOL)arg4 unsuccessfulOnes:(id)arg5 newMessages:(id)arg6;
- (id)_newMailboxWithParent:(id)arg1 name:(id)arg2 attributes:(unsigned int)arg3 dictionary:(id)arg4 withCreationOption:(int)arg5;
- (id)newMailboxWithParent:(id)arg1 name:(id)arg2;
- (id)_copyMailboxWithParent:(id)arg1 name:(id)arg2 attributes:(unsigned int)arg3 dictionary:(id)arg4;
- (id)_deliveryAccountCreateIfNeeded:(BOOL)arg1;
- (BOOL)_cleanInboxDuplication:(id)arg1;
- (id)URLForMessage:(id)arg1;
- (void)_writeCustomInfoToMailboxCache:(id)arg1;
- (void)_readCustomInfoFromMailboxCache:(id)arg1;
- (id)_mailboxPathPrefix;
- (id)_URLForInfo:(id)arg1;
- (id)_URLScheme;
- (id)_infoForMatchingURL:(id)arg1;
- (BOOL)_shouldLogDeleteActivity;
- (BOOL)_canEmptyMessagesFromMailboxUid:(id)arg1;
- (id)_specialMailboxUidWithType:(int)arg1 create:(BOOL)arg2;
- (void)_setSpecialMailbox:(id)arg1 forType:(int)arg2;
- (void)_setSpecialMailboxName:(id)arg1 forType:(int)arg2;
- (BOOL)_assignSpecialMailboxToAppropriateIvar:(id)arg1 forType:(int)arg2;
- (id)_cachedSpecialMailboxOfType:(int)arg1;
- (id *)_specialMailboxIvarOfType:(int)arg1;
- (id)_defaultSpecialMailboxNameForType:(int)arg1;
- (id)powerAssertionIdentifierWithPrefix:(id)arg1;
- (id)description;
- (BOOL)_deleteMailbox:(id)arg1;
- (BOOL)_setChildren:(id)arg1 forMailboxUid:(id)arg2;
- (void)_writeMailboxCacheWithPrejudice:(BOOL)arg1;
- (void)_loadEntriesFromFileSystemPath:(id)arg1 parent:(id)arg2;
- (void)setMailboxCachePath:(id)arg1;
- (id)mailboxCachePath;
- (BOOL)_usesMailboxCache;
- (void)_mailboxesWereRemovedFromTree:(id)arg1 withFileSystemPaths:(id)arg2;
- (BOOL)_loadMailboxListingIntoCache:(id)arg1 attributes:(unsigned int)arg2 children:(id)arg3 parent:(id)arg4;
- (void)_synchronouslyLoadListingForParent:(id)arg1;
- (id)_copyMailboxUidWithParent:(id)arg1 name:(id)arg2 attributes:(unsigned int)arg3 existingMailboxUid:(id)arg4 dictionary:(id)arg5;
- (id)_uidNameForPathComponent:(id)arg1;
- (id)_pathComponentForUidName:(id)arg1;
- (int)_emptyFrequencyForKey:(id)arg1 defaultValue:(id)arg2;
- (void)_didBecomeActive:(BOOL)arg1;
- (void)setActive:(BOOL)arg1;
- (BOOL)isActive;
- (BOOL)isActiveWithPersistentAccount:(id)arg1;
- (BOOL)areAnyDataclassesConsideredActiveEnabled;
- (BOOL)_setPath:(id)arg1;
- (void)changePushedMailboxUidsAdded:(id)arg1 deleted:(id)arg2;
- (BOOL)supportsUserPushedMailboxes;
- (id)pushedMailboxUids;
- (void)deliveryAccountWillBeRemoved:(id)arg1;
- (void)removeUserFocusMailbox:(id)arg1;
- (void)addUserFocusMailbox:(id)arg1;
- (void)didFinishActionForChokePoint:(id)arg1 coalescePoint:(id)arg2 withResult:(id)arg3;
- (BOOL)willPerformActionForChokePoint:(id)arg1 coalescePoint:(id)arg2 result:(id *)arg3;
- (BOOL)_registerPushNotificationPrefix:(id)arg1 forMailboxNames:(id)arg2;
- (BOOL)canReceiveNewMailNotifications;
- (BOOL)_canReceiveNewMailNotifications;
- (BOOL)hasEnoughInformationForEasySetup;
- (id)unactionableInvitationICSRepresentationInMessage:(id)arg1 summary:(id *)arg2;
- (BOOL)reconstituteOrphanedMeetingInMessage:(id)arg1;
- (id)meetingStorePersistentID;
- (id)statisticsKind;
- (id)displayNameUsingSpecialNamesForMailboxUid:(id)arg1;
- (BOOL)deleteInPlaceForMailbox:(id)arg1;
- (BOOL)deleteInPlaceForAllMailboxes;
- (BOOL)derivesDeliveryAccountInfoFromMailAccount;
- (BOOL)supportsMessageFlagging;
- (BOOL)archiveSentMessages;
- (id)displayUsername;
- (int)cachePolicy;
- (void)setCachePolicy:(int)arg1;
- (BOOL)supportsMailboxEditing;
- (BOOL)supportsSyncingReadState;
- (BOOL)supportsRemoteAppend;
- (BOOL)supportsAppend;
- (BOOL)shouldAppearInMailSettings;
- (void)setupLibrary;
- (id)library;
- (void)setLibrary:(id)arg1;
- (BOOL)canForwardWithoutDownload;
- (int)libraryID;
- (void)systemWillSleep;
- (void)systemDidWake;
- (BOOL)updateEmailAliases;
- (void)transferNotificationSessionToAccount:(id)arg1;
- (void)stopListeningForNotifications;
- (void)startListeningForNotifications;
- (void)emptyTrash;
- (id)mailboxUidForURL:(id)arg1;
- (id)mailboxUidForInfo:(id)arg1;
- (id)URLString;
- (id)mailboxUidForRelativePath:(id)arg1 create:(BOOL)arg2 withOption:(int)arg3;
- (id)_childOfMailbox:(id)arg1 withComponentName:(id)arg2;
- (id)mailboxUidForRelativePath:(id)arg1 create:(BOOL)arg2;
- (void)setUnreadCount:(unsigned int)arg1 forMailbox:(id)arg2;
- (Class)storeClassForMailbox:(id)arg1;
- (Class)storeClass;
- (void)unregisterStore:(id)arg1 forUid:(id)arg2;
- (id)storeForMailboxUid:(id)arg1;
- (id)connectionError;
- (void)setConnectionError:(id)arg1;
- (void)setValueInAccountProperties:(id)arg1 forKey:(id)arg2;
- (void)setPortNumber:(unsigned int)arg1;
- (BOOL)isAccountClassEquivalentTo:(id)arg1;
- (BOOL)isHostnameEquivalentTo:(id)arg1;
- (void)setHostname:(id)arg1;
- (void)setUsername:(id)arg1;
- (void)resetMailboxURLs;
- (void)_resetAllMailboxURLs:(BOOL)arg1;
- (BOOL)deleteMailbox:(id)arg1;
- (BOOL)_renameMailbox:(id)arg1 newName:(id)arg2 parent:(id)arg3;
- (BOOL)renameMailbox:(id)arg1 newName:(id)arg2 parent:(id)arg3;
- (BOOL)renameMailbox:(id)arg1 newName:(id)arg2;
- (BOOL)moveMailbox:(id)arg1 intoParent:(id)arg2;
- (BOOL)canMailboxBeDeleted:(id)arg1;
- (BOOL)canMailboxBeRenamed:(id)arg1;
- (BOOL)newMailboxNameIsAcceptable:(id)arg1 reasonForFailure:(id *)arg2;
- (BOOL)canCreateNewMailboxes;
- (id)mailboxPathExtension;
- (void)resetSpecialMailboxes;
- (BOOL)_resetSpecialMailboxes;
- (id)displayNameForMailboxUid:(id)arg1;
- (id)displayName;
- (void)setEmptyFrequency:(int)arg1 forMailboxType:(int)arg2;
- (int)emptyFrequencyForMailboxType:(int)arg1;
- (void)_setEmptyFrequency:(int)arg1 forKey:(id)arg2;
- (void)deleteMessagesFromMailboxUid:(id)arg1 olderThanNumberOfDays:(unsigned int)arg2;
- (void)setMailboxUid:(id)arg1 forMailboxType:(int)arg2;
- (id)transferDisabledMailboxUids;
- (id)allMailboxUids;
- (id)specialMailboxNameForType:(int)arg1;
- (id)mailboxUidOfType:(int)arg1 createIfNeeded:(BOOL)arg2;
- (BOOL)shouldExpungeMessagesOnDelete;
- (id)rootMailboxUid;
- (id)allMailMailboxUid;
- (id)primaryMailboxUid;
- (BOOL)canAppendMessages;
- (void)fetchMailboxList;
- (void)nowWouldBeAGoodTimeToStartBackgroundSynchronization;
- (void)_synchronizeMailboxListWithFileSystem;
- (BOOL)_shouldConfigureMailboxCache;
- (BOOL)canFetch;
- (void)releaseAllForcedConnections;
- (void)releaseAllConnections;
- (void)saveState;
- (void)invalidateAndDelete;
- (void)invalidate;
- (void)_asynchronouslyInvalidateAndDeleteAccountData:(BOOL)arg1;
- (void)_invalidateAndDeleteAccountData:(BOOL)arg1;
- (void)_deleteHook;
- (id)emailAddressesAndAliases;
- (id)emailAddressesAndAliasesList;
- (void)setLastEmailAliasesSyncDate:(id)arg1;
- (id)lastEmailAliasesSyncDate;
- (id)fromEmailAddressesIncludingDisabled;
- (id)fromEmailAddresses;
- (void)setReceiveEmailAliasAddresses:(id)arg1;
- (id)receiveEmailAliasAddressesList;
- (id)receiveEmailAliasAddresses;
- (id)emailAddressesDictionary;
- (void)setEmailAddresses:(id)arg1;
- (id)emailAddresses;
- (void)pushUpdateForAliasData;
- (void)setEnabled:(BOOL)arg1 forEmailAddress:(id)arg2;
- (void)setDefaultEmailAddress:(id)arg1;
- (id)defaultEmailAddress;
- (id)firstEmailAddress;
- (BOOL)canUseCarrierDeliveryFallback;
- (void)setCanUseCarrierDeliveryFallback:(BOOL)arg1;
- (BOOL)canUseDeliveryAccount:(id)arg1;
- (void)setDeliveryAccountAlternates:(id)arg1;
- (void)setDeliveryAccount:(id)arg1;
- (id)deliveryAccountAlternates;
- (void)setPrimaryDeliveryAccountDisabled:(BOOL)arg1;
- (BOOL)isPrimaryDeliveryAccountDisabled;
- (id)deliveryAccount;
- (void)setFullUserName:(id)arg1;
- (id)fullUserName;
- (id)tildeAbbreviatedPath;
- (void)setLastKnownHostname:(id)arg1;
- (void)setPath:(id)arg1;
- (id)path;
- (void)dealloc;
- (id)initWithPath:(id)arg1;
- (id)initWithLibrary:(id)arg1 path:(id)arg2;
- (id)initWithLibrary:(id)arg1 persistentAccount:(id)arg2;
- (id)initWithPersistentAccount:(id)arg1;
- (void)_setAccountProperties:(id)arg1;
- (void)persistentAccountDidChange:(id)arg1 previousAccount:(id)arg2;
- (void)_invalidateCachedMailboxen;
- (id)uniqueIdForPersistentConnection;
- (void)resetMailboxTimer;
- (BOOL)isUsernameEquivalentTo:(id)arg1;
- (BOOL)isEquivalentTo:(id)arg1 hostname:(id)arg2 username:(id)arg3;
- (void)accountDidLoad;

@end
