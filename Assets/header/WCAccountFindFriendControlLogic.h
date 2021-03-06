//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCAccountBaseControlLogic.h"

#import "WCAccountAlertUploadAddressbookViewControllerDelegate-Protocol.h"
#import "WCFindFriendLogicDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSMutableDictionary, NSString, WCFindFriendLogic;

@interface WCAccountFindFriendControlLogic : WCAccountBaseControlLogic <WCFindFriendLogicDelegate, WCAccountAlertUploadAddressbookViewControllerDelegate>
{
    unsigned int m_uiNextIndex;
    WCFindFriendLogic *m_findFriendLogic;
    NSMutableDictionary *m_dicMobileInfo;
    NSMutableDictionary *m_dicEmailInfo;
    NSMutableArray *m_arrAddFriendMobileInfo;
    NSMutableArray *m_arrAddFriendEmailInfo;
    NSMutableArray *m_arrInviteFriendMobileInfo;
    NSArray *m_arrUserNameToAdd;
    NSArray *m_arrMobileToInvite;
}

- (void).cxx_destruct;
- (void)onEnableUploadAddressbookSkip;
- (void)onEnableUploadAddressbookEnable:(id)arg1 dicEmailInfo:(id)arg2;
- (void)onAlertUploadAddressbookMore;
- (void)onSendSmsToMFriendList:(id)arg1;
- (void)onCheckMFriendList:(id)arg1 ticket:(id)arg2 arrMobileInfo:(id)arg3 arrEmailInfo:(id)arg4;
- (void)handleSvrError:(id)arg1 message:(id)arg2 sel:(SEL)arg3;
- (void)handleLocalError:(id)arg1 sel:(SEL)arg2;
- (void)dealloc;
- (void)startLogic;
- (void)gotoNextViewController;
- (void)gotoLastViewController;
- (id)initWithData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

