//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "IMsgExt-Protocol.h"
#import "MMKernelExt-Protocol.h"
#import "MMService-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"

@class NSMutableDictionary, NSString, WANewYearCtrlInfo, WANewYearScanReportInfo;

@interface WANewYearCtrlMgr : MMService <IMsgExt, PBMessageObserverDelegate, MMKernelExt, MMService>
{
    NSMutableDictionary *_dicContact;
    WANewYearScanReportInfo *_scanReportInfo;
    WANewYearCtrlInfo *_ctrlInfo;
}

+ (void)reportID:(unsigned int)arg1 key:(unsigned int)arg2;
@property(retain) WANewYearCtrlInfo *ctrlInfo; // @synthesize ctrlInfo=_ctrlInfo;
- (void).cxx_destruct;
- (id)ctrlInfoFromXML:(id)arg1;
- (void)processXML:(id)arg1;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)onAuthOK;
- (void)saveScanReportInfo;
- (void)tryLoadScanRpoertInfo;
- (id)scanReportInfoPath;
- (void)checkScanDelayReport;
- (void)scanDelayReport:(id)arg1 endTime:(unsigned int)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onScanRealtimeReportResponse:(id)arg1;
- (void)scanRealtimeReport:(id)arg1;
- (id)contactFromConfigItem:(id)arg1 userName:(id)arg2;
- (void)setContactListFromCtrlInfo:(id)arg1;
- (id)contactMatchScanText:(id)arg1;
- (id)contactWithUserName:(id)arg1;
- (void)notifyContactDelete:(id)arg1;
- (id)willDeleteContactListWithNewInfo:(id)arg1;
- (void)internalGetReportKeyVersion:(unsigned int *)arg1 key:(id *)arg2;
- (id)currentUserNameSet;
- (void)saveCtrlInfo:(id)arg1;
- (void)loadCtrlInfo;
- (id)ctrlInfoPath;
- (void)getReportKeyVersion:(unsigned int *)arg1 key:(id *)arg2;
- (void)scanReportWithWeAppUserName:(id)arg1 endTime:(unsigned int)arg2;
- (id)getContactWithScanText:(id)arg1;
- (id)getWeAppNewYearContact:(id)arg1;
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
