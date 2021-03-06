//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HDContentProtectionObserver.h"
#import "HDHealthDatabase.h"
#import "HDSQLiteDatabasePoolDelegate.h"

@class HDContentProtectionManager, HDDatabaseJournal, HDSQLiteDatabasePool, NSLock, NSObject<OS_dispatch_group>, NSObject<OS_dispatch_queue>, NSPointerArray, NSString;

@interface HDDatabase : NSObject <HDSQLiteDatabasePoolDelegate, HDContentProtectionObserver, HDHealthDatabase>
{
    HDDatabaseJournal *_journal;
    id <HDHealthDaemon> _daemon;
    id <HDDatabaseMigrationDelegate> _databaseMigrationDelegate;
    HDSQLiteDatabasePool *_databasePool;
    HDContentProtectionManager *_contentProtectionManager;
    NSString *_threadLocalActiveConnectionKey;
    NSLock *_schemaMigrationLock;
    NSObject<OS_dispatch_queue> *_protectedDataQueue;
    int _protectedDataState;
    NSObject<OS_dispatch_queue> *_protectedDataObserverQueue;
    NSObject<OS_dispatch_queue> *_protectedDataObserverNotificationQueue;
    NSPointerArray *_protectedDataObservers;
    NSObject<OS_dispatch_queue> *_journalQueue;
    NSObject<OS_dispatch_group> *_journalGroup;
    unsigned int _pendingJournalMerges;
    NSObject<OS_dispatch_group> *_transactionGroup;
    int _invalidated;
}

@property(nonatomic) int invalidated; // @synthesize invalidated=_invalidated;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *transactionGroup; // @synthesize transactionGroup=_transactionGroup;
@property(nonatomic) unsigned int pendingJournalMerges; // @synthesize pendingJournalMerges=_pendingJournalMerges;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *journalGroup; // @synthesize journalGroup=_journalGroup;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *journalQueue; // @synthesize journalQueue=_journalQueue;
@property(retain, nonatomic) NSPointerArray *protectedDataObservers; // @synthesize protectedDataObservers=_protectedDataObservers;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *protectedDataObserverNotificationQueue; // @synthesize protectedDataObserverNotificationQueue=_protectedDataObserverNotificationQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *protectedDataObserverQueue; // @synthesize protectedDataObserverQueue=_protectedDataObserverQueue;
@property(nonatomic) int protectedDataState; // @synthesize protectedDataState=_protectedDataState;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *protectedDataQueue; // @synthesize protectedDataQueue=_protectedDataQueue;
@property(retain, nonatomic) NSLock *schemaMigrationLock; // @synthesize schemaMigrationLock=_schemaMigrationLock;
@property(retain, nonatomic) NSString *threadLocalActiveConnectionKey; // @synthesize threadLocalActiveConnectionKey=_threadLocalActiveConnectionKey;
@property(retain, nonatomic) HDContentProtectionManager *contentProtectionManager; // @synthesize contentProtectionManager=_contentProtectionManager;
@property(retain, nonatomic) HDSQLiteDatabasePool *databasePool; // @synthesize databasePool=_databasePool;
@property(nonatomic) __weak id <HDDatabaseMigrationDelegate> databaseMigrationDelegate; // @synthesize databaseMigrationDelegate=_databaseMigrationDelegate;
@property(nonatomic) __weak id <HDHealthDaemon> daemon; // @synthesize daemon=_daemon;
@property(retain, nonatomic) HDDatabaseJournal *journal; // @synthesize journal=_journal;
- (void).cxx_destruct;
- (void)_protectedDataObserverQueue_removeObserver:(id)arg1;
- (void)_protectedDataObserverQueue_addObserver:(id)arg1;
- (id)_copyProtectedDataObservers;
- (void)removeProtectedDataObserver:(id)arg1;
- (void)addProtectedDataObserver:(id)arg1;
- (void)contentProtectionStateChanged:(int)arg1 previousState:(int)arg2;
@property(readonly, nonatomic, getter=isProtectedDataAvailable) BOOL protectedDataAvailable;
- (int)_protectedDataState;
- (BOOL)_waitForJournalMerge;
- (void)_protectedDataQueue_mergeJournalAsynchronously;
- (void)addJournalEntry:(id)arg1;
- (id)newDatabaseForDatabasePool:(id)arg1 error:(id *)arg2;
- (id)_readerDatabaseWithError:(id *)arg1;
- (id)_writerDatabaseWithError:(id *)arg1;
- (BOOL)_migrateOrCreateProtectedSchemaInDatabase:(id)arg1 error:(id *)arg2;
- (id)_destroyAndReopenDatabase;
- (id)_newDatabaseConnectionWithError:(id *)arg1;
- (void)_clearJournalDirectory;
- (id)_createDatabaseConnection;
- (BOOL)performMigrationForProtectedData:(BOOL)arg1 error:(id *)arg2;
- (id)databaseSizeInBytes;
- (BOOL)performJournalMergeUsingBlock:(CDUnknownBlockType)arg1 errorHandler:(CDUnknownBlockType)arg2;
- (BOOL)performTransactionWithOptions:(unsigned int)arg1 usingBlock:(CDUnknownBlockType)arg2 errorHandler:(CDUnknownBlockType)arg3;
- (BOOL)_performTransactionWithOptions:(unsigned int)arg1 shouldWaitForJournalMerge:(BOOL)arg2 usingBlock:(CDUnknownBlockType)arg3 errorHandler:(CDUnknownBlockType)arg4;
- (void)invalidateAndWait;
- (void)_setActiveDatabase:(id)arg1;
- (id)_activeDatabase;
- (id)initWithHealthDaemon:(id)arg1 migrationDelegate:(id)arg2;
- (BOOL)_migrateDatabase:(id)arg1 fromUserVersion:(int)arg2 protectedDatabase:(BOOL)arg3 error:(id *)arg4;
- (BOOL)_createDataTablesInDatabase:(id)arg1 entityClasses:(id)arg2 error:(id *)arg3;
- (BOOL)_enableForeignKeysInDatabase:(id)arg1 protectedDatabase:(BOOL)arg2 error:(id *)arg3;
- (int)_currentSchemaVersionForProtectedDatabase:(BOOL)arg1;
- (id)_databaseNameForProtectedDatabase:(BOOL)arg1;
- (BOOL)_createEntitiesInDatabase:(id)arg1 protectedEntities:(BOOL)arg2 error:(id *)arg3;
- (BOOL)_migrateOrCreateSchemaWithDatabase:(id)arg1 protectedDatabase:(BOOL)arg2 error:(id *)arg3;
- (BOOL)migrateOrCreateSchemaInDatabase:(id)arg1 protectedDatabaseAvailable:(BOOL)arg2 error:(id *)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

