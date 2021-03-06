//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "MMService-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"

@class NSString;

@interface WAAuthorizeCancelReportMgr : MMService <PBMessageObserverDelegate, MMService>
{
}

- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onOperateWxDataResponseConfirm:(id)arg1 withRequest:(id)arg2;
- (void)onAuthorizeConfirmResponse:(id)arg1 withRequest:(id)arg2;
- (void)onLoginConfirmResponse:(id)arg1 withRequest:(id)arg2;
- (void)cancelOperateWXDataConfirmWithAppID:(id)arg1 data:(id)arg2 scope:(id)arg3 debugModeType:(unsigned int)arg4;
- (void)cancelAuthorizeConfirmWithAppID:(id)arg1 scope:(id)arg2 debugModeType:(unsigned int)arg3;
- (void)cancelLoginConfirmWithAppID:(id)arg1 scope:(id)arg2 loginType:(unsigned int)arg3 debugModeType:(unsigned int)arg4;
- (void)onServiceClearData;
- (void)onServiceReloadData;
- (void)onServiceInit;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

