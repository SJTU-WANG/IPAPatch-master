//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "EmoticonBackupOperateMgrExt-Protocol.h"
#import "MMTipsViewControllerDelegate-Protocol.h"
#import "StoreEmotionExchangeEmotionPackCgiDelegate-Protocol.h"

@class AddEmoticonWrap, MMToastViewController, NSString, StoreEmotionExchangeEmotionPackCgi;
@protocol MMUIViewControllerDelegate><EmoticonCustomManageAddLogicDelegate;

@interface EmoticonCustomManageAddLogic : MMObject <MMTipsViewControllerDelegate, StoreEmotionExchangeEmotionPackCgiDelegate, EmoticonBackupOperateMgrExt>
{
    _Bool m_isAdding;
    _Bool m_isExchanging;
    _Bool m_isJustExchange;
    AddEmoticonWrap *m_emoticonWrap;
    MMToastViewController *m_toastView;
    StoreEmotionExchangeEmotionPackCgi *m_exchangePackCgi;
    id <MMUIViewControllerDelegate><EmoticonCustomManageAddLogicDelegate> _delegate;
}

+ (id)typeNumberForImageData:(id)arg1;
@property(nonatomic) __weak id <MMUIViewControllerDelegate><EmoticonCustomManageAddLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onAddBackupEmoticonFailed:(id)arg1 isOverLimit:(_Bool)arg2;
- (void)onAddBackupEmoticonOK:(id)arg1;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2;
- (void)onExchangeEmotionPackCgiFailedWithPid:(id)arg1 AndRet:(int)arg2;
- (void)onExchangeEmotionPackCgiFailedForNoResponseWithPid:(id)arg1;
- (void)onExchangeEmotionPackCgiOkWithPid:(id)arg1 DownloadInfo:(id)arg2;
- (void)reportWithFailedReason:(unsigned int)arg1;
- (void)trySaveThumbImage;
- (void)tryDownloadThumbImage;
- (void)showComfirmTipsWithWording:(id)arg1;
- (void)showExtendLimitTipsWithWording:(id)arg1;
- (void)showSavedTips;
- (_Bool)startExchangePackForSendingWithWrap:(id)arg1;
- (_Bool)startAddEmoticonWithWrap:(id)arg1 NeedCheckTotalCountLimit:(_Bool)arg2;
- (_Bool)startExchangePackAndAddEmoticonWithWrap:(id)arg1;
- (_Bool)startAddEmoticonWithWrap:(id)arg1;
- (_Bool)checkTotalCountLimit;
@property(readonly, nonatomic) _Bool isAdding;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

