/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "ACUIViewController.h"

#import "DAAutoDiscoveryConsumer-Protocol.h"
#import "DAValidityCheckConsumer-Protocol.h"
#import "UIActionSheetDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"

@class DAAccount;

@interface DASettingsAccountsUIController : ACUIViewController <DAValidityCheckConsumer, DAAutoDiscoveryConsumer, UIActionSheetDelegate, UIAlertViewDelegate>
{
    DAAccount *_account;
    BOOL _isSettingUpNewAccount;
    BOOL _accountNeedsAdd;
    BOOL _attemptedAutodiscovery;
    BOOL _attemptedValidation;
    BOOL _validatedSuccessfully;
    BOOL _confirmedUnvalidatedAccount;
    BOOL _needsSave;
    BOOL _haveRegisteredForAccountsChanged;
    BOOL _didSetFullHostURL;
}

@property(nonatomic) BOOL didSetFullHostURL; // @synthesize didSetFullHostURL=_didSetFullHostURL;
@property BOOL attemptedValidation; // @synthesize attemptedValidation=_attemptedValidation;
@property BOOL needsSave; // @synthesize needsSave=_needsSave;
- (void)deleteAccountButtonTapped;
- (id)localizedAccountTitleString;
- (id)localizedAccountSetupTitleString;
- (id)localizedConfirmSaveUnvalidatedAccountMessageString;
- (id)localizedConfirmSaveUnvalidatedAccountTitleString;
- (id)localizedValidationFailureTitleString;
- (id)lastGroupSpecifierInSpecifiers:(id)arg1;
- (id)currentlyEditingCell;
- (int)indexOfCurrentlyEditingCell;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)dealloc;
- (void)hideProgressWithPrompt:(id)arg1;
- (BOOL)isRunningFromMobileMailApp;
- (void)operationsHelper:(id)arg1 didSaveAccount:(id)arg2 withSuccess:(BOOL)arg3 error:(id)arg4;
- (void)_saveAccountDismissWhenDone:(BOOL)arg1;
- (void)_finishSaveAccountDismissWhenDone:(BOOL)arg1;
- (void)operationsHelper:(id)arg1 didRemoveAccount:(id)arg2 withSuccess:(BOOL)arg3 error:(id)arg4;
- (void)_deleteAccount;
- (void)_dismissAndUpdateParent;
- (id)accountBooleanPropertyWithSpecifier:(id)arg1;
- (void)setAccountBooleanProperty:(id)arg1 withSpecifier:(id)arg2;
- (id)accountPropertyWithSpecifier:(id)arg1;
- (void)setAccountProperty:(id)arg1 withSpecifier:(id)arg2;
- (void)setHostString:(id)arg1;
- (id)_defaultAccountDescription;
- (void)propertyValueChanged:(id)arg1;
- (BOOL)haveEnoughValues;
- (BOOL)transitionsAfterInitialSetup;
- (BOOL)dismissesAfterInitialSetup;
- (void)updateDoneButton;
- (void)setNeedsSaveAndValidation:(BOOL)arg1;
- (void)cancelButtonTapped:(id)arg1;
- (void)doneButtonTapped:(id)arg1;
- (void)finishedAccountSetup;
- (void)account:(id)arg1 isValid:(BOOL)arg2 validationError:(id)arg3;
- (void)_beginAccountValidation;
- (void)account:(id)arg1 wasAutoDiscovered:(BOOL)arg2 error:(id)arg3;
- (BOOL)_beginAccountAutodiscovery;
- (void)_confirmSaveUnvalidatedAccount;
- (void)didConfirmSaveUnvalidatedAccount:(BOOL)arg1;
- (void)didConfirmTryWithoutSSL:(BOOL)arg1;
- (void)showSSLFailureView;
- (void)showIdenticalAccountFailureView;
- (BOOL)autodiscoverAccount;
- (BOOL)validateAccount;
- (void)viewWillAppear:(BOOL)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)accountSpecifiers;
- (id)autodiscoverySpecifiers;
- (id)specifiers;
- (id)newDefaultAccount;
- (id)daAccountWithBackingAccountInfo:(id)arg1;
- (id)accountFromSpecifier;
- (void)reloadAccount;
@property(readonly, nonatomic) DAAccount *account;
- (void)_accountsChanged:(id)arg1;

@end
