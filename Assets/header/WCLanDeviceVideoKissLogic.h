//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCLanDeviceBaseKissLogic.h"

#import "ICdnComMgrExt-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"
#import "WCFacadeExt-Protocol.h"

@class CdnUploadTaskInfo, NSMutableArray, NSMutableDictionary, NSString, WCLanDeviceData;

@interface WCLanDeviceVideoKissLogic : WCLanDeviceBaseKissLogic <ICdnComMgrExt, PBMessageObserverDelegate, WCFacadeExt>
{
    NSMutableDictionary *m_sendTaskMap;
    WCLanDeviceData *m_deviceData;
    NSMutableArray *m_deviceWaitingUploadArray;
    CdnUploadTaskInfo *m_uploadInfo;
    _Bool m_isUploading;
    unsigned int m_uploadProgress;
    _Bool m_isDownloading;
    NSMutableArray *m_deviceWaitingDownloadArray;
}

- (void).cxx_destruct;
- (_Bool)isSightVideoExist;
- (_Bool)cancelTaskWithDevice:(id)arg1;
- (void)onKissDeviceProgressResponeWithProgress:(double)arg1 queueType:(unsigned long long)arg2;
- (void)onKissDeviceResponseWithErrorCode:(unsigned int)arg1 queueType:(unsigned long long)arg2;
- (void)onSendFileToWCLanDevice:(long long)arg1 Progress:(float)arg2 isFinish:(_Bool)arg3 ErrCode:(int)arg4;
- (void)kissDeviceWithJsonStr:(id)arg1 filePath:(id)arg2 device:(id)arg3;
- (void)OnCdnUploadProgress:(id)arg1;
- (void)OnCdnUpload:(id)arg1;
- (_Bool)stopUploadWithDevice:(id)arg1;
- (void)uploadDeviceData;
- (void)onDownloadFinish:(id)arg1 downloadType:(int)arg2;
- (void)onDownloadMediaProcessChange:(id)arg1 downloadType:(int)arg2 current:(long long)arg3 total:(long long)arg4;
- (_Bool)stopDownloadVideo:(id)arg1;
- (void)startDownloadVideo;
- (void)handleDeviceMsgTransferAppMsg:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)sendVideoRequestWithDevice:(id)arg1 isTroughSever:(_Bool)arg2 fileInfo:(id)arg3 CdnUrl:(id)arg4;
- (void)forwardData:(id)arg1 toDevice:(id)arg2 isThrouSever:(_Bool)arg3;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 deviceData:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
